#include <iostream>
using namespace std;

int add(int &a, int b)
{
    a = a + 1;
    b = b + 1;
    return a + b;
}

int main()
{
    // Q.1
    //  int a;
    //  cout << "Enter a number : ";
    //  cin >> a;
    //  cout << "Value of a is: " << a << endl;

    // Q.2
    // int a; //1,-5, 0
    // float b; // 1.5, -2.5, 0.0
    // double c; // 1.5, -2.5, 0.0
    // char d; // 'a', 'A', '1', '!', ' '
    // bool e; // true, false
    // string f; // "Hello", "123", " ", "!@#$%^&*()"

    // Q.3
    // int age = 16;
    // if (age >= 18)
    // {
    //     cout << "You are eligible to vote." << endl;
    // }
    // else
    // {
    //     cout << "You are not eligible to vote." << endl;
    // }

    // Q.4
    // char grade = 'A';
    // switch (grade)
    // {
    // case 68:
    //     cout << "Excellent!" << endl;
    //     break;
    // case 'B':
    //     cout << "Good!" << endl;
    //     break;
    // case 'C':
    //     cout << "Fair!" << endl;
    //     break;
    // default:
    //     cout << "Invalid grade!" << endl;
    // }

    // Q.5
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << "Array elements are: " << arr[0] << endl;
    // string name = "John Doe";
    // cout << "Name: " << name << endl;

    // Q.6
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Hello World!" << endl;
    // }
    // int i = 1;
    // while (i <= 5)
    // {
    //     cout << "Hello World!" << endl;
    //     i++;
    // }

    // Q.7
    // int c = 5, d = 10;
    // cout << "Before function call: c = " << c << ", d = " << d << endl;
    // cout<<"Sum is : "<<add(c, d)<<endl;
    // cout << "After function call: c = " << c << ", d = " << d << endl;
    return 0;
}