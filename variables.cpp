/*
    Variables : named memory location to store data

    Defining variable

    1. DataType variableName; -> declaration
    2. DataType variableName  = value; ->  initialization

    ---------------------------------------
    int a ;
    int b = 10;

    cout << b << endl;
    cout <<  a << endl; // random value
    ---------------------------------------

    garbage value : when a variable is declared but not initialized,
    it contains some garbage value. garbage value can be anything.
    --------------------------------------------------

    Operators :
    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators

    Arithmetic Operators
    +, -, *, /, %

    Relational Operators
    <, >, <=, >=, ==, != -> True/False

    Logical Operators
    &&, ||, !

*/

#include <iostream>
#include <iomanip> // iomanip -> input output manipulator
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Enter a number : ";
    cin >> a; // 10

    cout << "Enter another number : ";
    cin >> b; // 3

    cout << "Addition : " << a + b << endl;
    cout << "Subtraction : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    // cout << "Division : " << a / (float)b << endl; //
    cout << "Division : " << fixed << setprecision(3) << a / (float)b << endl; // 3.33333 -> 3.33

    // bool res = 10 != 20;

    // cout << boolalpha << res << endl;

    return 0;
}

/*

2 + 2 = 4
int + int = int

2 * 3 = 6
int * int  = int

2.5 + 3.5 = 6.0
float + float  = float

2 + 2.5 = 4.5

int + float  = float

int / int = int
int / float = float
float / int = float

------------------------------------------
type casting : converting one data type into other type

1. static cast
2. (datatype)
*/

/*
question 1: write a program that input number of small rooms and large room,
price for cleaning a small room is 10.5 dollars and for large room it's 17
calculate total bill and add 18% GST on total bill and print grand total

question 2: write a program to input your name and print it (input your full name)

question 3: write a program take input hours and your task it convert it milli seconds

question 4: write a program that has a function input a number and your task is to iterate
over the number from 1 and for every even number you have to print it's factorial and for every
odd number you have to check if it's prime or not


Link : https://forms.gle/Ye7WztnJw1r1bMJe7

Deadline : 8PM tomorrow
source code : https://github.com/Ahlyab/first-semester

Tomorrow's topic : if else, logical operator

 */