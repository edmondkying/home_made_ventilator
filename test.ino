// Arduino Relay Control Code
 
#define relay1 7
#define relay2 6
#define inhale 3000
#define afterinhale 1000
#define exhale 3000
#define afterexhale 1000

void setup() {
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
}
void loop()
{
  if (inhale > 0)
  {
   digitalWrite(relay1, HIGH);
   delay(inhale);
   digitalWrite(relay1, LOW);
  }
   delay(afterinhale);
  if (exhale > 0)
  {
   digitalWrite(relay2, HIGH);
   delay(exhale);
   digitalWrite(relay2, LOW);
  }
   delay(afterexhale);
}
