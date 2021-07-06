#include <iostream>
using namespace std;
void leapyear(int& year)
{

	 if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

	
}

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;
   
   leapyear (year);

    return 0;
}
