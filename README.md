# wemos-d1-espnow-esp8266-01-remote-control
Controllers for raspberry pi mpd music server. Ideal for control of raspberry pi fm transmitter on infrequent larger garden party.  pifmds takes audio from internal raspi mpd stream on port 8000 throught sox, which also makes low pass filter for this transmittion.  Pi2 is good compromise. Second hand pi2 is not expensive and has enought horse power to run whole project. Node-red is bit ram hungry, but 1gb of ram will be enought. Transmit only on free frequency and don't disturb your neighbours. If you don't annoy those around you, you'll get away with it once in a while.

This project was possible because of Christophe Jacquet (PiFmRds) , authors of rpitx, cifertech, random nerd, guy with the swiss accent, edgemicrotech and other great people from our great online diy community. Thank you. We don't know each other, but our work is connecting us. 

What we will nead:
- raspberry pi with rpitx, mpd server and node-red installed
- antenna on pin 04 of rapsi (It is a good idea to mount a 50 ohm BNC connector to the panel in the Pi box, connecting the center connector to pin 04 and the ground ring to the Raspberry Pi ground pin.)
- wemos d1 (3,3V device)
- esp8266-02 2x
- usb serial programmer 2x
- nokia 5110 display (3,3V)
- i2c gpio expander board (Alternatively you can use one pin setup and connect the keypad to pin A0 through voltage divider circuit, which divides the voltage in between two different resistors. But you have to choose the resistor values with respect to the 3.3V logic. I have not tested this option yet.) 
- 4x4 matrix keypad
- 2x 18650 batteries
- battery holder
- arduino sensor shield - wemos is 3,3V device, don't use vcc pins on shield, these pins are 5V.
- esp32 nat router (https://github.com/gjroots/esp32_nat_router_plus or https://github.com/dchristl/esp32_nat_router_extended - if you plan to have a party somewhere where there is no internet access. Its range is limited. It certainly won't cover the entire (large) garden. However, it is suitable for uploading music from a mobile phones and for troubleshooting. Handy android app is for example raspcontroller.)
- large usb flash drive with music (https://raspberrytips.com/mount-usb-drive-raspberry-pi/ - symlink in mpd music directory referring to files on the flash drive is necessary to load this music files into the mpd database)
- portable fm radios

Disable 1-Wire in raspi-config, it is in conflicts with rpitx. Otherwise it is not possible to transmit smoothly.  GMake M3U format playlist from command line  https://github.com/MatteoGuadrini/mkpl Conceret instructions you can find here: https://askubuntu.com/questions/259726/how-can-i-generate-an-m3u-playlist-http-url-format-from-the-terminal

Adjust the commands in node-red exec node, depending on where you have installed the programs and from which directory they are run. If you are unable to compile rpitx, try alternative versions, or use PiFmRds.

Easiest way is to put first usb serial adapter with esp8266-01 in usb port of raspi and second in usb port of android phone. I like android app named USB Serial Monitor made by Keuwlsoft. But wemos remote is also good, at least if you're not sober (but this is not an notorial). The worst problem was finding a suitable library for the i2c keypad. Successfully tested at a distance of approx. 50m through wall and  110m in outdoor conditions /tested in public park/. The range will certainly be at a longer distance, but I'm on my own, so I can't test it better.

Get ESP32/ESP8266 MAC Address and Change It (Arduino IDE): https://randomnerdtutorials.com/get-change-esp32-esp8266-mac-address-arduino/

Alternatively you can use this command in exec node in node-red: sox -t mp3 http://192.168.2.4:8000/mp3  -t wav --input-buffer 80000 -c 2 - firfit /home/pi/75usPreEmphasis.ff |  sudo /home/pi/install/rpitx/pifmrds -freq 106.6 -audio -    (Buffer will helps suppress lags and choppy audio. 75usPreEmphasis.ff you will find among files in repository. It can improve transmitted audio a lot, if you take time to refine it. This one is very good, but not exellent. For rock music it gives nice results, but for funky and soul it needs some improvements.) 

