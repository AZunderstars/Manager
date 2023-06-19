#include "Library.hh"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.add_student_member("0", "std1");
	ut_lib.add_book("book1", 2);
	ut_lib.borrow("std1", "book1");
	ut_lib.time_pass(1);
	ut_lib.extend("std1", "book1");
	ut_lib.time_pass(100);
	ut_lib.extend("std1", "book1");
	return 0;
}
