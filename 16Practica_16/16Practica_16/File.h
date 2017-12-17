#pragma once
#include "Stream.h"

class CFile : public CStream{
private:
	const char * filePath;
	bool relative;
	double sizeInBytes;
	const char * mode;
public:
	CFile(const char* path, bool rel, double size, const char* m);
	~CFile();
	bool openStream() ;
	bool closeStream() ;
	bool readFromStream() ;
	bool writeToStream() ;

};