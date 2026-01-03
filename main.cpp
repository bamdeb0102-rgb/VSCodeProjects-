#include <iostream>
using namespace std;

class Calculator {
private:
    double  a;
    double b;

public:
    Calculator(double a, double b) {
        Calculator::a = a;
        Calculator::b = b;
    }

public :
    double add() {
        return a + b;
    }

public :
    double sub() {
        return a - b;
    }

public :
    double mul() {
        return a * b;
    }

public :
    double  div() {
        return a / b;
    }
};

int main() {
    double a;
    double b;
    cout << "Enter two numbers :"<<endl;
    cin >> a >> b;
    cout << "Enter 1 for add , 2 for sub, 3 for mul, 4 for div"<<endl;
    int ch;
    cin >> ch;
    Calculator c(a,b);

    if (ch==1) {
        cout << "Result = "<<c.add()<<endl;
    }
    else if (ch==2) {
        cout << "Result = "<<c.sub()<<endl;
    }
    else if (ch==3) {
        cout << "Result = "<<c.mul()<<endl;
    }
    else if (ch==4) {
        if (b==0) {
            cout << "Error : division by zero is not possible.";
        }
        else {
            cout << "Result = "<<c.div()<<endl;
        }
    }
}
