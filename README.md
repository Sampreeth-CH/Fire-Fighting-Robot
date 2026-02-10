# 🔥 Fire Fighting Robot using Arduino Uno

An autonomous fire-fighting robot designed to detect fire, navigate safely in its environment, and extinguish flames without human intervention. The robot integrates sensors, motor control, and a water-spraying mechanism to demonstrate the practical application of embedded systems and robotics in fire safety and disaster management.

---


## 🚀 Project Overview

This project focuses on building a smart robotic system capable of:
- Detecting fire using IR sensors  
- Avoiding obstacles during movement  
- Maintaining a safe distance from the fire source  
- Extinguishing fire using a water pump controlled by Arduino  

The robot operates fully on battery power and performs all actions autonomously once powered on.

---


## 🛠 Components Used

The following components were used in the construction of this project:

| Component | Quantity |
|---------|----------|
| Arduino Uno | 1 |
| IR Sensors (Fire Detection) | 3 |
| Ultrasonic Sensor (HC-SR04) | 1 |
| L298N Motor Driver | 1 |
| DC Gear Motors with Wheels | 4 |
| Servo Motor (Nozzle Control) | 1 |
| Water Pump Motor | 1 |
| Relay Module | 1 |
| Rechargeable Li-ion Batteries (18650 or similar) | 3 |
| Robot Chassis | 1 |
| Mini Water Tank with Pipe | 1 |
| Battery Holder / Case | 1 |
| Switch | 1 |
| Jumper Wires | As required |
| Breadboard / PCB | 1 |

---


## ⚙️ Working Principle

1. **Fire Detection**  
   IR sensors continuously monitor infrared radiation to detect the presence of fire.

2. **Movement & Obstacle Avoidance**  
   DC motors controlled by the L298N motor driver move the robot.  
   The ultrasonic sensor detects obstacles and helps the robot navigate safely.

3. **Distance Control**  
   When fire is detected, the ultrasonic sensor ensures the robot stops approximately **2 inches** before the fire source.

4. **Fire Extinguishing Mechanism**  
   The Arduino activates a relay to power the water pump.  
   A servo motor rotates the nozzle to spray water over a wider area for effective extinguishing.

5. **Power Supply**  
   The system is powered by three rechargeable lithium-ion batteries, supplying power to both control and motor circuits.

---


## 🧪 Testing & Results

The robot was tested using a small flame source (such as a candle).  
It successfully detected the fire, approached safely, stopped at the defined distance, and extinguished the flame automatically.

---


## 📁 Repository Structure

```
Fire-Fighting-Robot-Arduino/
│
├── Arduino_Code/
│   └── fire_fighting_robot.ino
│
├── Documentation/
│   └── Fire_Fighting_Robot_Report.pdf
│
├── Images/
│   ├── Assembled Robot Hardware-1.jpg
│   └── Fire Fighting Robot Prototype.jpg
|   └── Assembled Robot Hardware-2.jpg
│
├── Circuit_Diagram/
│   └── circuit_diagram.png
│
└── README.md
```

---


## 🎯 Applications

- Fire safety and prevention systems  
- Industrial hazard monitoring  
- Disaster management research  
- Educational and academic robotics projects  

---


## 👤 Author

**Sampreeth CH**

- 🔗 LinkedIn: [Sampreeth CH](https://www.linkedin.com/in/sampreethch)
- 🐙 GitHub: [@Sampreeth-CH](https://github.com/Sampreeth-CH)
- 📧 Email: sampreethchsampreethch@gmail.com
- 🌐 Portfolio: *(Coming soon)*

Feel free to connect or reach out for collaboration, feedback, or just to say hi!

---


## ⭐ Support

If you like this project, please ⭐ the repository on GitHub.
