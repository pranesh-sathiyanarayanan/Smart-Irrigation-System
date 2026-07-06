# 🌱 Smart Irrigation System Using Atmospheric Water Generation (AWG)

## 📖 Overview

This project is a smart irrigation system that collects water from air using the **condensation principle** and stores it in a water tank. A **soil moisture sensor** continuously monitors the soil, and an **Arduino UNO** automatically controls a water pump to irrigate plants only when the soil becomes dry.

The system helps conserve water, reduces manual effort, and supports sustainable agriculture.

---

## 🎯 Objectives

- Collect water from atmospheric moisture using condensation.
- Store the collected water for irrigation.
- Monitor soil moisture automatically.
- Turn the water pump ON/OFF based on soil moisture.
- Display soil moisture and motor status on an LCD.

---

## ⚙️ Features

- 🌧️ Water collection using condensation
- 🌱 Automatic irrigation
- 💧 Soil moisture monitoring
- 📟 LCD display for real-time status
- ⚡ Arduino UNO based control
- 🌍 Water-saving and eco-friendly system

---

## 🛠️ Components Used

- Arduino UNO R3
- Soil Moisture Sensor (FC-28 / YL-69)
- 5V Relay Module
- DC Water Pump
- 16×2 I2C LCD Display
- Jumper Wires
- Breadboard
- External Power Supply

---

## 🔌 Circuit Connections

### Soil Moisture Sensor

| Sensor Pin | Arduino |
|------------|----------|
| AO | A0 |
| VCC | 5V |
| GND | GND |

### Relay Module

| Relay Pin | Arduino |
|-----------|----------|
| IN | D3 |
| VCC | 5V |
| GND | GND |

### LCD (I2C)

| LCD Pin | Arduino |
|---------|----------|
| SDA | A4 |
| SCL | A5 |
| VCC | 5V |
| GND | GND |

---

## 🚀 Working Principle

1. Water is collected from air using condensation.
2. The water is stored in a storage tank.
3. The soil moisture sensor checks the soil moisture level.
4. Arduino processes the sensor data.
5. If the soil is dry, the relay turns ON the pump.
6. If the soil is wet, the relay turns OFF the pump.
7. The LCD displays the soil moisture percentage and motor status.

---

## 💻 Software

- Arduino IDE
- Embedded C (Arduino Language)
- LiquidCrystal_I2C Library

---

## 📟 LCD Display

Example:

```
Moisture: 35%
Motor : ON
```

or

```
Moisture: 78%
Motor : OFF
```

---

## 📂 Project Structure

```
Smart-Irrigation-System/
│
├── Arduino_Code/
│   └── Smart_Irrigation.ino
│
├── Circuit_Diagram/
│   └── circuit.png
│
├── Images/
│   ├── project.jpg
│   └── setup.jpg
│
├── Documentation/
│   └── Project_Report.pdf
│
└── README.md
```

---

## 🌟 Advantages

- Saves water
- Automatic irrigation
- Low maintenance
- Easy to use
- Low-cost solution
- Environment friendly

---

## 🌾 Applications

- Agriculture
- Home gardens
- Greenhouses
- Smart farming
- Parks and lawns

---

## 🔮 Future Improvements

- Atmospheric Water Generator (AWG) prototype
- Solar-powered operation
- Water level monitoring
- Mobile application
- IoT monitoring using ESP8266/ESP32
- Cloud data logging

---

## 📸 Project Preview

(Add your project images here)

---

## 👨‍💻 Developed By

**Pranesh S**

Department of Electronic Cmmunication Engineering

---

## 📜 License

This project is developed for educational and learning purposes.
