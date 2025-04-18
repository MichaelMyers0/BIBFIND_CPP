#include "db.h"

void db::db_add(int key, const std::string& author)
{
	auto p = std::make_pair(key, author);
	storage.insert(p);
}

void db::db_find(int key)
{

}

void db::db_update(int key, const std::string& author)
{

}
