# Smart Monitoring System using Arduino & Proteus

### Project Overview
The **Smart Monitoring System** is a mini embedded project designed to **monitor environmental parameters** such as temperature, humidity, gas concentration, light intensity, and object distance — all visualized on a **16x2 LCD display** and controlled through an **Arduino Uno**.

It’s a great beginner-to-intermediate project to understand **sensor integration, real-time monitoring, and automation using Proteus simulation**.

## Features
- **Gas Detection** using the MQ-2 sensor  
- **Temperature & Humidity Monitoring** with DHT11  
- **Day/Night Detection** using LDR sensor  
- **Distance Measurement** using Ultrasonic Sensor (HC-SR04)  
- **Automatic Alarm Activation** via Buzzer and Relay  
- **Live Display** of all readings on a 16x2 LCD  
- Fully simulated in **Proteus 8 Professional**

## Components Used
| Component | Description |
|------------|-------------|
| **Arduino Uno** | Central microcontroller |
| **DHT11 Sensor** | Measures temperature and humidity |
| **MQ-2 Gas Sensor** | Detects smoke/gas concentration |
| **LDR Sensor** | Detects light intensity (day/night) |
| **Ultrasonic Sensor (HC-SR04)** | Measures distance |
| **Relay Module** | Controls DC motor or load |
| **Buzzer** | Alerts during unsafe conditions |
| **16x2 LCD Display** | Displays sensor data |
| **Power Supply (5V)** | Required for sensors & Arduino |
| **Proteus Software** | Used for simulation |

## Working Principle
1. The system continuously reads data from:
   - **DHT11** → Temperature & Humidity  
   - **MQ-2** → Gas levels  
   - **LDR** → Light intensity  
   - **Ultrasonic sensor** → Distance

2. The **LCD** displays real-time readings.

3. If:
   - Gas concentration exceeds **450**, **and**
   - Temperature goes beyond **35°C**  
   → The **buzzer** and **relay** activate automatically.

4. The **relay** can drive a **DC motor, fan, or exhaust** system as an automatic response.

5. The entire circuit runs and can be tested in **Proteus** without external hardware.

## How to Simulate in Proteus
1. Open Proteus 8 Professional.
2. Place all the components listed above.
3. Wire them according to the provided circuit diagram.
4. Load the compiled .hex file of the Arduino code into the Arduino Uno component.
5. Run the simulation to watch all parameters update live on the LCD.

## Output Demonstration
1. LCD displays Temperature, Humidity, Gas, and Distance values.
2. Buzzer and Relay activate automatically if unsafe conditions are detected.
3. You can simulate gas leaks or temperature rise by adjusting the potentiometers in Proteus.

##Applications
1. Home Safety and Automation Systems
2. Smart Farming / Environmental Monitoring
3. Industrial Gas Leakage Detection
4. IoT-based Smart Alert Systems

💬 “Start with simulation, build with code, and end with innovation!”

⭐ Show Some Love
If you found this project helpful —
give it a ⭐ Star on GitHub and share it with learners!
