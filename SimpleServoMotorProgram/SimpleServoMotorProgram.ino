#include<Servo.h>

Servo Myservo;
int pos;
int severMotorSignal=3;

void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  Myservo.attach(severMotorSignal);

}

void loop()
{
  for(pos=0;pos<=180;pos++){
Myservo.write(pos);
delay(15);
}
  delay(1000);
  
  for(pos=180;pos>=0;pos--){
Myservo.write(pos);
delay(15);
}
  delay(1000);

}



























