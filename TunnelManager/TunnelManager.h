/*
 * TunnelManager.h
 *
 *  Created on: Sep 26, 2013
 *      Author: chris
 */

#ifndef TUNNELMANAGER_H_
#define TUNNELMANAGER_H_
#define MSG_SIZE 20
#define SHARED_MEM_SIZE 16





class TunnelManager {
public:
	static const long int TO_NORTH = 1;
	static const long int TO_SOUTH = 2;

	TunnelManager(int  messageQueueID);
	virtual ~TunnelManager();
	void run();

	private:
	int sharedMemoryID;
	int  messageQueueID ;
	long currentDirection;
	//TODO SHARED MEMORY
	int inTunnel;

	void alignToSharedMemory();
	void sendSignal(int pid);



};




#endif /* TUNNELMANAGER_H_ */
