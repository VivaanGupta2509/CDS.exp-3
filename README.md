# Experiment 3

## Aim -
To write C++ programs that demonstrate the use of different operators such as arithmetic, assignment, and comparison operators.
## Theory - 
Operators are special symbols used to perform operations on variables and values. 
Understanding how to use different operators is fundamental to performing calculations, assigning values, and making comparisons in programming.
## Code - 
```
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
```

## Explanation - 
Arithmetic Operators: Demonstrate basic mathematical operations such as addition, subtraction, multiplication, division, and modulus.
Assignment Operators: Show how to assign values to variables using =, +=, -=, *=, /=, and %=.
Comparison Operators: Illustrate how to compare values using ==, !=, <, >, <=, and >=

## Conclusion - 
These programs provide a clear understanding of how to use various operators in C++.
Mastery of operators is essential for performing calculations, making decisions, and controlling the flow of a program.

