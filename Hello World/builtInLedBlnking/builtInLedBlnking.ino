void setup() {
  pinMode(13,OUTPUT); //defines which the pin that will be used in the code

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(13, 1); // sets the pin 13 value to high
 delay(15);
 digitalWrite(13, 0); // sets the pin 13 value to low
 delay(15);
}
