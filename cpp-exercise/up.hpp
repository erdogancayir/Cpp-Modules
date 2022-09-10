#ifndef UP_HPP
# define UP_HPP

#include "iostream"
#include "string"

using namespace std;

class emp{
	public:
		string name, sur;
		double salary;
		emp(string name1, string sur1, double salary1){
			name = name1;
			sur = sur1;
			salary = salary1;
		}
		void	dp(){
			cout << "name: " << name << endl;
			cout << "sur: " << sur << endl;
			cout << "salary: " << salary << endl;
		}
};

class man: public emp{
public:
	string dep1;
	man(string name, string sur, double salary, string dep): emp(name, sur, salary){
		dep1 = dep;
	}
	void	dp(){
		emp::dp();
		cout << "dep: " << dep1 << endl;
	}
	void	inc()
	{
		salary += 200;
	}
	string yes(){
		return (name);
	}
};

#endif