#include "stdafx.h"
#include "File.h"

CFile::CFile(const char* path, bool rel, double size, const char* m) {
	filePath = path;
	relative = rel;
	sizeInBytes = size;
	mode = m;

}
CFile::~CFile() {}
bool CFile::openStream() {
	printf("Opening File Stream on path: %s with mode: %s \n", filePath, mode);
	return true;
}
bool CFile::closeStream() {
	printf("Closing File Stream on path: %s\n", filePath);
	return true;
}
bool CFile::readFromStream() {
	printf("Reading From File Stream on path: %s with size: %d \n", filePath, sizeInBytes);
	return true;
}
bool CFile::writeToStream() {
	printf("Writing to File Stream on path: %s \n", filePath);
	return true;
}