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
        cout << "Enter number : ";
        cin >> marks[i];
    }

    // cin >> marks[0];
    // cin >> marks[1];
    // cin >> marks[2];
    // cin >> marks[3];
    // cin >> marks[4];

    int max = INT_MIN;

    for (int i = 0; i < 5; ++i)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    cout << "Largest Number : " << max << endl;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;
    return 0;
}

/*
write a program using array, take 5 numbers as input and find the smallest number

write a program using array, take 5 numbers as input and find the second largest number

Link : https://forms.gle/Ye7WztnJw1r1bMJe7

source code : https://github.com/ahlyab/first-semester/

Deadline : 8PM tomorrow
*/