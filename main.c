#include "hotel.h"

/**
 * main - Entry point of the program
 *
 * This function executes all the necessary functions
 * for the HotelHub program.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int choice;

	landingPage();
	initializeRooms();

	do {
		printf("\n==================== HotelHub ====================\n");
		printf("1. Display Rooms\n");
		printf("2. Reserve Room\n");
		printf("3. Free Room\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 0:
				printf("Thank you for using HotelHub. Goodbye!\n");
			break;
			case 1:
				displayRooms();
			break;
			case 2:
				reserveRoom();
			break;
			case 3:
				freeRoom();
			break;
			default:
				printf("Invalid choice! Please try again.\n");
			break;
		}
	} while (choice != 0);

	return (0);
}
