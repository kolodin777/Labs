#include <iostream>
#include <string>

using namespace std;

class Worker {
private:
    string surname;
    double salary;
    int yearOfJoining;

public:

    Worker() : surname(""), salary(0.0), yearOfJoining(2000) {}

    Worker(string s, double sal, int year) : surname(s), salary(sal), yearOfJoining(year) {}


    ~Worker() {
        cout << "Object worker " << surname << " is destroyed." << endl;
    }


    int calculateExperience() const {
        int currentYear = 2025;
        return currentYear - yearOfJoining;
    }


    int daysSinceJoining() const {
        int currentYear = 2025;
        int days = (currentYear - yearOfJoining) * 365;
        return days;
    }


    string toString() const {
        return "Surname: " + surname + "\nSalary: " + to_string(salary) +
               "\nYear of join: " + to_string(yearOfJoining) +
               "\nExperience: " + to_string(calculateExperience()) + " years" +
               "\nDays since joining: " + to_string(daysSinceJoining()) + " days";
    }
};

int main() {

    Worker worker1("Ivanov", 50000, 2015);
    cout << worker1.toString() << endl;


    string surname;
    double salary;
    int yearOfJoining;

    cout << "Enter surname of worker: ";
    getline(cin, surname);
    cout << "Enter salary of worker: ";
    cin >> salary;
    cout << "Enter year of joining worker: ";
    cin >> yearOfJoining;

    Worker worker2(surname, salary, yearOfJoining);
    cout << worker2.toString() << endl;
    delete worker2;
    
}
