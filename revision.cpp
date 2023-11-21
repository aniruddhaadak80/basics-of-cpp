// Date :- 21/11/2023
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int sum_of_two_num(int a, int b)
{
    cout << a + b << "\n";
}

int main()
{
    cout << "Hallo c++ , I came  back\n";

    // Favourite number using c++
    int favnum;
    cout << "Enter your favourite number:";
    cin >> favnum;                               // taking input for c++
    cout << "your number is:" << favnum << "\n"; // output for c++

    // escape secuence in c++
    cout << "My favourite book is \"Rich Dad and Poor Dad\" by \'ROBERT KIOSAKI\' \n";

    // Single line comments
    /*Double line comments*/

    // Data types
    int roll_no = 30;
    float decimal = 4.44;
    string name = "Aniruddha Adak";
    bool isTrue = true; // output:- 1
    double long long_float = 4.53839;
    char symbol = 'A';
    const float PI = 3.14;
    cout << "Roll No : " << roll_no << "\n"
         << "Decimal : " << decimal << "\n"
         << "Name : " << name << "\n"
         << "Boolean : " << isTrue << "\n"
         << "Long float : " << long_float << "\n"
         << "Charecter : " << symbol << "\n"
         << "PI value : " << PI << "\n";

    // Call the sum_of_two_num function and put values in it
    sum_of_two_num(2, 3);
    sum_of_two_num(9, 9);
    sum_of_two_num(18, 18);
    sum_of_two_num(29, 9);

    // Array in c++
    int arr_of_num[] = {2, 3, 4, 5, 6};
    cout << arr_of_num[0] << "\n";
    cout << sizeof(arr_of_num) << "\n";

    // sizeof string or length of a string
    cout << sizeof("Aniruddha Adak") << "\n";

    // Math operations
    cout << "Max is :" << max(3, 1) << "\n";
    cout << "Min is : " << min(3, 1) << "\n";
    cout << "Round is :" << round(3.23) << "\n";
    cout << "Square is :" << sqrt(4) << "\n";
    cout << "Log is :" << log(1) << "\n";
}