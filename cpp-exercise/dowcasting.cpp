#include "down.hpp"

int main()
{
	emp *emp1;
	man test("jn", "lşkef,", 222, "ilf");
	emp1 = &test;
	// cout << test.yes() << endl;
	/* emp1->dp(); */ // emp1 upcastig yaptı. bu da sadece base sınıfta olanlara erişir o yuzdden man class a ulaşamadı.

	// bu durumdan kurtulmak için
	man *test2 = (man *)emp1; // man fonksiyonlarına erişmesini sağladık.
	test2->dp(); // artık departmanı da yazdi.
	cout << "------------------" << endl;
	emp1->dp(); // emp 'in ki çalısır man bilgileri ile

	 // NOTT!!
	 /* emp emp("few", "ok", 2324) 
	 	man *test =&emp;
		departmana erişmeye kalkarsan hata alırsın olmaz cunku yok onun türünde.
	 */
	/* 
	emp icin virtual void	dp() olarak tanımlayıncayukarıdaki sorun ortadan kalkacak */
	/* artık emp1->cagirinca test'in dp() si çalışacak. */
	cout << "\b";
}