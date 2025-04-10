//  Light sensor not working
//  Showing wrong colors currently

// Pin Definitions
int red = 12;               // Onboard RGB LED - Red
int green = 13;             // Onboard RGB LED - Green
int blue = 14;              // Onboard RGB LED - Blue

int lightSensorPin = A3;    // Light sensor on ProtoSnap Plus
int tempSensorPin = A1; 

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);

  Serial.begin(9600);
  Serial.println("Rainbows in the Dark initialized...");
}

void loop() {
  int lightLevel = analogRead(lightSensorPin);
  Serial.print("Light sensor reading: ");
  Serial.println(lightLevel);

  // Adjust this threshold based on your room lighting
  if (lightLevel < 300) {
    Serial.println("It's dark! Blinking rainbows...");

    // Blink red
    digitalWrite(red, LOW);
    delay(250);
    digitalWrite(red, HIGH);

    // Blink blue
    digitalWrite(blue, LOW);
    delay(250);
    digitalWrite(blue, HIGH);

    // Blink green
    digitalWrite(green, LOW);
    delay(250);
    digitalWrite(green, HIGH);
  } else {
    Serial.println("It's bright. Turning LEDs off.");
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
  }

  delay(250); 
}
