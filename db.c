#include "db.h"

void db::db_add(int key, const std::string& author)
{
	auto p = std::make_pair(key, author);
	storage.insert(p);
}

int db::db_find(const std::string& author)
{
	auto iter = storage.cbegin();
	while (iter != storage.cend())
	{
		if (iter->second == author)
			return iter->first;
		iter++;
	}
	return -1;
}

void db::db_update(int key, const std::string& author)
{

}
