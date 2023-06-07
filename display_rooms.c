#include "hotel.h"

/**
 * displayRooms - Displays the rooms
 */

Room hotelRooms[MAX_ROOMS];

void displayRooms(void)
{
	int i;

	printf("Room Number\tGuest Name\tOccupied\n");
	for (i = 0; i < MAX_ROOMS; i++)
	{
		printf("%d\t\t%s\t\t%s\n", hotelRooms[i].roomNumber, hotelRooms[i].guestName,
		hotelRooms[i].isOccupied ? "Yes" : "No");
	}
}
