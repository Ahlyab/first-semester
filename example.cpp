#include <iostream>
#include <iomanip>
using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter a number : ";
        cin >> arr[i];
    }
}

int calSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

double calAvg(int sum, int noOfSubjects)
{
    return (double)sum / noOfSubjects;
}

double calPercentage(int sum)
{
    return (sum * 100.0) / 500.0;
}

char calGrade(double percentage)
{
    char grade = 'F';

    if (percentage > 90 && percentage <= 100)
    {
        grade = 'A';
    }
    else if (percentage > 80 && percentage <= 90)
    {
        grade = 'B';
    }
    else if (percentage > 70 && percentage <= 80)
    {
        grade = 'C';
    }
    else if (percentage >= 50 && percentage <= 70)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    return grade;
}

int main()
{
    const int SIZE = 5;
    int marks[SIZE] = {0};

    inputArray(marks, SIZE);

    int sum = calSum(marks, SIZE);
    double avg = calAvg(sum, SIZE);
    double percentage = calPercentage(sum);
    char grade = calGrade(percentage);

    cout << "Obtained Marks : " << sum << endl;
    cout << "Avg marks : " << fixed << setprecision(2) << avg << endl;
    cout << "Percentage : " << fixed << setprecision(2) << percentage << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}

/*
write a function that swaps value of two variables

write a function that checks if a number is a power of 2

Link : https://forms.gle/Ye7WztnJw1r1bMJe7

source code : https://github.com/ahlyab/first-semester/

Deadline : 8PM tomorrow
*/