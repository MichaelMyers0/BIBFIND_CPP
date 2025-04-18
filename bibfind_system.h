#ifndef BIBFIND_SYSTEM_H
#define BIBFIND_SYSTEM_H
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "db.h"
struct bibfind_entry
{
	std::string author;
	int key;
};
class bibfind_system
{
	static int key_counter;
	db data_base;
public:
	enum action {create, modify};
	bibfind_system() = default;	
	void bibentry(action ac);
	void bibkey();
	void bibfind();
	void bibupdate();
	~bibfind_system() = default;
};
#endif
