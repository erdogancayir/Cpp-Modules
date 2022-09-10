#ifndef ODEV_HPP
#define ODEV_HPP

#include "iostream"
#include "string"

using namespace std;

class date{
	public:
		date(int d = 1, int m = 1, int y = 1900);
		date(const date &oth);
		~date();
		void	set_date(int d = 1, int m = 1, int y = 1800);
		void	set_day(int d);
		void	set_month(int m);
		void	set_year(int y);
		int		get_day() const{
			return (day);
		}
		int		get_month() const{
			return (month);
		}
		int		get_year() const{
			return (year);
		}
		void	increase_day();
		void	compare_date(const date &oth);
		void	display_date();
	private:
		int year, month, day;
		const int mont_days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		const string month_string[12] = {"jan", "feb", "mar", "april", "may", "jun", "july", "aug", 
			"sem", "oct", "nov", "dec"};
};

date::date(int d, int m, int y){
	day = d;
	month = m;
	year = y;
	cout << "created value constructer " << endl;
}

date::~date(){
	cout << "finishh!!!!! " << endl;
}

date::date(const date &oth){
	day = oth.day;
	month = oth.month;
	year = oth.year;	
}

void	date::display_date(){
	cout << "year -> " << year << endl;
	cout << "month -> " << month_string[get_month() - 1] << endl;
	cout << "day -> " << mont_days[get_day() - 1] << endl;
}

#endif