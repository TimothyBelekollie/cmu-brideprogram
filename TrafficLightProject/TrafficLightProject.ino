// C++ code

int redLed=2;
int yellowLed=3;
int greenLed=4;
void setup()
{
  pinMode(redLed, OUTPUT);  
  pinMode(yellowLed, OUTPUT); 
  pinMode(greenLed, OUTPUT);



}

void loop()
{
  //For Red Light(LED)
  digitalWrite(redLed, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, LOW);
  
  //For Yellow Light(LED)
  digitalWrite(yellowLed, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, LOW); 
  
  //For Green Light(LED)
  digitalWrite(greenLed, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(greenLed, LOW);
  
}