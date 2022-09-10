#include "iostream"

using namespace std;

class yes
{
private:
	string	name, sur, id;
public:
	void	set(string o, string m, string e){
		name = o; sur = m; id = e;
	}
	void	dp(){
		cout << name << endl << sur << endl << id << endl;
	}
	yes();
};

yes::yes()
{
	name = "kocaeli";
	sur = "gebze";
	id = "11";
}

int main()
{
	yes	no;

	no.dp();
	no.set("omer", "yumusak", "ok");
	no.dp();
}