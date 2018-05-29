/*Project 04Color Mixing LampArduino Starter KitUsing a Tri-Color LED and three Photoresistors to create a lamp that smoothly changes colors depending on external lighting conditionsPedro RuizMay 29th 2018/*Set up constants for the pins for input and outputThis makes it easier to keep track of which sensor pairs withwhich color on the LED*/const int greenLEDPin = 9;const int redLEDPin = 11;const int blueLEDPin = 10;const int redSensorPin = A0;const int greenSensorPin = A1;const int blueSensorPin = A2;/*Variables to store the sensor readings as well as the light level of each LED*/int redValue = 0;int greenValue = 0;int blueValue = 0;int redSensorValue = 0;int greenSensorValue = 0;int blueSensorValue = 0;// Seting the direction of the digital pins and setting up the serial portvoid setup() {    Serial.begin(9600);        pinMode(redLEDPin,OUTPUT);    pinMode(greenLEDPin,OUTPUT);    pinMode(blueLEDPin,OUTPUT);}void loop() {// Read the value of each light sensor  redSensorValue = analogRead(redSensorPin);  delay(5);  greenSensorValue = analogRead(greenSensorPin);  delay(5);  blueSensorValue = analogRead(blueSensorPin);// Report the sensor readings to the computer  Serial.print("Raw Sensor Value \t Red: ");  Serial.print(redSensorValue);  Serial.print("\t Green: ");  Serial.print(greenSensorValue);  Serial.print("\t Blue: ");  Serial.print(blueSensorValue);    // Convert the sensor readings  redValue = redSensorValue/4;  greenValue = greenSensorValue/4;  blueValue = blueSensorValue/4;  // Report the calculated LED light levels  Serial.print("Mapped Sensor Value \t Red: ");  Serial.print(redValue);  Serial.print("\t Green: ");  Serial.print(greenValue);  Serial.print("\t Blue: ");  Serial.print(blueValue);// Set the LED light levels  analogWrite(redLEDPin, redValue);  analogWrite(greenLEDPin, greenValue);  analogWrite(blueLEDPin, blueValue);}