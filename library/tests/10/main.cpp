#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.time_pass(100);
	ut_lib.add_student_member("0", "dante");
	ut_lib.add_prof_member("ramtin");

	ut_lib.add_book("book1", 2);
	ut_lib.time_pass(10);

	ut_lib.borrow("dante", "book1");
	ut_lib.time_pass(5);
	ut_lib.borrow("ramtin", "book1");
	ut_lib.time_pass(10);

	ut_lib.extend("ramtin", "book1");
	ut_lib.time_pass(1);

	ut_lib.return_document("dante", "book1");
	ut_lib.return_document("ramtin", "book1");
	ut_lib.time_pass(100);

	ut_lib.borrow("ramtin", "book1");
	ut_lib.time_pass(5);
	ut_lib.borrow("dante", "book1");
	ut_lib.time_pass(10);
	cout << ut_lib.get_total_penalty("dante") << endl;
	cout << ut_lib.get_total_penalty("ramtin") << endl;

	return 0;
}