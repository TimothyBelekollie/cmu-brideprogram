#include <dht22.h>
2#define DHT11PIN 4
3
4dht22 DHT11;
5
6void  setup()
7{
8  Serial.begin(9600);
9 
10}
11
12void loop()
13{
14  Serial.println();
15
16  int chk = DHT11.read(DHT11PIN);
17
18  Serial.print("Humidity (%): ");
19  Serial.println((float)DHT11.humidity, 2);
20
21  Serial.print("Temperature  (C): ");
22  Serial.println((float)DHT11.temperature, 2);
23
24  delay(2000);
25
26}