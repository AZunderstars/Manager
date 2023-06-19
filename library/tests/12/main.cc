#include "Library.hh"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	vector<string> titles;
	ut_lib.time_pass(10);
	ut_lib.add_student_member("0", "std1");
	ut_lib.add_prof_member("prof1");

	ut_lib.add_book("book1", 1);
	ut_lib.borrow("std1", "book1");
	ut_lib.borrow("prof1", "book1");

	return 0;
}
