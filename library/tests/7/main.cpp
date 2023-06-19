#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	vector<string> titles;
	ut_lib.add_prof_member("prof1");

	ut_lib.add_magazine("magazine1", 1000, 10, 10);
	ut_lib.add_magazine("magazine2", 2000, 10, 10);
	ut_lib.add_book("book1", 10);
	ut_lib.add_book("book2", 10);
	ut_lib.add_reference("ref1", 10);
	ut_lib.add_reference("ref2", 10);

	ut_lib.borrow("prof1", "book1");
	ut_lib.borrow("prof1", "ref1");
	ut_lib.borrow("prof1", "magazine1");
	ut_lib.time_pass(1);
	ut_lib.extend("prof1", "book1");
	ut_lib.borrow("prof1", "book2");
	ut_lib.borrow("prof1", "ref2");
	ut_lib.borrow("prof1", "magazine2");
	return 0;
}