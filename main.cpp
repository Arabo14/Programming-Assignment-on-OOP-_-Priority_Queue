#include "Employee.h"
#include <memory>
int main() {
EmployeeQueue eq;
eq.addEmployee(std::make_shared<CIO>("Alice", 1, 120));
eq.addEmployee(std::make_shared<ProjectManager>("Bob", 2, 80));
eq.addEmployee(std::make_shared<Developer>("Charlie", 3, 60, ".Net", "Senior", "BD"));
eq.addEmployee(std::make_shared<Developer>("Diana", 4, 45, "React", "Middle", "FD"));
eq.addEmployee(std::make_shared<Tester>("Eve", 5, 50, "Junior"));
eq.addEmployee(std::make_shared<Engineer>("Frank", 6, 100, "Database", "Senior"));
eq.addEmployee(std::make_shared<Engineer>("Grace", 7, 70, "DevOps", "Middle"));
eq.addEmployee(std::make_shared<Developer>("Henry", 8, 30, "Django", "Junior", "BD"));
eq.addEmployee(std::make_shared<Tester>("Ivy", 9, 20, "Middle"));
eq.addEmployee(std::make_shared<ProjectManager>("Jack", 10, 60));
std::cout << "Employees in Priority Queue by Salary:\n";
eq.printQueue();
std::cout << "\nRemoving top employee...\n";
eq.removeTopEmployee();
std::cout << "\nEmployees after removal:\n";
eq.printQueue();
return 0;
}
