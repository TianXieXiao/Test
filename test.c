#include <iostream>
using namespace std;
class Time
{
public:
	Time(int hour = 0)
		:_hour(hour)
	{
		cout << "Time()" << endl;
	}
private:
	int _hour;

};
class Date
{
public:
	Date(int day)
	{

	}
private:
	int day;
	Time _t;
};


int main()
{
	Date d(1);
}