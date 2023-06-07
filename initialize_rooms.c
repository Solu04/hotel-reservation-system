#include "hotel.h"

/**
 * initializeRooms - Initializes the hotel rooms
 *
 * This function initializes the hotel rooms by setting each room's
 * number and occupancy status.
 */

Room hotelRooms[MAX_ROOMS];

void initializeRooms(void)
{
	int i;

	for (i = 0; i < MAX_ROOMS; i++)
	{
		hotelRooms[i].roomNumber = i + 1;
		hotelRooms[i].isOccupied = 0;
	}
}
