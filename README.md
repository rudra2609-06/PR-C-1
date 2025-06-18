`README.md`
```md
# Project Title: Utility Tools in C

## Description
Utility Tools is a collection of simple C programs that provide three essential functionalities:
1. Temperature Converter: Converts temperatures from Celsius to Fahrenheit.
2. Gross Salary Calculator: Calculates the gross salary based on the base salary.
3. Triangle Angle Finder: Calculates the third angle of a triangle given the first two angles.

## Author
Rudra Thakkar  
Date: 18-06-2025

## Features
- **Temperature Converter**: 
  - Converts Celsius to Fahrenheit using the formula:
    \[
    F = \frac{C \times 9}{5} + 32
    \]
  
- **Gross Salary Calculator**: 
  - Calculates gross salary based on base salary and predefined allowances (10%, 5%, and 8% of the base salary).
  
- **Triangle Angle Finder**: 
  - Calculates the third angle of a triangle given the first two angles using the formula:
    \[
    A_3 = 180 - (A_1 + A_2)
    \]

## Installation
1. Ensure you have a C compiler installed (e.g., GCC).
2. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/utility-tools.git
   ```
3. Navigate to the project directory:
   ```bash
   cd utility-tools
   ```

## Usage
### Temperature Converter
To compile and run the temperature converter:
```bash
gcc temperature_converter.c -o temperature_converter
./temperature_converter
```
Follow the prompts to enter the temperature in degrees Celsius.

**Screenshot:**

![triangle_angle_img](https://github.com/user-attachments/assets/72a7e0b3-7b72-4801-bc00-0f56e5393910)


### Gross Salary Calculator
To compile and run the gross salary calculator:
```bash
gcc salary_calculator.c -o salary_calculator
./salary_calculator
```
Input your base salary when prompted.

**Screenshot:**

![gross_salary_img](https://github.com/user-attachments/assets/15fe2a1f-4155-4fd1-b1a8-c4388c336b20)


### Triangle Angle Finder
To compile and run the triangle angle finder:
```bash
gcc triangle_angle_finder.c -o triangle_angle_finder
./triangle_angle_finder
```
Enter the first and second angles of the triangle when prompted.

**Screenshot:**

![convertor_img](https://github.com/user-attachments/assets/81ef6142-57ed-4b5d-b7d1-158eb993bd42)


## Example
### Temperature Conversion
- Input: 25°C
- Output: Your temperature in degree Fahrenheit is 77.0

### Gross Salary Calculation
- Input: Base Salary = 50000
- Output: Your gross salary is: 57000

### Triangle Angle Calculation
- Input: First Angle = 60°, Second Angle = 70°
- Output: The third angle of the triangle is 50

## Contributing
Contributions are welcome! Please feel free to submit a pull request or open an issue for any suggestions or improvements.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments
- Inspired by various programming challenges and tutorials.
- Thanks to the open-source community for their invaluable resources.

```
