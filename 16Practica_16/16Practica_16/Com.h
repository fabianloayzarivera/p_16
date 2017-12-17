#pragma once
#include "Stream.h"

class CCom : public CStream {
private:
	int comNumber;
	const char* macAddress;
	const char* deviceName;
public:
	CCom(int com, const char * mac, const char* dev);
	~CCom();
	bool openStream();
	bool closeStream();
	bool readFromStream();
	bool writeToStream();
};