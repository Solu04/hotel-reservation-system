#include "hotel.h"

/**
 * landingPage - Call to action
 *
 * This function displays the call to action of the
 * hotel reservation system and gives a brief intro.
 *
 * Return: 0 on success
 */

int landingPage(void)
{
	displayHeader();

	displayTime();

	displayAuthors();

	promptToContinue();

	clearConsole();

	return (0);

}


/**
 * displayTime - Display the current date and time
 */

void displayTime(void)
{
	int i = 0;

	time_t currentTime;

	time(&currentTime);

	printf("   --------------------------------------------\n");
	printf("   Date and Time: %s", ctime(&currentTime));
	printf("   --------------------------------------------\n");
}

/**
 * displayAuthors - Display the authors' names
 */

void displayAuthors(void)
{
	printf("   Authors:\n");
	printf("   \033[1mAtaboh Hamza\033[0m\n");
	printf("   \033[1mMaryam Maitambari\033[0m\n\n");
}

/**
 * promptToContinue - Prompt the user to continue
 */

void promptToContinue(void)
{
	printf("Press any key to continue:");
	fflush(stdout);

	/* Clear the input buffer */
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		continue;
}

/**
 * clearConsole - Clear the console screen
 */

void clearConsole(void)
{
	#ifdef _WIN32
		system("cls"); /* For Windows */
	#else
		system("clear"); /* For Linux and macOS */
	#endif
}
