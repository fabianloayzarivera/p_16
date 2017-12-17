#include "stdafx.h"
#include "Com.h"

CCom::CCom(int com, const char * mac, const char* dev) {
	comNumber = com;
	macAddress = mac;
	deviceName = dev;
}
CCom::~CCom() {}
bool CCom::openStream() {
	printf("Opening COM Stream on COM #: %d with MAC Add: %s And name: %s\n", comNumber, macAddress,deviceName);
	return true;
}
bool CCom::closeStream() {
	printf("Closing COM Stream on COM #: %d\n", comNumber);
	return true;
}
bool CCom::readFromStream() {
	printf("Reading From COM Stream on COM #: %d with MAC Add: %s \n", comNumber, macAddress);
	return true;
}
bool CCom::writeToStream() {
	printf("Writing To COM Stream on COM #: %d with MAC Add: %s \n", comNumber, macAddress);
	return true;
}