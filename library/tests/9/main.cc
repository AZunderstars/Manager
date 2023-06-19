#include "Library.hh"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library ut_lib;
	ut_lib.add_prof_member("prof1");
	ut_lib.add_book("book1", 10);
	ut_lib.extend("prof1", "book1");
	return 0;
}
