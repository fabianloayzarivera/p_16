// 16Practica_16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stream.h"
#include "File.h"
#include "Com.h"
#include "Tcp.h"


int main()
{
	CFile* fileStream = new CFile("C:/Fabian/file.xml", false, 234523, "at+");
	CCom*  comStream = new CCom(6, "AD:78:SE:65:AB", "Credit Card Reader");
	CTcp*  tcpStream = new CTcp("192.168.1.12", true, "Content-Type JSON");

	CStream* streamConnections[] = {fileStream, comStream, tcpStream};

	for each (CStream* stream in streamConnections)
	{
		if (stream) {
			stream->openStream();
			stream->readFromStream();
			stream->writeToStream();
			stream->closeStream();
			printf("==========================================================\n\n\n");
		}
	}

	getchar();
    return 0;
}

