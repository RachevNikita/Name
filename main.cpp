#include <iostream>
#include "sdt.h"
//комментарий 

int main()
{
	setlocale(LC_ALL, "Rus");

    int number_one;
    int number_two;
    int c;
    cout << "Введите два целых числа: ";

    cin >> number_one;
     cin >> number_two;


    cout << "number_one: " << number_one << endl;
     cout << "number_two: " << number_two << endl;
	
	c=number_one-number_two;
    cout << "Произведение двух чисел: " << c << endl;

c=number_one+number_two;
    cout << деление двух чисел: " << c << endl;
    
    return 0;
}
