#include "Employee.h"
// Employee Base Class
Employee::Employee(std::string name, int id, std::string empClass, int exp)
: name(name), id(id), employeeClass(empClass), experience(exp), salary(0) {}
double Employee::getSalary() const {
return salary;
}
void Employee::printInfo() const {
std::cout << "Name: " << name << ", ID: " << id << ", Class: " << employeeClass
<< ", Salary: $" << salary << ", Experience: " << experience << " months\n";
}
// CIO Class
CIO::CIO(std::string name, int id, int exp) : Employee(name, id, "CIO", exp) {}
void CIO::calculateIncome() {
salary = 10000 + (experience * 50);
}
// ProjectManager Class
ProjectManager::ProjectManager(std::string name, int id, int exp) : Employee(name, id, "PM",
exp) {}
void ProjectManager::calculateIncome() {
salary = 8000 + (experience * 40);
}
// Developer Class
Developer::Developer(std::string name, int id, int exp, std::string tech, std::string lvl, std::string
devType)
: Employee(name, id, devType, exp), technology(tech), level(lvl) {}
void Developer::calculateIncome() {
double base = 5000;
if (level == "Senior") base += 3000;
else if (level == "Middle") base += 2000;
else if (level == "Junior") base += 1000;
salary = base + (experience * 30);
}
void Developer::printInfo() const {
Employee::printInfo();
std::cout << "Technology: " << technology << ", Level: " << level << "\n";
}
// Tester Class
Tester::Tester(std::string name, int id, int exp, std::string lvl)
: Employee(name, id, "TST", exp), level(lvl) {}
void Tester::calculateIncome() {
double base = 4000;
if (level == "Senior") base += 2500;
else if (level == "Middle") base += 1500;
else if (level == "Junior") base += 500;
salary = base + (experience * 20);
}
void Tester::printInfo() const {
Employee::printInfo();
std::cout << "Level: " << level << "\n";
}
// Engineer Class
Engineer::Engineer(std::string name, int id, int exp, std::string spec, std::string lvl)
: Employee(name, id, "ENG", exp), specialty(spec), level(lvl) {}
void Engineer::calculateIncome() {
double base = 6000;
if (level == "Senior") base += 3500;
else if (level == "Middle") base += 2000;
else if (level == "Junior") base += 1000;
salary = base + (experience * 25);
}
void Engineer::printInfo() const {
Employee::printInfo();
std::cout << "Specialty: " << specialty << ", Level: " << level << "\n";
}
// CompareSalary Struct
bool CompareSalary::operator()(const std::shared_ptr<Employee>& e1, const
std::shared_ptr<Employee>& e2) {
return e1->getSalary() < e2->getSalary();
}
// EmployeeQueue Class
void EmployeeQueue::addEmployee(std::shared_ptr<Employee> emp) {
emp->calculateIncome();
pq.push(emp);
}
void EmployeeQueue::printQueue() {
std::priority_queue<std::shared_ptr<Employee>, std::vector<std::shared_ptr<Employee>>,
CompareSalary> temp = pq;
while (!temp.empty()) {
temp.top()->printInfo();
temp.pop();
}
}
void EmployeeQueue::removeTopEmployee() {
if (!pq.empty()) {
pq.pop();
} else {
std::cout << "Queue is empty!\n";
}
}
