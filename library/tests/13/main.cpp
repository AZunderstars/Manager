#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.time_pass(10);
	ut_lib.add_student_member("0", "std1");
	ut_lib.add_prof_member("prof1");

	ut_lib.add_book("book1", 1);
	ut_lib.add_book("book2", 1);
	ut_lib.add_book("book3", 1);
	ut_lib.add_book("book4", 1);

	ut_lib.borrow("std1", "book1");
	ut_lib.time_pass(1);

	ut_lib.borrow("prof1", "book2");
	ut_lib.borrow("prof1", "book3");
	ut_lib.borrow("std1", "book4");
	ut_lib.time_pass(15);

	ut_lib.return_document("std1", "book1");
	ut_lib.return_document("prof1", "book2");
	ut_lib.time_pass(30);

	cout << ut_lib.get_total_penalty("std1") << endl;
	cout << ut_lib.get_total_penalty("prof1") << endl;

	return 0;
}