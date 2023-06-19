#include "Library.hh"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.time_pass(10);
	ut_lib.add_prof_member("prof1");

	ut_lib.add_book("book1", 1);
	ut_lib.add_book("book2", 1);
	ut_lib.add_book("book3", 1);
	ut_lib.add_book("book4", 1);
	ut_lib.add_book("book5", 1);
	ut_lib.add_book("book6", 1);

	ut_lib.borrow("prof1", "book1");
	ut_lib.borrow("prof1", "book2");
	ut_lib.borrow("prof1", "book3");
	ut_lib.borrow("prof1", "book4");
	ut_lib.borrow("prof1", "book5");
	ut_lib.borrow("prof1", "book6");

	return 0;
}
