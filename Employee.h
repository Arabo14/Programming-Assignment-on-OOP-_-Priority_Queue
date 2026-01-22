#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <memory>
#include <queue>
#include <vector>
// Base class for all employees
class Employee {
protected:
std::string name;
int id;
std::string employeeClass;
double salary;
int experience;
public:
Employee(std::string name, int id, std::string empClass, int exp);
virtual ~Employee() {}
virtual void calculateIncome() = 0;
double getSalary() const;
virtual void printInfo() const;
};
// Derived classes
class CIO : public Employee {
public:
CIO(std::string name, int id, int exp);
void calculateIncome() override;
};
class ProjectManager : public Employee {
public:
ProjectManager(std::string name, int id, int exp);
void calculateIncome() override;
};
class Developer : public Employee {
std::string technology;
std::string level;
public:
Developer(std::string name, int id, int exp, std::string tech, std::string lvl, std::string devType);
void calculateIncome() override;
void printInfo() const override;
};
class Tester : public Employee {
std::string level;
public:
Tester(std::string name, int id, int exp, std::string lvl);
void calculateIncome() override;
void printInfo() const override;
};
class Engineer : public Employee {
std::string specialty;
std::string level;
public:
Engineer(std::string name, int id, int exp, std::string spec, std::string lvl);
void calculateIncome() override;
void printInfo() const override;
};
// Priority Queue class for employees
struct CompareSalary {
bool operator()(const std::shared_ptr<Employee>& e1, const std::shared_ptr<Employee>&
e2);
};
class EmployeeQueue {
std::priority_queue<std::shared_ptr<Employee>, std::vector<std::shared_ptr<Employee>>,
CompareSalary> pq;
public:
void addEmployee(std::shared_ptr<Employee> emp);
void printQueue();
void removeTopEmployee();
};
#endif // EMPLOYEE_H
