
# Temperature Converter Project

## Project Overview
This project is a C++ program designed to automate the conversion of temperature data from Fahrenheit to Celsius. The program reads temperature information for different cities from an input file (`FahrenheitTemperature.txt`), converts the values to Celsius, and writes the results to an output file (`CelsiusTemperature.txt`). This project demonstrates file input/output operations, data type management, and formatting precision in C++.

---

## Reflection

### Summarize the project and what problem it was solving
The project solves the problem of manually converting temperature data between Fahrenheit and Celsius for multiple locations. Automating this process reduces human error and saves time when handling large datasets.

### What did you do particularly well?
I implemented solid file handling, including proper validation to ensure the input and output files opened successfully. I also formatted the Celsius output neatly to two decimal places, improving the program's professional appearance.

### Where could you enhance your code?
To enhance the code, I could implement exception handling using `try-catch` blocks to handle unexpected errors more gracefully. Additionally, I could read temperatures as `double` instead of `int` to preserve fractional values from the input file, making the program more accurate and flexible.

### Which pieces of the code did you find most challenging to write, and how did you overcome this?
Managing file operations correctly was initially challenging, especially ensuring that both input and output streams were validated and closed properly. I overcame this by reviewing examples of file handling in C++ and practicing smaller examples before building the full program.

### What tools or resources are you adding to your support network?
I added the C++ official documentation, Stack Overflow discussions, and tutorial videos on file operations and formatting. I plan to continue using these resources to deepen my understanding of file handling and error management.

### What skills from this project will be particularly transferable to other projects or course work?
Skills in file input/output operations, data conversion between formats, output formatting, error checking, and writing clean, maintainable code are all highly transferable to other programming tasks across different languages.

### How did you make this program maintainable, readable, and adaptable?
I used meaningful and descriptive variable names, structured the code into logical sections with comments, and ensured consistent formatting. This makes it easier for others (and myself in the future) to understand, maintain, and expand the program as needed.

---

## How to Run
1. Make sure `FahrenheitTemperature.txt` is in the same directory as `temperature_converter.cpp`.
2. Compile the program using a C++ compiler:
   ```bash
   g++ temperature_converter.cpp -o temperature_converter
   ```
3. Run the executable:
   ```bash
   ./temperature_converter
   ```
4. Check `CelsiusTemperature.txt` for the output.

---

## Files Included
- `temperature_converter.cpp` (C++ source code)
- `FahrenheitTemperature.txt` (Input file with temperatures in Fahrenheit)
- `CelsiusTemperature.txt` (Output file with temperatures in Celsius)
