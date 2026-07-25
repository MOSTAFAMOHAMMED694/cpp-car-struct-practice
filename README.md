# Car Owner Information System

A simple C++ console application for reading, storing, and displaying information about cars and their owners.

## Project Description

This project was created to practise basic C++ programming concepts, including:

- Structures
- Nested structures
- Enumerations
- Functions
- Passing structures by reference
- Console input and output
- Git and GitHub workflow

The program allows the user to enter information for two cars, including car details, owner details, contact information, address information, gender, marital status, and favourite colour.

## Features

- Read car information from the user
- Read owner information
- Read contact information
- Read detailed address information
- Store data using nested structures
- Use enumerations for predefined choices
- Display all entered information in an organised format
- Handle multiple car records

## Data Structures

The program uses the following structures:

- `stAddress`
- `stContactInfo`
- `stOwner`
- `stCar`

## Enumerations

The program uses enumerations for:

- Favourite colour
- Gender
- Marital status

## Main Functions

### `ReadInfo`

Reads car and owner information from the user and stores it inside an `stCar` structure.

```cpp
void ReadInfo(stCar& Info);
PrintInfo

Displays all stored car and owner information.

void PrintInfo(const stCar& Info);
Information Stored

The program stores the following data:

Car Information
Brand
Model
Manufacturing year
Owner Information
First name
Last name
Gender
Marital status
Favourite colour
Contact Information
Phone number
Email
Instagram account
Address Information
Street
Building number
Entrance number
Apartment number
PO Box
Technologies Used
C++
Visual Studio
Git
GitHub
How to Run
Clone or download the repository.
Open the solution in Visual Studio.
Build the project.
Run the program using Ctrl + F5.
Enter the requested information for each car.
The program will display the entered information.
Example Workflow
Enter information for the first car:
Please enter car brand:
BMW

Please enter car model:
X5

Please enter car year:
2022

After entering all information, the program displays the complete car and owner record.

Current Limitations
Text containing spaces is currently read as one word.
User choices for gender, marital status, and colour are not yet validated.
The program currently reads two car records only.
Data is not saved permanently after the program closes.
Planned Improvements
Use getline to support names and addresses containing spaces
Validate all user input
Divide reading and printing into smaller functions
Allow the user to choose the number of cars
Add a menu system
Store multiple cars using arrays or vectors
Add search, edit, and delete options
Save and load data from files
Learning Purpose

This project is part of my C++ learning journey and my first practical experience using Git and GitHub to track changes through meaningful commits.

Author

Mostafa Mohamed
