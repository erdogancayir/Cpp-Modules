#include "iostream"

using namespace std;

class yes
{
private:                                    // sadece .h içesinde erişilebilir.
        string  name, sur, id;
public:                                                   //main den veya diğer dosyalardan erişilebilir.
        void    set(string o, string m, string e){
                name = o; sur = m; id = e;
        }
        void    dp(){
                cout << name << endl << sur << endl << id << endl;
        }
        yes();
        yes(string, string, string);
};

yes::yes()  // parametresiz sınıf tanımları içic
{
        name = "kocaeli";
        sur = "gebze";
        id = "11";
}

yes::yes(string jname, string jsurname, string jid) // parametreli sınıf tanımları için
{
    name = jname;
    sur = jsurname;
    id = jid;
}

int main()
{
        yes     no;
        yes     no2("erdo", "cayir", "19071"); // parametrli sınıf
        yes     ok[3] -> 3 kere parametresiz olan calisir tanimlayinca

        no.dp();
        no.set("omer", "yumusak", "10");
        no.dp();
        no2.dp();
        
}   