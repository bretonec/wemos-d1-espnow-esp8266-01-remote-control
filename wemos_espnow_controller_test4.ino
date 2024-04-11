#include <ESP8266WiFi.h>
#include <espnow.h>
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "Wire.h"
#include "I2CKeyPad.h"

//Pins
const int8_t RST_PIN = D9;
const int8_t CE_PIN = D2;
const int8_t DC_PIN = D6;
const int8_t DIN_PIN = D7;  // Uncomment for Software SPI
const int8_t CLK_PIN = D5;  // Uncomment for Software SPI
//const int8_t BL_PIN = D0;
//unsigned char data1;

// Enter the MAC address of the first slave device
uint8_t broadcastAddress1[] = {0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX};

// Enter the MAC address of the second slave device
uint8_t broadcastAddress2[] = {0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX};

Adafruit_PCD8544 display = Adafruit_PCD8544(DC_PIN, CE_PIN, RST_PIN);

const uint8_t KEYPAD_ADDRESS = 0x21; //adresa i2c

I2CKeyPad keyPad(KEYPAD_ADDRESS);
char keymap[19] = "123A456B789C*0#DNF";  // N = NoKey, F = Fail

void OnDataSent(uint8_t *mac_addr, uint8_t espStatus) {
  char macStr[18];
  // Convert MAC address to string format
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  Serial.print("Delivery Status of: ");
  Serial.print(macStr);
  Serial.println(espStatus == 0 ? " Sent Successfully" : " Fail to send"); 
  display.clearDisplay();
  display.setCursor(0,12);
  display.println(espStatus == 0 ? " Sent Successfully" : " Fail to send");
  display.display();
}


void setup() {
  Serial.begin(2400);
  mySerial.begin(2400);
  Serial.println("OK");
  Serial.println("\n\nWeMos D1 Mini + Nokia 5110 PCD8544 84x48 Monochrome LCD\nUsing Adafruit_PCD8544 and Adafruit_GFX libraries\n");
  pinMode(switchPin1, INPUT_PULLUP);   // Setting pin 11 as output pin
  Wire.begin();
  Wire.setClock(400000);
  display.begin();
  display.setContrast(50);  // Adjust for your display
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(10,10);
  display.println("Welcome!");
  display.display();
  Serial.println("Show bitmap");
  // Show the Adafruit logo, which is preloaded into the buffer by their library
  // display.clearDisplay();
  delay(2000);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  esp_now_init();
  esp_now_set_self_role(ESP_NOW_ROLE_CONTROLLER);
  // Register callback for data send status
  esp_now_register_send_cb(OnDataSent);

  esp_now_add_peer(broadcastAddress1, ESP_NOW_ROLE_SLAVE, 1, NULL, 0);
  esp_now_add_peer(broadcastAddress2, ESP_NOW_ROLE_SLAVE, 1, NULL, 0);

  if (keyPad.begin() == false)
  {
    Serial.println("\nERROR: cannot communicate to keypad.\nPlease reboot.\n");
    while (1);
  }

  keyPad.loadKeyMap(keymap);
}

   
void loop() {
  if (keyPad.isPressed()) {
    char ch = keyPad.getChar();     // note we want the translated char
    int key = keyPad.getLastKey();
    int chr = keyPad.getChar();
    Serial.print(key);
    Serial.print(" \t");
    Serial.println(ch);
    Serial.print(" \t");
    Serial.println(chr);
    if (key == 0) {
      uint8_t dataToSend = 1;
      //mySerial.println("1");
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (key == 1) {
      uint8_t dataToSend = 2;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 51) {
      uint8_t dataToSend = 3;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 52) {
      uint8_t dataToSend = 4;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 53) {
      uint8_t dataToSend = 5;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 54) {
      uint8_t dataToSend = 6;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 55) {
      uint8_t dataToSend = 8;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 56) {
      uint8_t dataToSend = 9;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 57) {
      uint8_t dataToSend = 10;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      //display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 48) {
      uint8_t dataToSend = 13;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 65) {
      uint8_t dataToSend = 1;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 66) {
      uint8_t dataToSend = 2;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 67) {
      uint8_t dataToSend = 3;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 68) {
      uint8_t dataToSend = 4;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 35) {
      uint8_t dataToSend = 7;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (chr == 42) {
      uint8_t dataToSend = 14;
      Serial.print("Data Sent:");
      //Serial.println(dataToSend);
      display.clearDisplay();
      display.setCursor(0,1);
      display.println(dataToSend);
      display.display();
      esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
  }
   
  
}
