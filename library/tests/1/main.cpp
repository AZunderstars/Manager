#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	vector<string> titles;
	ut_lib.time_pass(10);
	ut_lib.add_student_member("0", "std1");
	ut_lib.add_reference("ref1", 3000);
	ut_lib.borrow("std1", "ref1");
	ut_lib.extend("std1", "ref1");
	return 0;
}
