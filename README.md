# SensorDataDashboard

This is a simple Arduino project that reads temperature and humidity from a DHT11 sensor and transmits the values via UART. Additionally, a counter tracks how many times the temperature exceeds a specified threshold.

🛠️ Hardware Used
- **Arduino UNO**
- **DHT11 sensor**
- **Resistors: 330Ω**
- **Red LED**

🧰 Planned Features
- A simple WPF application to visualize data using the LiveCharts library  
- Saving sensor readings to a `.csv` file  
- Using a Raspberry Pi to create a local server with cloud portability  
- Implementing basic machine learning (ML.NET) for weather prediction  
- Integrating my MAX7219 LED matrix project (MaxDriver-App) to display current sensor measurements: my Max7219 project: https://github.com/Dominik-bien/MatrixDriver-App
- Create a web application with ASP.NET Core backend and React frontend to provide authenticated users with real-time visualization of sensor data using Chart.js, along with current status information.

🚀 How It Works

1. The Arduino reads data from the DHT11 sensor.  
2. Temperature and humidity values are sent via the serial port.  
3. If the temperature exceeds a specified threshold, the red LED starts blinking.
