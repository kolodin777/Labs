#include <iostream>
#include <string>
using namespace std;

class Numbers {
private:
    int x;
    int y;

public:
    void SetX(int valueX) {
        x = valueX;
    }
    void SetY(int valueY) {
        y = valueY;
    }
    Numbers(int b,int c) {
        SetX(b);
        SetY(c);
    }

    string Info() {
        return "x: " + to_string(x) + " y: " +to_string(y);
    }

    int integerDivision() {
        if (y == 0) {
            cout << "Error: y can`t be zero" << endl;
            return 0;
        }
        return x / y;
    }
};

int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    Numbers obj(x, y);
    string t = obj.Info();
    cout << t <<endl;

    int result = obj.integerDivision();
    cout << "Result: " << result << endl;
}
