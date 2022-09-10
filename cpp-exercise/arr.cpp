#include "arr.hpp"

int main()
{
	arr mainarr(3);
	mainarr.additem(5);
	mainarr.additem(6);
	mainarr.additem(99);
	mainarr.additem(8);
	mainarr.additem(99);
	mainarr.additem(3);
	mainarr.printitems();
	/* mainarr.removeindex(3); */
	mainarr.removeitem(99);
	mainarr.printitems();
}
