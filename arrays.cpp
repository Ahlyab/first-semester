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

// returnType function_name(datatype array_name[], int size)
// always pass array size along the array

int getSmallest(int arr[], int size)
{
    int smallest = INT_MAX;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int getLargest(int arr[], int size)
{
    int largest = INT_MIN;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int getSecondLargest(int arr[], int size)
{

    int largest = getLargest(arr, size);
    int second_largest = INT_MIN;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }
}

int main()
{
    const int SIZE = 5;
    int marks[SIZE] = {0};

    inputArray(marks, SIZE);

    cout << "Smallest number  : " << getSmallest(marks, SIZE) << endl;
    cout << "Largest number  : " << getLargest(marks, SIZE) << endl;
    cout << "Second Largest number  : " << getSecondLargest(marks, SIZE) << endl;
    ;

    return 0;
}

/*

Scenario : you are running a school and your task is to develop a program that input
5 subject marks and calculate avg number, percentage and grade

(Hint : use array to store marks)

program will have a couple of functions
1. function that takes array as parameter and take input in it
2. fucntion that takes array as parameter and return avg
3. fucntion that takes array as parameter and return percentage
4. fucntion that takes array as parameter and return grade

you can change function parameters as it seems best to you but functionality should be same

Important Note:
    call functions and print result in main


Link : https://forms.gle/Ye7WztnJw1r1bMJe7

source code : https://github.com/ahlyab/first-semester/

Deadline : 8PM tomorrow
*/