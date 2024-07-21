# Car Rental System

This project is a basic Car Rental System implemented in C++. It allows users to rent cars, calculate rental costs, and generate bills.

## Features

- List of available cars with their rental rates.
- User input validation for phone numbers and names.
- Calculation of rental amounts based on duration.
- Generation of a bill with user details and rental information.

## Classes and Methods

### Class `Car`

- **Data Members:**
  - `choice`, `ChRent`, `amt`, `dur`, `tot`, `count`: Variables to store user choices, rent amount, duration, total amount, and count of available cars.
  - `car`, `license`, `name`, `phone`, `status`: Strings to store car details, license number, user name, phone number, and rental status.
  - `licensePlate[5]`, `CarName[5]`, `RentAmount[5]`: Arrays to store the details of the cars.
  
- **Constructor:**
  - Initializes the details of available cars including their license plate numbers, names, rent amounts, and availability counts.

- **Methods:**
  - `GetDetail()`: Collects user details and validates them.
  - `Bill()`: Generates and prints the rental bill.
  - `Rental()`: Displays the list of available cars and processes the rental transaction.

## Usage

1. Compile the program using a C++ compiler:
   ```sh
   g++ CarRentalSystem.cpp -o CarRentalSystem
2. Run the executable:

sh
Copy code
./CarRentalSystem
Follow the on-screen instructions to rent a car and generate a bill.

3. Example Output
 ```sh
Enter your Name(Can't Exceed 30) : John Doe
Enter Duration(In Hours)         : 5
Enter Phone                      : 1234567890

-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
|   Car Name    |  Rent Amount  |    Duration   |       Choice    |   Available   |
-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

...

===================BILL====================
    Name           : John Doe
    Phone          : 1234567890
    Car            : Suzuki Swift
    License Number : TN 96 AZ 1234
    Duration       : 5
    Amount         : 7500
===========================================
