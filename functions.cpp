/*
function: a piece of code that performs a specific task


function types
1. Returnable function : a function that returns some value/object
2. Non returnable function: a function that returns nothing
3. parameterized function : a function that takes argument when it is called
4. non parameterized function : a function that takes no arguments when it is called

syntax:

returnType FunctionName (parameter) {
    // function body
}

int main() {
    // main ki body
}


How to call a function?
    we call a function by it's name and initiate the call by putting ()

Naming convention
1. snake case : "calculate average" -> calculate_average, print_hello, total_marks
2. camel case : "calculate average" -> calculateAverage, printHello, totalMarks
3. pascal case : "calculate average" -> CalculateAverage, PrintHello , TotalMarks


Returnable function

returnType FunctionName (parameter) {
    // function body
}

Datatypes : int, float, double, char, string, bool


agenda:
1. parameteric functions
2. pass by value & pass by reference

bool isEven(int a, int b, int c) {
}

how to define a parameter?
datatype followed by parameter name

how to define multiple parameters?
each parameter is separated by comma


*/

#include <iostream>
#include <string>
using namespace std;

double sum(double a, double b) { return a + b; }
double diff(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }

void changeValue(int &x) // pass by value
{
    cout << "Value of x before changing: " << x << endl;
    x = 10;
    cout << "Value of x after changing : " << x << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 10;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    a = 20;

    cout << a << endl;
    cout << b << endl;

    b = 30;

    cout << a << endl;
    cout << b << endl;

    int marks[5] = {1, 2, 3, 4, 6};

    for (int i = 0; i < 4; ++i)
    {
        cout << marks[i] << endl;
    }

    for (int mark : marks)
    {
        cout << mark << endl;
    }

    // int a, b;

    // cout << "Enter two numbers separated by space : ";
    // cin >> a >> b; // 10 5

    // cout << a << "|" << b << endl;

    // swap(a, b);

    // cout << a << "|" << b << endl;

    // int x = 5;
    // cout << "value of x from Main before function call: " << x << endl;
    // changeValue(x);
    // cout << "value of x from Main after function call: " << x << endl;

    return 0;
}

/*

1. write a calculator program using functions
2. write a swap function
3. write a function that takes 5 subject marks and return avg
4. write a function that takes rows as input and print right angle triangle
example :
enter a number  : 4
*
**
***
****
5. write a function that takes variable as parameter and store input in it

Link : https://forms.gle/Ye7WztnJw1r1bMJe7

Deadline : 8PM tomorrow
*/