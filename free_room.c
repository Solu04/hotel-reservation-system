#include "hotel.h"

/**
 * freeRoom - Cancels room reservation
 * This function cancels the room reservation number that the user entered
 */

Room hotelRooms[MAX_ROOMS];

void freeRoom(void)
{
	int roomNumber;

	printf("Enter room number: ");
	scanf("%d", &roomNumber);

	if (roomNumber < 1 || roomNumber > MAX_ROOMS)
	{
		printf("Invalid room number!\n");
		return;
	}

	if (!hotelRooms[roomNumber - 1].isOccupied)
	{
		printf("Room is already vacant!\n");
		return;
	}

	hotelRooms[roomNumber - 1].isOccupied = 0;
	strcpy(hotelRooms[roomNumber - 1].guestName, "");
	printf("Room %d is now vacant.\n", roomNumber);
}
