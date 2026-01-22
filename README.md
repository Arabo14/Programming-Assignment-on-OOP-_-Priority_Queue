# Employee Management System with Priority Queue (C++)

This project implements an object-oriented employee management system in C++ that organizes employees using a **priority queue based on salary**. Multiple employee roles are modeled through inheritance, and salaries are calculated dynamically based on role, experience, and specialization.

## Features
- Object-oriented design with a base `Employee` class and multiple derived roles
- Employee types include:
  - CIO
  - Project Manager
  - Developer
  - Tester
  - Engineer
- Dynamic salary calculation based on experience and job level
- Uses `std::priority_queue` to maintain employees ordered by highest salary
- Smart pointer (`std::shared_ptr`) usage for safe memory management
- Ability to add employees, print the priority queue, and remove the top-paid employee

## Project Structure
- `Employee.h` – Class declarations for all employee types and the priority queue
- `Employee.cpp` – Implementations of employee behaviors and salary calculations
- `main.cpp` – Driver program that creates employees and demonstrates queue operations
- `README.md` – Project documentation

## How It Works
Each employee type inherits from the abstract `Employee` base class and overrides the `calculateIncome()` method to compute salary using role-specific rules. Employees are stored in a priority queue that automatically orders them by salary, ensuring that the highest-paid employee is always at the top. Smart pointers are used to manage object lifetimes safely.

## How to Compile and Run

### Compile
```bash
g++ main.cpp Employee.cpp -o employee_queue
