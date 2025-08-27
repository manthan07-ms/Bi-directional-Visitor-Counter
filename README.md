🚪🔢 Bidirectional Visitor Counter with LCD Display
📌 Project Overview

This project is an Arduino-based Bidirectional Visitor Counter that counts the number of people entering and exiting a room using IR sensors (or LDR sensors with laser). The count is displayed on a 16x2 LCD display, along with greeting messages:

“Welcome” → when a person enters.

“Thank You” → when a person exits.

This system is useful for applications such as classrooms, offices, halls, libraries, and event spaces where monitoring the number of visitors is required.

⚡ Features

Counts both entry and exit of visitors.

Shows current count of people inside on the LCD.

Displays greeting messages for entry and exit.

Resets count when power is restarted (can be modified to store count in EEPROM).

Compact and cost-effective solution.

🛠️ Components Used

Arduino UNO

16x2 LCD Display (with or without I2C module)

IR Sensor modules (2 units)

10k Potentiometer (for LCD contrast, if not I2C)

Resistors & Jump wires

Breadboard

Power Supply

⚙️ Working Principle

Two IR sensors are placed at the entrance gate.

If Sensor 1 triggers before Sensor 2, the system detects Entry → Increases the count and shows “Welcome”.

If Sensor 2 triggers before Sensor 1, the system detects Exit → Decreases the count and shows “Thank You”.

LCD continuously shows the number of people inside.

📟 Circuit Diagram (Conceptual)

IR Sensor 1 → Arduino digital pin (Entry detection).

IR Sensor 2 → Arduino digital pin (Exit detection).

LCD (16x2) → Arduino pins (D4–D7 or I2C).

VCC & GND properly connected.

💻 Arduino Code (Main Logic)

The Arduino code handles:

Reading sensor values.

Checking the sequence of sensor activation.

Updating count and LCD display.

Displaying “Welcome” or “Thank You” messages.

🚀 Applications

Libraries 📚

Classrooms 🏫

Offices 🏢

Shopping Malls 🛒

Event Halls 🎤

📸 Demo Output on LCD

Entry:

Welcome
Count: 05


Exit:

Thank You
Count: 04

📄 Future Improvements

Add EEPROM storage to save count after power loss.

Add relay control for automatic light/fan on presence detection.

Send data to cloud (IoT) for remote monitoring.

👉 This project combines Embedded Systems + Display Control + Automation Logic, making it a great learning project in Arduino & IoT basics.

Demo Video (https://drive.google.com/file/d/1t7SmD9KW39w5B0LXohzvQvHHxJeZUz-e/view?usp=drivesdk)
