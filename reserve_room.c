#include "hotel.h"

/**
 * reserveRoom - Reserves room number entered by user
 * This function reserves a room number for a user
 * It also checks if the room is available and
 * If the room number entered is invalid
 */

Room hotelRooms[MAX_ROOMS];

void reserveRoom(void)
{
	int roomNumber;
	char guestName[50];

	printf("Enter room number: ");
	scanf("%d", &roomNumber);

	if (roomNumber < 1 || roomNumber > MAX_ROOMS)
	{
		printf("Invalid room number!\n");
		return;
	}

	if (hotelRooms[roomNumber - 1].isOccupied)
	{
		printf("Room already occupied!\n");
	return;
	}

	printf("Enter guest name: ");
	scanf(" %[^\n]", guestName);

	hotelRooms[roomNumber - 1].isOccupied = 1;
	strcpy(hotelRooms[roomNumber - 1].guestName, guestName);

	printf("Room %d reserved for %s.\n", roomNumber, guestName);
}
