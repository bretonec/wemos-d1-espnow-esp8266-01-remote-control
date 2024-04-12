# wemos-d1-espnow-esp8266-01-remote-control
Controllers for raspberry pi mpd music server. Ideal for control of raspberry pi fm transmitter on larger garden party.  pifmds takes audio from internal raspi mpd stream on port 8000 throught sox, which also makes low pass filter for this transmittion.  

This project was possible because of cifertech, random nerd, guy with the swiss accent, edgemicrotech and other great people from our great online diy community. Thank you. We don't know each other, but our work is connecting us. 

What we will nead:
- raspberry pi with rpitx, mpd server and node-red installed
- antenna on pin 04 of rapsi
- wemos d1
- esp8266-02 2x
- usb serial programmer 2x
- nokia 5110
- i2c gpio expander board
- 4x4 matrix keypad
- 2x 18650 batteries
- battery holder
- arduino sensor shield

Easiest way is to put first usb serial adapter with esp8266-01 in usb port of raspi and second in usb port of android phone. I like android app named USB Serial Monitor made by Keuwlsoft. But wemos remote is also good. 
