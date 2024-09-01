Certainly! Here's a detailed README # Temperature Converter 🌡️
---
[In Python](https://github.com/mdriyadkhan585/temperature-converter-python)

![Logo](logo.svg)

---
## Overview
This Temperature Converter program allows you to easily convert temperatures between Celsius and Fahrenheit. It's a simple and effective tool for quickly finding temperature equivalents, whether you're a student, scientist, or just curious about temperature conversions.

## Features
- Convert from Celsius to Fahrenheit 🌡️➡️🌟
- Convert from Fahrenheit to Celsius 🌟➡️🌡️
- User-friendly interface with clear instructions 🖥️

## How It Works
1. **Start the Program**: Compile and run the program using a C compiler.
2. **Choose Conversion Type**: Select the type of conversion you want to perform:
   - Celsius to Fahrenheit
   - Fahrenheit to Celsius
3. **Enter Temperature**: Input the temperature value you wish to convert.
4. **View Results**: The program will display the converted temperature in the selected unit.

## How to Use

### Compilation
To compile the program, use the following command in your terminal:

```bash
git clone https://github.com/mdriyadkhan585/temperature-converter-C
cd temperature-converter-C
gcc -o temperature_converter temperature_converter.c
```

### Running the Program
After compilation, run the program with:

```bash
./temperature_converter
```

### Example Usage
1. **Celsius to Fahrenheit**:
   - **Prompt**: Enter temperature in Celsius:
   - **Input**: `25`
   - **Output**: `25.00 Celsius is equal to 77.00 Fahrenheit`

2. **Fahrenheit to Celsius**:
   - **Prompt**: Enter temperature in Fahrenheit:
   - **Input**: `77`
   - **Output**: `77.00 Fahrenheit is equal to 25.00 Celsius`

## Code Explanation
- **celsiusToFahrenheit**: Converts Celsius to Fahrenheit using the formula `F = (C * 9/5) + 32`.
- **fahrenheitToCelsius**: Converts Fahrenheit to Celsius using the formula `C = (F - 32) * 5/9`.

## Contributing
Feel free to fork the repository and contribute improvements or bug fixes. Pull requests are welcome!

---
