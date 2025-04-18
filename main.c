#include "bibfind_system.h"
int bibfind_system::key_counter = 0;
int main()
{
	bibfind_system bs;
	bibfind_system::action ac = bibfind_system::create;
	bs.bibentry(ac);
	exit(0);
}
