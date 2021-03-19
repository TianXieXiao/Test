#include <iostream>
using namespace std;
class Date{
public:
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	friend ostream& operator<<(ostream& out,const Date& d);
	friend istream& operator>>(istream& in,Date& d);

private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<( ostream& out, const Date& d)
{
	out << d._year << d._month << d._day;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}
int main()
{
	Date d1(2021, 3, 19);
	cin >> d1;
	cout << d1<<endl;
}