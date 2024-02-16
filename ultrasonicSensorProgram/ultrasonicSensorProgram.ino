// Define pins for ultrasonic sensor
const int trigPin = 9; // Trig pin of HC-SR04
const int echoPin = 10; // Echo pin of HC-SR04

// Define pin for LED
const int ledPin = 2; // LED pin

// Define variable to store distance measurement
long duration;
int distance_cm;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set trigPin as an OUTPUT
  pinMode(trigPin, OUTPUT);

  // Set ledPin as an OUTPUT
  pinMode(ledPin, OUTPUT);

  // Set echoPin as an INPUT
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a pulse to trigger the sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo pin
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance_cm = duration * 0.034 / 2;

  // Print the distance on the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Check if distance is less than 100cm
  if (distance_cm < 100) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }

  // Delay before next measurement
  delay(1000);
}