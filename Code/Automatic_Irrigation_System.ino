// Include the required libraries
#include <Wire.h>                    // Library for I2C communication
#include <LiquidCrystal_I2C.h>       // Library for I2C LCD display

// Create an LCD object with I2C address 0x27, 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ---------------------- Pin Definitions ----------------------

// Analog pin connected to the Soil Moisture Sensor
const int soilPin = A0;

// Digital pin connected to the Relay Module
const int relayPin = 3;

// ---------------------- Variables ----------------------

// Stores the raw analog value from the soil moisture sensor
int sensorValue;

// Stores the soil moisture percentage (0–100%)
int moisture;

// ---------------------- Setup Function ----------------------
// Runs only once when the Arduino starts

void setup()
{
  // Set relay pin as an output
  pinMode(relayPin, OUTPUT);

  // Turn the motor OFF initially
  // (Most relay modules are Active LOW)
  digitalWrite(relayPin, HIGH);

  // Start Serial Monitor for debugging
  Serial.begin(9600);

  // Initialize the LCD
  lcd.init();

  // Turn ON the LCD backlight
  lcd.backlight();

  // Display welcome message
  lcd.setCursor(0,0);
  lcd.print(" SMART FARMING ");

  lcd.setCursor(0,1);
  lcd.print(" System Start ");

  // Wait for 2 seconds
  delay(2000);

  // Clear the LCD
  lcd.clear();
}

// ---------------------- Main Loop ----------------------
// Runs continuously

void loop()
{
  // Read the analog value from the soil sensor
  sensorValue = analogRead(soilPin);

  // Convert sensor value (0-1023) into moisture percentage
  // 0 = Wet Soil
  // 1023 = Dry Soil
  moisture = map(sensorValue, 1023, 0, 0, 100);

  // Keep the moisture value between 0% and 100%
  moisture = constrain(moisture, 0, 100);

  // Display moisture value in Serial Monitor
  Serial.print("Moisture = ");
  Serial.print(moisture);
  Serial.println("%");

  // ---------------------- LCD Display ----------------------

  // Display soil moisture percentage
  lcd.setCursor(0,0);
  lcd.print("Moisture:");
  lcd.print(moisture);
  lcd.print("%   ");

  // ---------------------- Motor Control ----------------------

  // If soil moisture is less than 40%
  // Soil is dry
  if(moisture < 40)
  {
      // Turn ON the relay
      // Relay LOW = Motor ON (Active LOW Relay)
      digitalWrite(relayPin, LOW);

      // Display motor status
      lcd.setCursor(0,1);
      lcd.print("Motor : ON      ");
  }

  // If soil moisture is 40% or above
  // Soil is wet
  else
  {
      // Turn OFF the relay
      digitalWrite(relayPin, HIGH);

      // Display motor status
      lcd.setCursor(0,1);
      lcd.print("Motor : OFF     ");
  }

  // Wait for 1 second before reading again
  delay(1000);
}// Include the required libraries
#include <Wire.h>                    // Library for I2C communication
#include <LiquidCrystal_I2C.h>       // Library for I2C LCD display

// Create an LCD object with I2C address 0x27, 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ---------------------- Pin Definitions ----------------------

// Analog pin connected to the Soil Moisture Sensor
const int soilPin = A0;

// Digital pin connected to the Relay Module
const int relayPin = 3;

// ---------------------- Variables ----------------------

// Stores the raw analog value from the soil moisture sensor
int sensorValue;

// Stores the soil moisture percentage (0–100%)
int moisture;

// ---------------------- Setup Function ----------------------
// Runs only once when the Arduino starts

void setup()
{
  // Set relay pin as an output
  pinMode(relayPin, OUTPUT);

  // Turn the motor OFF initially
  // (Most relay modules are Active LOW)
  digitalWrite(relayPin, HIGH);

  // Start Serial Monitor for debugging
  Serial.begin(9600);

  // Initialize the LCD
  lcd.init();

  // Turn ON the LCD backlight
  lcd.backlight();

  // Display welcome message
  lcd.setCursor(0,0);
  lcd.print(" SMART FARMING ");

  lcd.setCursor(0,1);
  lcd.print(" System Start ");

  // Wait for 2 seconds
  delay(2000);

  // Clear the LCD
  lcd.clear();
}

// ---------------------- Main Loop ----------------------
// Runs continuously

void loop()
{
  // Read the analog value from the soil sensor
  sensorValue = analogRead(soilPin);

  // Convert sensor value (0-1023) into moisture percentage
  // 0 = Wet Soil
  // 1023 = Dry Soil
  moisture = map(sensorValue, 1023, 0, 0, 100);

  // Keep the moisture value between 0% and 100%
  moisture = constrain(moisture, 0, 100);

  // Display moisture value in Serial Monitor
  Serial.print("Moisture = ");
  Serial.print(moisture);
  Serial.println("%");

  // ---------------------- LCD Display ----------------------

  // Display soil moisture percentage
  lcd.setCursor(0,0);
  lcd.print("Moisture:");
  lcd.print(moisture);
  lcd.print("%   ");

  // ---------------------- Motor Control ----------------------

  // If soil moisture is less than 40%
  // Soil is dry
  if(moisture < 40)
  {
      // Turn ON the relay
      // Relay LOW = Motor ON (Active LOW Relay)
      digitalWrite(relayPin, LOW);

      // Display motor status
      lcd.setCursor(0,1);
      lcd.print("Motor : ON      ");
  }

  // If soil moisture is 40% or above
  // Soil is wet
  else
  {
      // Turn OFF the relay
      digitalWrite(relayPin, HIGH);

      // Display motor status
      lcd.setCursor(0,1);
      lcd.print("Motor : OFF     ");
  }

  // Wait for 1 second before reading again
  delay(1000);
}
