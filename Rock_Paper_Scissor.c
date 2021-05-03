#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int game(char you, char computer)
{
	// If both the user and computer
	// has chose the same thing
	if (you == computer)
		return -1;

	// If user's choice is stone and
	// computer's choice is paper
	else if (you == 's' && computer == 'p')
		return 0;

	// If user's choice is paper and
	// computer's choice is stone
	else if (you == 'p' && computer == 's') 
        return 1;

	// If user's choice is stone and
	// computer's choice is scissor
	else if (you == 's' && computer == 'z')
		return 1;

	// If user's choice is scissor and
	// computer's choice is stone
	else if (you == 'z' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	else if (you == 'p' && computer == 'z')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'z' && computer == 'p')
		return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    char name,you,computer,result;

    // Chooses the random number
	// every time
	srand(time(0));

	// Make the random number less
	// than 100, divided it by 100
	n = rand() % 100;

    if (n < 33)

		// s is denoting Stone
		computer = 's';

	else if (n > 33 && n < 66)

		// p is denoting Paper
		computer = 'p';

	else
	
        // z is denoting Scissor
		computer = 'z';
    

    // printf("Hellow sir/mam please enter your name: ");
    // scanf("%s",&name);

    printf("\nHello sir, Please make a choice s for stone p for paper or z for scissor: ");
    scanf("%c",&you);

    result = game(you, computer);

	if (result == -1) 
    {
		printf("\nGame Draw!\n");
	}
	else if (result == 1) 
    {
		printf("\nWow! You have won the game!\n");
    }
	else printf("\nOh! You have lost the game!\n");

	printf("\nYou choose : %c and Computer choose : %c\n",you, computer);

    return 0;
}
