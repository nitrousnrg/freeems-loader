/*
 * FreeEMS_LoaderComms.h
 *
 *
 *  Created on: Oct 29, 2010
 *      Author: seank
 */

#ifndef FREEEMS_LOADERCOMMS_H_
#define FREEEMS_LOADERCOMMS_H_

#include "freeems_loader_types.h"

#define BUFF_SIZE	4096

class FreeEMS_LoaderComms {
public:
	FreeEMS_LoaderComms();

	int serialConnect(serialComSettings *settings);
	int initPort(int fd, serialComSettings *settings);
	int readBytes(char *buffer, int numBytes);

	virtual ~FreeEMS_LoaderComms();
};

#endif /* FREEEMS_LOADERCOMMS_H_ */
