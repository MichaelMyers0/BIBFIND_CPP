#include "bibfind_system.h"

static bibfind_entry ent;

void bibfind_system::bibentry(action ac)
{
	if (ac == create)
	{
		std::getline(std::cin, ent.author);
		auto len = ent.author.length();
		ent.author[len] = 0;
		ent.key = key_counter;
		key_counter++;
		data_base.db_add(ent.key, ent.author);
		return;
	}
}

int bibfind_system::bibkey(const std::string& author)
{
	auto v = data_base.db_find(author);
	return v;
}

void bibfind_system::bibfind()
{
}

void bibfind_system::bibupdate()
{
}
