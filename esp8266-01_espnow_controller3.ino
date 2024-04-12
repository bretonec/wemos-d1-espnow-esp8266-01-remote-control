#include <ESP8266WiFi.h>
#include <espnow.h>

char serialin;
// Enter the MAC address of the first slave device For more devices you can make second mac adress instance, but you must in code specify 
uint8_t broadcastAddress1[] = {0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX};
// uint8_t broadcastAddress2[] = {0xXX, 0xXX, 0xXX, 0xXX, 0xXX, 0xXX};

void OnDataSent(uint8_t *mac_addr, uint8_t espStatus) {
  char macStr[18];
  // Convert MAC address to string format
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  Serial.print("Delivery Status of: ");
  Serial.print(macStr);
  Serial.println(espStatus == 0 ? " Sent Successfully" : " Fail to send");
}

void setup() {
  Serial.begin(115200);
  Serial.println("OK");
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  esp_now_init();
  esp_now_set_self_role(ESP_NOW_ROLE_CONTROLLER);
  // Register callback for data send status
  esp_now_register_send_cb(OnDataSent);
  
  esp_now_add_peer(broadcastAddress1, ESP_NOW_ROLE_SLAVE, 1, NULL, 0);
 
}

void loop() {
  //Verify connection by serial
  while (Serial.available() > 0) {
    //Read Serial data and alocate on serialin
    serialin = Serial.read();
    if (serialin == 'a' || serialin =='A'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 1;
      //mySerial.println("1");
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      //esp_now_send(broadcastAddress2, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (serialin == 'b' || serialin =='B'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 2;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
   else if (serialin == 'c' || serialin =='C'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 3;
      //mySerial.println("1");
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'd' || serialin =='D'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 4;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
   else if (serialin == 'e' || serialin =='E'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 1;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
  else if (serialin == 'f' || serialin =='F'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 2;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
  else if (serialin == 'g' || serialin =='G'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 1;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
  else if (serialin == 'h' || serialin =='H'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 1;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
   else if (serialin == 'i' || serialin =='I'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 5;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
  }
  else if (serialin == 'j' || serialin =='J'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 6;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (serialin == 'k' || serialin =='K'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 7;
      //mySerial.println("1");
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'l' || serialin =='L'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 8;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'm' || serialin =='M'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 9;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'n' || serialin =='N'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 10;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (serialin == 'o' || serialin =='O'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 11;
      //mySerial.println("1");
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'p' || serialin =='P'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 12;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    /*serialin is equal as 'c' or C */
    else if (serialin == 'q' || serialin =='Q'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 13;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
    else if (serialin == 'r' || serialin =='R'){ // Two Pipeines(||) to make a boolean OR Comparission
      Serial.println(serialin);
      uint8_t dataToSend = 14;
      Serial.print("Data Sent:");
      Serial.println(dataToSend);
      esp_now_send(broadcastAddress1, &dataToSend, sizeof(dataToSend));
      delay(110);
    }
  }
}

 
