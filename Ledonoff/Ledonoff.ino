int ledSignal=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledSignal,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledSignal,HIGH);
  delay(5000);
  digitalWrite(ledSignal,LOW);
  delay(5000);

}
