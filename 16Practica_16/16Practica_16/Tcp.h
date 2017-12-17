#pragma once
#include "Stream.h"

class CTcp : public CStream {
private:
	const char* ip;
	bool keepAlive;
	const char* header;
	
public:
	CTcp(const char* i, bool keep, const char* h);
	~CTcp();
	bool openStream();
	bool closeStream();
	bool readFromStream();
	bool writeToStream();
};