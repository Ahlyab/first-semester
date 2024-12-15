/*
    if statement : if is used to execute a piece of code when a certain condition is met

    if(condition) {
        // body
    }

    if else : if is used to execute a piece of code when a certain condition is met other wise
        else part is executed

    if (condition) {
        // body
    } else {
        // body
    }

    if else if ladder : if else if is used when you have more than two conditions and you want to
        execute code when one of the conditions turns out to be true

    if (condition) {
        // body
    }else if (condition) {
        // body
    }
    .
    .
    .
    else {
        // body
    }



    if you have any question please feel free to ask I will answer it to the best of my ability


*/

#include <iostream>
using namespace std;

int main()
{
    // int age = 0;

    // cout << "Enter your age : ";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You are an adult" << endl;
    // }
    // else
    // {
    //     cout << "You are a kid" << endl;
    // }

    int subj = 0;

    cout << "Enter subject marks : ";
    cin >> subj;

    if (subj >= 90 && subj <= 100)
    {
        cout << "Grade :A " << endl;
    }
    else if (subj >= 80 && subj <= 89)
    {
        cout << "Grade : B" << endl;
    }
    else if (subj >= 70 && subj <= 79)
    {
        cout << "Grade : C" << endl;
    }
    else if (subj >= 50 && subj <= 69)
    {
        cout << "Grade : D" << endl;
    }
    else if (subj < 50 && subj >= 0)
    {
        cout << "Grade : F" << endl;
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }

    // ----------------------------------------------

    int n = 0;

    cout << "Enter a number : ";
    cin >> n;

    if (n % 3 == 0 || n % 7 == 0)
    {
        cout << "It's a lucky number" << endl;
    }
    else
    {
        cout << "It's an ordinary number" << endl;
    }

    return 0;
}

/*
1. write a program that takes two number as input and perform arithmetic opertaions
Note : in division answer should be up to 2 decimal points

2. write a program that takes 3 subject marks as input and calculate the following
    - avg marks
    - grade
    - percentage (total marks are 300)

3. write a program that takes a number as input and check if it's even or odd and also check
if it's even and lies in  range of 20 to 26 then print it's a great number and if it's odd check if it
lies in the range of 9 to -10 then print it's a just okay number other wise print foobar

Link : https://forms.gle/Ye7WztnJw1r1bMJe7

Deadline : 8PM tomorrow

*/