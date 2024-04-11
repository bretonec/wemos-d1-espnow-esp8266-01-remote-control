#include <ESP8266WiFi.h>
#include <espnow.h>

void setup() {
  Serial.begin(9600);
  //SoftwareSerail.begin(
  Serial.println("start");
  
  WiFi.mode(WIFI_STA);
  Serial.print("MAC: ");
  Serial.println(WiFi.macAddress());
  WiFi.disconnect();
  esp_now_init();
  esp_now_set_self_role(ESP_NOW_ROLE_SLAVE);
  esp_now_register_recv_cb(onDataReceived);
}

void loop() {
  // Nothing to do here, waiting for ESP-NOW messages
}
void onDataReceived(uint8_t *senderMac, uint8_t *data, uint8_t len) {
  if (*data == 1) 
  {
    Serial.println("load playlist1");
  }
  else if(*data == 2)
  {
    Serial.println("load playlist2");
  }
  if (*data == 3) 
  {
    Serial.println("mpc play");
  }
  else if(*data == 4)
  {
    Serial.println("mpc pause");
  }
  else if(*data == 5)
  {
    Serial.println("mpc stop");
  }
  else if(*data == 6)
  {
    Serial.println("mpc clear");
  }
  else if(*data == 7)
  {
    Serial.println("mpc toggle");
  }
  else if (*data == 8) 
  {
    Serial.println("mpc next");
  }
  else if(*data == 9)
  {
    Serial.println("mpc prev");
  }
  if (*data == 10) 
  {
    Serial.println("start pifmrds");
  }
  else if(*data == 11)
  {
    Serial.println("reboot");
  }
  else if(*data == 12)
  {
    Serial.println("shutdown");
  }
  else if(*data == 13)
  {
    Serial.println("rel high");
  }
  else if(*data == 14)
  {
    Serial.println("rel low");
  }
}
