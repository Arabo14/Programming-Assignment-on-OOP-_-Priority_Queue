Description:
This C++ program simulates a payroll management system for a technology company with
various employee roles, each with unique characteristics and salary calculations. The system
features an abstract Employee class containing common attributes such as name, employee ID,
experience, and salary, and it serves as a foundation for specialized roles: CIO,
ProjectManager, Developer, Tester, and Engineer. Each role class inherits from Employee and
defines its own calculateIncome method, adjusting salaries based on factors such as job
position, experience, qualification level (Senior, Middle, Junior), and technology specialization
(e.g., .Net or React for developers). To manage these employees, the program uses a priority
queue (EmployeeQueue) where employees are prioritized by their calculated salaries. The
EmployeeQueue class provides functions to add employees, print the queue, and remove the
highest-paid employee, illustrating concepts of inheritance, polymorphism, and data
encapsulation. The driver program in main.cpp creates sample employees, populates the
queue, and demonstrates the queue operations step-by-step.
Output:
