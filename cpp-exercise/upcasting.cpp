#include "up.hpp"

int main(){
	emp *emp1;
	man test("jn", "lşkef,", 222, "ilf");
	emp1 = &test;
	//cout << test.yes() << endl;
	emp1->dp();			// emp1 upcastig yaptı. bu da sadece base sınıfta olanlara erişir o yuzdden man class a ulaşamadı.
	test.dp();
}