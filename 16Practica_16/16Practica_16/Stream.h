#pragma once

class CStream {
public:	
	virtual bool openStream() = 0;
	virtual bool closeStream() = 0;
	virtual bool readFromStream() = 0;
	virtual bool writeToStream() = 0;
};