#ifndef _HOTEL_
#define _HOTEL_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ROOMS 10

typedef struct
{
	int roomNumber;
	char guestName[50];
	int isOccupied;
} Room;

void displayHeader(void);
int landingPage(void);
void displayHeader(void);
void displayTime(void);
void displayAuthors(void);
void promptToContinue(void);
void clearConsole(void);
void freeRoom(void);
void initializeRooms(void);
void reserveRoom(void);
void displayRooms(void);

#endif
