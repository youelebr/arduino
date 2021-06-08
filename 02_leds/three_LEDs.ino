
#define DELAY 1000
#define REDLED 13
#define GREENLED 12
#define BLUELED 8

void setup()
{
  pinMode(REDLED, OUTPUT);   // declare LED pins as output
  pinMode(GREENLED, OUTPUT); // declare LED pins as output
  pinMode(BLUELED, OUTPUT);  // declare LED pins as output
}

void loop()
{
  digitalWrite(REDLED, HIGH);
  delay(DELAY);
  digitalWrite(REDLED,LOW);
  delay(DELAY);

  digitalWrite(GREENLED, HIGH);
  delay(DELAY);
  digitalWrite(GREENLED,LOW);
  delay(DELAY);

  
  digitalWrite(BLUELED, HIGH);
  delay(DELAY);
  digitalWrite(BLUELED ,LOW);
  delay(DELAY);
}