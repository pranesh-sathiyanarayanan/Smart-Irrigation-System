## 🔌 Circuit Connections 

The Smart Irrigation System is built using an **Arduino UNO**, a **soil moisture sensor**, a **5V relay module**, and a **16×2 I2C LCD display**. The Arduino reads the soil moisture level, controls the water pump through the relay, and displays 
the system status on the LCD. Connect all components as shown below.

---

### 🌱 Soil Moisture Sensor

The soil moisture sensor measures the amount of water present in the soil. It sends an analog signal to the Arduino, allowing it to calculate the soil moisture percentage.

| Sensor Pin | Arduino Pin | Description |
|------------|-------------|-------------|
| AO | A0 | Sends analog soil moisture data to Arduino |
| VCC | 5V | Powers the sensor |
| GND | GND | Common ground connection |

---

### ⚡ Relay Module

The relay acts as an electronic switch that allows the Arduino to safely control the water pump.

| Relay Pin | Arduino Pin | Description |
|-----------|-------------|-------------|
| IN | D3 | Receives control signal from Arduino |
| VCC | 5V | Powers the relay module |
| GND | GND | Common ground connection |

> **Note:** Most relay modules are **Active LOW**, meaning:
> - **LOW** → Motor ON
> - **HIGH** → Motor OFF

---

### 📟 16×2 LCD Display (I2C)

The LCD displays the current soil moisture percentage and the motor status in real time. Using the I2C module reduces the number of wires required.

| LCD Pin | Arduino Pin | Description |
|---------|-------------|-------------|
| SDA | A4 | I2C Data line |
| SCL | A5 | I2C Clock line |
| VCC | 5V | Powers the LCD |
| GND | GND | Common ground connection |

---

### 🔋 Power Connections

- Connect all **VCC** pins to the Arduino **5V** pin.
- Connect all **GND** pins together with the Arduino **GND**.
- The Arduino can be powered using a **USB cable** or a **7–12V external adapter**.
- If using a high-power water pump, use a **separate power supply** for the pump and connect its **GND** to the Arduino **GND**.

---

### 🔄 System Operation

1. The soil moisture sensor measures the moisture level of the soil.
2. Arduino reads the sensor value through **A0**.
3. The sensor value is converted into a moisture percentage.
4. If the moisture level falls below **40%**, Arduino activates the relay.
5. The relay turns **ON** the water pump to irrigate the soil.
6. When the moisture level reaches **40% or higher**, Arduino turns **OFF** the water pump.
7. The LCD continuously displays the **soil moisture percentage** and the **motor status**.

Example LCD Output:

```
Moisture: 32%
Motor : ON
```

```
Moisture: 68%
Motor : OFF
```
