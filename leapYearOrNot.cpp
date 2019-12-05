#include <iostream>
using namespace std;
class Leap{
	int year;
	public:
		void fun(){
			cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year."<<endl;
            else
                cout << year << " is not a leap year."<<endl;
        }
        else
            cout << year << " is a leap year."<<endl;;
    }
    else
        cout << year << " is not a leap year."<<endl;
	}
};
int main()
{
	Leap year;
	year.fun();
    return 0;
}

