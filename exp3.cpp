#include <iostream>
using namespace std;
int main() 
{
    int a = 20;
    int b = 10;
    
    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Assignment Operators
    int c = a;
    c += b;
    cout << "\nAssignment Operators:" <<endl;
    cout << "c after c += b: " << c << endl;
    c -= b;
    cout << "c after c -= b: " << c << endl;
    c *= b;
    cout << "c after c *= b: " << c << endl;
    c /= b;
     cout << "c after c /= b: " << c << endl;
    c %= b;
    cout << "c after c %= b: " << c << endl;

    // Comparison Operators
    cout << "\nComparison Operators:" <<   endl;
    cout << "a == b: " << (a == b) <<  endl;
    cout << "a != b: " << (a != b) <<  endl;
    cout << "a > b: " << (a > b) <<    endl;
    cout << "a < b: " << (a < b) <<    endl;
    cout << "a >= b: " << (a >= b) <<  endl;
    cout << "a <= b: " << (a <= b) <<  endl;    

    return 0;


}
   