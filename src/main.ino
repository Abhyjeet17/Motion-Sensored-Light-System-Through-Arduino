const int MOTION_SENSOR_PIN = 7;   // Arduino pin connected to the OUTPUT pin of motion sensor
const int RELAY_PIN         = A5;  // Arduino pin connected to the IN pin of relay
int motionStateCurrent      = LOW; // current  state of motion sensor's pin
int motionStatePrevious     = LOW; // previous state of motion sensor's pin

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(MOTION_SENSOR_PIN, INPUT); // set arduino pin to input mode
  pinMode(RELAY_PIN, OUTPUT);        // set arduino pin to output mode
}

void loop() {
  motionStatePrevious = motionStateCurrent;             // store old state
  motionStateCurrent  = digitalRead(MOTION_SENSOR_PIN); // read new state

  if (motionStatePrevious == LOW && motionStateCurrent == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Motion detected!");
    digitalWrite(RELAY_PIN, HIGH); // turn on
  }
  else
  if (motionStatePrevious == HIGH && motionStateCurrent == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Motion stopped!");
    digitalWrite(RELAY_PIN, LOW);  // turn off
  }
}
