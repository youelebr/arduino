/**
 * Code example that make light a LED according to a potentiometer
 **/
#define DELAY 1000
#define MIN_RAW 0
#define MAX_RAW 1023
#define MIN_CMD 0
#define MAX_CMD 255

// Sensor positions
const int potPin = A0; // potentiometer
const int ledPin = 9;  // LED

int potVal;
int ledVal;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  // The map function can is used in order to map an analog input value
  // map (value, fromLow, fromHigh, toLow, toHigh).
  ledVal = map(potVal, MIN_RAW, MAX_RAW, MIN_CMD, MAX_CMD);
  
  analogWrite(ledPin, ledVal);
  Serial.print("Potentiometer value = ");
  Serial.println(potVal);
  Serial.print("LED value = ");
  Serial.println(ledVal);
  Serial.println("====================");
  delay(DELAY);
}
