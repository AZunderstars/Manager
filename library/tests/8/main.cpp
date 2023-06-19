#include "Library.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.add_prof_member("prof1");
	ut_lib.add_magazine("magazine1", 1000, 10, 10);
	ut_lib.return_document("prof1", "magazine1");
	return 0;
}
