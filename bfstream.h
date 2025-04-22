#pragma once
#ifndef BFSTREAM_H
#define BFSTREAM_H


#include <fstream>
#include <iostream>

using namespace std;

class bfstream : public fstream
{
private:
	string filePath;
public:
	bfstream() : fstream() {}
	bfstream(const char* path, ios::openmode mode = ios::in | ios::out) : fstream(path, mode), filePath(path) {}
	bfstream(const string& path, ios::openmode mode = ios::in | ios::out) : fstream(path.c_str(), mode), filePath(path) {}
	void open(const char* path, ios::openmode mode = ios::in | ios::out);
	void open(const string& path, ios::openmode mode = ios::in | ios::out);
	void reopen(const char* path, ios::openmode mode = ios::in | ios::out);
	void reopen(const string& path, ios::openmode mode = ios::in | ios::out);
	string getpath();
	void clear();
	void close();
};
#endif // !BFSTREAM_H
