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
