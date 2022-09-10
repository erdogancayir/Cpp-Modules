#ifndef BANKA_HPP
# define BANKA_HPP

#include "iostream"
#include "string"

using namespace std;

class bank{
	public:
		bank(string name, string surname, float balance = 0, string phone = "");
		bank(const bank &oth);
		~bank();
		bool control_name_surname(string name_or_sur);
		bool control_phone(string phone);
		void display();
		void credit();
		void withdraw();
		void send_money(bank &othbank, float amount);
		void set_person_name(string name);
		void set_person_sur(string surname);
		void set_person_phone(string phone);
		void set_person_balance(float balance = 0);
		int get_person_balance(){
			return (balance);
		}
		string get_personname(){
			return (name);
		}
		string get_personsur(){
			return (surname);
		}
		string get_phone(){
			return (phone);
		}
	private:
		float balance;
		string name, surname, phone;
};

#endif