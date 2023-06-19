#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.add_student_member("0", "std1");
	ut_lib.add_student_member("1", "std2");
	ut_lib.add_student_member("2", "std3");
	ut_lib.add_student_member("3", "std4");

	ut_lib.add_magazine("magazine1", 1000, 10, 10);
	ut_lib.add_magazine("magazine2", 2000, 10, 10);
	ut_lib.add_book("book1", 10);
	ut_lib.add_reference("ref1", 10);

	ut_lib.borrow("std2", "ref1");
	ut_lib.time_pass(10);
	ut_lib.return_document("std2", "ref1");
	ut_lib.time_pass(10);

	ut_lib.borrow("std3", "magazine1");
	ut_lib.borrow("std4", "magazine2");
	ut_lib.time_pass(5);
	cout << ut_lib.get_total_penalty("std1") << endl;
	cout << ut_lib.get_total_penalty("std2") << endl;
	cout << ut_lib.get_total_penalty("std3") << endl;
	cout << ut_lib.get_total_penalty("std4") << endl;

	return 0;
}
