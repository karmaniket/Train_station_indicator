<h1 align="center">Train Station Indicator</h1>

This project mimics train station indicator display system inspired by `mumbai local train`. A complete simulation setup, allowing you to test your code and design before executing on actual hardware. This is ideal for learning embedded systems, prototyping transport solutions and creating demonstrations.

## *Click below for full tutorial*

[![Demo](https://img.youtube.com/vi/S3ipThWHeNM/maxresdefault.jpg)](https://youtu.be/S3ipThWHeNM)

## Features

- Realistic train station display simulation
- Shows current stop, next stop, and final destination
- Smooth scrolling text for announcements
- Suitable for both simulation and hardware prototyping
- Quick setup for learning and demonstration

> [!NOTE]
> Program is modular for quick modification, enabling separation of logic for station updates, LCD initialization and system flow control.

## Setup and Installation

### 1. Clone the repository

```bash
    git clone https://github.com/karmaniket/Train_station_indicator.git
    cd Train_station_indicator
```

### 2. Requirements

**Software:**
- Arduino IDE
- Proteus 8 Professional

**Library:**
- LiquidCrystal

**Electronics:**
- Arduino Uno Microcontroller
- 16x2 LM016L LCD

>[!IMPORTANT]
>[Arduino Library for Proteus](https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3BaTVdvSkhRT3FvdG0tWldxLTdZYlRiRDdqZ3xBQ3Jtc0trQTY3cExlXzJYbl9pOWhkSzQ3WmxGa1dBc3NuUzgwUWZzM1N1SE1fQW53eWY4b3dKWUFUdEVzNUR5VVRWcTJQWmVFV1NlQkdwSTU0ZGlTTHAyTGpzWUdlLTdVdnp1aGdmUDJSQ2FEZWpoYmJYZmRWYw&q=https%3A%2F%2Fimages.theengineeringprojects.com%2Fdocument%2Fmain%2Farduino%2FArduino%2520Library%2520for%2520Proteus.rar&v=S3ipThWHeNM)

### 3. Interfacing

```bash

    Arduino Uno |   16x2 LM016L LCD

    PD2         >    D7
    PD3         >    D6
    PD4         >    D5
    PD5         >    D4
    RW          >    GND
    11 MOSI     >    E	(Enable)
    12 MISO     >    RS	(Register Select)
```

### 4. Run Simulation

- Compile and generate HEX file from `LcdTrain.ino` in Arduino IDE
- Find the `.hex` file path, commonly present in your Arduino `sketches` folder
- Open Proteus do the interfacing, ensure that Arduino Uno is configured to load compiled HEX file
- Double click the Arduino Uno in Proteus and `load` the HEX file
- Run Simulation in Proteus and observe

> [!TIP]
> All necessary resources including `Code`, `HEX file` and `Proteus schematic` are provided for quick and efficient practice.

## Future Enhancements

- Integrate real-time GPS, GSM, RFID and RTC
- Display bilingual station names
- Add sound output for audio announcements
- Expand to more stations and routes

## License

This project is licensed under the MIT License. Feel free to use, modify and distribute with attribution.
