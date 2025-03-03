#include <iostream>

class Person
{
public:
    Person(std::string name, unsigned age)
    {
        this->name = name;
        this->age = age;
    }
    void print() const
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
protected:
    std::string name;  
private:
    unsigned age;
};
class Employee: public Person
{
public:
    Employee(std::string name, unsigned age, std::string company): Person(name, age)
    {
        this->company = company;
    }
    void printEmployee() const
    {
        std::cout << name << " works in " << company << std::endl;
    }
private:
    std::string company;    // ��������
};

int main()
{
    Person person {"Tom", 38};
    person.print();     // Name: Tom       Age: 38

    Employee employee {"Bob", 42, "Microsoft"};
    employee.printEmployee();   // Bob works in Microsoft
}
