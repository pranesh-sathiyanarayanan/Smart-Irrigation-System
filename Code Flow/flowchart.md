 Start
   │
   ▼
Initialize LCD & Relay
   │
   ▼
Read Soil Moisture Sensor
   │
   ▼
Convert Sensor Value to %
   │
   ▼
Display Moisture % on LCD
   │
   ▼
Is Moisture < 40%?
   │
 ┌─┴─────────────┐
 │               │
Yes             No
 │               │
 ▼               ▼
Motor ON      Motor OFF
 │               │
 └───────┬───────┘
         ▼
 Update LCD
         │
         ▼
 Wait 1 second
         │
         ▼
 Repeat
