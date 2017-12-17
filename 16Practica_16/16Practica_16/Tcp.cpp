#include "stdafx.h"
#include "Tcp.h"

CTcp::CTcp(const char* i, bool keep, const char* h) {
	ip = i;
	keepAlive = keep;
	header = h;
}
CTcp::~CTcp() {}
bool CTcp::openStream() {
	printf("Opening TCP Stream on IP: %s Header: %s\n", ip, header);
	return true;
}
bool CTcp::closeStream() {
	printf("Closing TCP Stream on IP: %s\n", ip);
	return true;
}
bool CTcp::readFromStream() {
	printf("Reading From TCP Stream on IP: %s Header: %s\n", ip, header);
	return true;
}
bool CTcp::writeToStream() {
	printf("Writing To TCP Stream on IP: %s Header: %s\n", ip, header);
	return true;
}
