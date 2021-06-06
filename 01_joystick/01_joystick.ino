/************
 * Code example for Joystick
 */
/** Arduino pin numbers **/
// digital pin connected to switch(SW) output
const int SW_pin = 2;
// analog pin connected to X(SRx) output
const int X_pin = A0;
// analog pin connected to Y(SRy) output
const int Y_pin  = A1;

const int DEBUG = 0;
/**
 * Setup code, ran at the beginning once.
 */
void setup() {
  pinMode(SW_pin, INPUT); 
  digitalWrite(SW_pin, HIGH);
  // Sets the data rate in bits per second (baud) for serial data transmission.
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {  
  if (DEBUG) {
    Serial.println("========================");
    Serial.print("\rSwitch:\t");
    Serial.println(digitalRead(SW_pin));
    Serial.print("\rx-axis:\t");
    Serial.println(analogRead(X_pin));
    Serial.print("\ry-axis:\t");
    Serial.println(analogRead(Y_pin));
  }

  while (!digitalRead(SW_pin))
    Serial.println("Joystick pushed");

  // Default value of X_pin is 512
  if (analogRead(X_pin) > 600)
    Serial.println("Right");
  else if (analogRead(X_pin) < 400)
    Serial.println("Left");

  // Default value of Y_pin is 512
  if (analogRead(Y_pin) > 600)
    Serial.println("Down");
  else if (analogRead(Y_pin) < 400)
    Serial.println("Up");

  // Delay before to loop
  delay(500); // in ms
}
