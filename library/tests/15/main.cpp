#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.time_pass(10);
	ut_lib.add_student_member("0", "std1");

	ut_lib.add_reference("ref1", 1);

	ut_lib.borrow("std1", "ref1");
	ut_lib.time_pass(15);
	
	ut_lib.return_document("std1", "ref1");
	ut_lib.time_pass(15);

	ut_lib.borrow("std1", "ref1");
	ut_lib.time_pass(1);
	ut_lib.extend("std1", "ref1");
	ut_lib.extend("std1", "ref1");
	ut_lib.time_pass(30);

	cout << ut_lib.get_total_penalty("std1") << endl;

	return 0;
}