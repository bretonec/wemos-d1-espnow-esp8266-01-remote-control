# wemos-d1-espnow-esp8266-01-remote-control
Controllers for raspberry pi mpd music server. Ideal for control of raspberry pi fm transmitter on larger garden party.  pifmds takes audio from internal raspi mpd stream on port 8000 throught sox, which also makes low pass filter for this transmittion.  Pi2 is good compromise. Second had pi2 is not expensive and has enought horse power to run whole project. Node-red is bit ram hungry, but 1gb of ram will be enouht. 

This project was possible because of Christophe Jacquet (PiFmRds) , authors of rpitx, cifertech, random nerd, guy with the swiss accent, edgemicrotech and other great people from our great online diy community. Thank you. We don't know each other, but our work is connecting us. 

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

Disable 1-Wire in raspi-config, it is in conflicts with rpitx. Otherwise it is not possible to transmit smoothly.  GMake M3U format playlist from command line  https://github.com/MatteoGuadrini/mkpl Conceret instrictions you can find here: https://askubuntu.com/questions/259726/how-can-i-generate-an-m3u-playlist-http-url-format-from-the-terminal

Easiest way is to put first usb serial adapter with esp8266-01 in usb port of raspi and second in usb port of android phone. I like android app named USB Serial Monitor made by Keuwlsoft. But wemos remote is also good, at least if you're not sober. Successfully tested at a distance of approx. 50 m through wall. I plan to test the system in outdoor conditions with a direct line of sight as soon as the weather improves a bit.
