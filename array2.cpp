/*
Array : array is a collection of similar type of data in a continguous memory

syntax : datatype array_name [size];
example: int marks[5];

declaration: datatype array_name [size];
example: int marks[5];

initialization: datatype array_name [size] = {value};
example : int marks[5] = {0};

Important note : index starts from zero and last index is always one less than size

how can we store data in an array?
    through indices/indexes

*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {0};

    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter subject " << i + 1 << " marks : ";
        cin >> marks[i];
    }

    int obtained_marks = 0;

    for (int i = 0; i < 5; ++i)
    {
        // obtained_marks += marks[i];
        obtained_marks = obtained_marks + marks[i];
    }

    cout << "Avg : " << obtained_marks / 5.0 << endl;
    cout << "percentage : " << obtained_marks * 100.0 / 500 << endl;

    return 0;
}

/*
source code : https://github.com/ahlyab/first-semester/


write a program that uses array to input 5 numbers and find max and second max from the array

write a function that checks if a number is a power of 2

Deadline : 8PM tomorrow
*/
