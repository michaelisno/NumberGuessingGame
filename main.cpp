#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "Number Guessing Game:\nGuess numbers between 1-10\n\nEach player has 4 guesses\n";

	std::srand(std::time(0));
	int playerOneRandomNumber = std::rand() % 10 + 1;
	int playerTwoRandomNumber = std::rand() % 10 + 1;

	int guessCount = 8;
	bool isPlayerOne = true;

	while (true)
	{
		if (guessCount == 0)
		{
			std::cout << "Game Ended, No One guessed correctly.\n";
			break;
		}

		int currentGuess;

		if (isPlayerOne)
		{
			std::cout << "Player One Guess:\n";
			std::cin >> currentGuess;

			if (currentGuess == playerOneRandomNumber)
			{
				std::cout << "Correct Guess!\nPlayer One has won the game!";
				break;
			}
			else
			{
				std::cout << "Incorrect Guess!\n";
				guessCount -= 1;
				isPlayerOne = false;
			}
		}
		else
		{
			std::cout << "Player Two Guess:\n";
			std::cin >> currentGuess;

			if (currentGuess == playerTwoRandomNumber)
			{
				std::cout << "Correct Guess!\nPlayer Two has won the game!";
				break;
			}
			else
			{
				std::cout << "Incorrect Guess!\n";
				guessCount -= 1;
				isPlayerOne = true;
			}
		}	
	}

	return 0;
}