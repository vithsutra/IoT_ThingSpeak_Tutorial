#  IoT Cloud Integration using ThingSpeak (ESP32 + HTTP)

This project demonstrates how to send sensor data from an ESP32 to the cloud using the HTTP protocol and visualize it on a ThingSpeak dashboard.

---

##  What You Will Learn

- Connecting ESP32 to WiFi
- Sending data to cloud using HTTP
- Using ThingSpeak for IoT dashboards
- Visualizing real-time data

---

##  Concept Overview

- ESP32 collects data (e.g., temperature)
- Sends it to ThingSpeak using HTTP
- ThingSpeak stores and displays it as a graph

---

##  Prerequisites

- ESP32 board
- USB cable
- Arduino IDE / ESP-IDF
- WiFi connection
- ThingSpeak account

---

##  Step 1: Create ThingSpeak Account

1. Go to https://thingspeak.com
2. Sign up / Login
3. Click **New Channel**
4. Add:
   - Field1 → Temperature (or any sensor)
5. Click **Save Channel**

---

##  Step 2: Get API Key

1. Open your channel
2. Go to **API Keys** tab
3. Copy:
   -  **Write API Key** (Important)

---
## Step 3: Add the API key in code
           String apiKey = "YOUR_API_KEY";
