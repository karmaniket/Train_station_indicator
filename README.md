<h1 align="center">Train Station Indicator</h1>

This project replicates a train station display system inspired by `local trains`. A complete simulation setup is provided, allowing you to test your design before executing on actual hardware. This is ideal for learning embedded systems, prototyping transport solutions and creating demonstrations.

## ⚡ Simulation

https://github.com/user-attachments/assets/267f1faa-3a63-469f-b48c-8e760969c698

## 🚀 Features

- Mimics real-world train station display system
- Shows Current Stop, Upcoming Stop and Final Destination
- Suitable for both simulation and hardware prototyping
- Real-time update intervals

> [!NOTE]
> Designed with a modular programming approach, enabling separation of logic for station updates, LCD initialization and system flow control.

## ⚙️ Requirements

### Softwares

    Arduino IDE
    Proteus 8 Pro

### Library

    LiquidCrystal

### Electronics

    Arduino Uno Microcontroller
    16x2 LM016L LCD

### Interfacing

    Arduino Uno      LCD LM016L

    PD2         >    D7
    PD3         >    D6
    PD4         >    D5
    PD5         >    D4
    RW          >    GND
    11 MOSI     >    E	Enable
    12 MISO     >    RS	Register Select

## 📦 Installation and Setup

### Clone the repository

    git clone https://github.com/karmaniket/Train_station_indicator.git
    cd Train_station_indicator

### Run Simulation

- Compile and generate `HEX file` from `LcdTrain.ino` in Arduino IDE
- Find the `.hex` file path, commonly present in your Arduino `sketches` folder
- Open Proteus do the `interfacing`
- Ensure the Arduino Uno is `configured` to load compiled HEX file
- Double click the Arduino Uno in Proteus and `load` the .hex file
- `Run Simulation` in Proteus and observe the LCD

> [!TIP]
> All necessary resources including `Code`, `HEX file` and `Proteus schematic` are provided for quick and efficient practice.

## 🌟 Future Enhancements

- Integrate real-time GPS, GSM, RFID and RTC
- Display bilingual station names
- Add sound output for audio announcements

## ©️ License

This project is licensed under the `MIT License`. Feel free to use, modify and distribute with attribution.
