// Line Marking Robot for Sports Grounds
// Board: Arduino Nano
// Motor Driver: L298N
// Language: Arduino C

// Motor A connections (Left Motor)
const int enA = 9;   // Speed control for motor A
const int in1 = 7;   // Direction pin 1
const int in2 = 6;   // Direction pin 2

// Motor B connections (Right Motor)
const int enB = 10;  // Speed control for motor B
const int in3 = 5;   // Direction pin 3
const int in4 = 4;   // Direction pin 4

// Paint marker control (can be connected to servo/relay controlling spray)
const int markerPin = 3;

void setup() {
  // Initialize motor pins
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Initialize marker pin
  pinMode(markerPin, OUTPUT);

  // Start moving forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  // Set moderate motor speed
  analogWrite(enA, 150); // Speed range: 0-255
  analogWrite(enB, 150);

  // Activate marker (e.g., start paint spray or lower marker)
  digitalWrite(markerPin, HIGH);  // HIGH = spray ON (adjust as per hardware)
}

void loop() {
  // Keep moving and marking continuously
  // You can later add delay or conditions to stop or change direction
}
