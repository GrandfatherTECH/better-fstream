#include "bfstream.h"
#include <iostream>
using namespace std;

void bfstream::open(const char* path, ios::openmode mode)
{
	this->fstream::open(path, mode);
	if (this->fstream::is_open())
	{
		this->filePath = path;
	}
}

void bfstream::open(const string& path, ios::openmode mode)
{
	this->fstream::open(path, mode);
	if (this->fstream::is_open())
	{
		this->filePath = path;
	}
}

void bfstream::reopen(const char* path, ios::openmode mode)
{
	this->close();
	this->open(path, mode);
}

void bfstream::reopen(const string& path, ios::openmode mode)
{
	this->close();
	this->open(path, mode);
}

string bfstream::getpath()
{
	return this->filePath;
}

void bfstream::clear()
{
	this->fstream::close();
	this->fstream::open(this->filePath, ios::out | ios::in | ios::trunc);
}

void bfstream::close()
{
	this->fstream::close();
	this->filePath = "";
}