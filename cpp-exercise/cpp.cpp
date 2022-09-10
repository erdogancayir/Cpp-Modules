#include "iostream"

/*destructerlar bir kez tanımlanır parametre almaz.
class sonlanınca çalışır. ~Student(); 
return 0 'dan çalışır destructer kendi scoop larnın
dışını cıkınca çalısır meslea if den oluştuysa cıkınca 
çalısır cunku o local*/

using namespace std;

class all{
	private:
		string name, sur, id;
	public:
		void	set(string o, string m, string e){
			name = o; sur = m; id = e;
		}
		void	dp(); // üye func.
		all(); // constructer parametresiz
		~all();	// destructer
		all(const all &oth); // copy constructer

};

all::~all(){ // desructer
	cout << "worked destructer" << endl;
}

all::all() //consructer
{
	name = "kocalei";
	sur = "gebze";
	id = "11";
}

all::all(const all &oth) // copy constructer
{
	cout << "copy constructer worked" << endl;
	name = oth.name;
	sur = oth.sur;
	id = oth.id;
}

void	all::dp() // function
{
	cout << name << endl << sur << endl<< id << endl;
}

int main()
{
	all no;
	no.dp();
	cout << "------------" << endl;
	all yes[5];
	if (true)
	{
		all neww; // bunun destructırı local oldugu
			//icin if 'den çıkınca biter.
	}
	cout << "neew" << endl;
	cout << "-------------" << endl;
	all copy_constructer(no); // no tipinin aynisinda yeni all sınıfı yaptık. // copy constructer.
	copy_constructer.dp();
	cout << "--------------" << endl;
	return (0);
}