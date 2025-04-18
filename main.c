#include "bibfind_system.h"
int bibfind_system::key_counter = 0;
int main()
{
	bibfind_system bs;
	bibfind_system::action ac = bibfind_system::create;
	bs.bibentry(ac);
	bs.bibentry(ac);
	bs.bibentry(ac);
	auto key = bs.bibkey("Dr Paul Eckman");
	if (key == -1)
		printf("Warning failed to find a key with provided value\n");
	printf("key = %d\n", key);
	exit(0);
}
