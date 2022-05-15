# Blinking-Internal-LED-of-ESP32
This has all the details about task of blinking the internal led of esp32 using simple code.

## Task number: 01

## Task name: blinking internal led of ESP32.

## Reference
https://iotdesignpro.com/projects/getting-started-with-esp32-program-it-using-arduino-ide-blinking-led

## Components used 
ESP32 dev module board, USB cable, Arduino IDE.
Just connect the ESP32 to the computer using an USB cable.

## Code 
Int led_btn=2;
void setup(){
   pinMode(led_btn, OUTPUT);
}
void loop(){
  digitalWrite(led_btn, HIGH);
  delay(1000);
  digitalWrite(led_btn, LOW);
  delay(1000);
}
Here, we first declare a variable led_btn as 2, which is the pin number of internal led of ESP32.
Next we set up pinmode for the same, as we are using it to observe output, we set it as output.
Next step, we write for how long the delay should be after ON(HIGH) or OFF(LOW) of led, this loop continues to run till we disconnect the USB cable or upload a new program.

## Procedure
Create a sketch on Arduino IDE for this project.
Write the above code, save and verify.
Connect the ESP32 to the computer using USB cable.
Go to tools, select appropriate board name and COM port.
Once verified, upload this code to the ESP32.
Now observe the internal LED blink.

## Problems faced
There was no syntax or compilation error, but when I tried to upload the code to ESP32, it failed and threw me an error, “fatal error-package not found.” Another time it showed different error, which was:

This could be due to 2 problems:
Wrong COM port selection: go to tools and change the port, try to upload again.
Due to some problem in uploading a new program: press the boot button on ESP32 while uploading the program.

## Output
Internal led switched between on and off with a delay of 1 second.





