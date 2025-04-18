#ifndef BIBFIND_SYSTEM_H
#define BIBFIND_SYSTEM_H
#include <stdio.h>
#include <stdlib.h>
#include <string>
struct bibfind_entry
{
	std::string author;
	int key;
};
class bibfind_system
{
	enum action {create, modify};
public:
	bibfind_system() = default;	
	void bibentry();
	void bibkey();
	void bibfind();
	void bibupdate();
	~bibfind_system() = default;
};
#endif
