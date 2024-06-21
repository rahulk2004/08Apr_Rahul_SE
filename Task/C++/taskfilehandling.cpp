#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <string>

using namespace std;

// Class to encapsulate the game logic
class RockPaperScissors {
public:
    // Constructor to initialize game settings
    RockPaperScissors() {
        // Accept the player's name
        cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "                 NAME" << endl;
        cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "Enter Your Name: ";
        cin >> playerName;
        cout << "Welcome, " << playerName << ", to the Rock Paper Scissors Game!" << endl;
    }

    // Function to start the game
    void startGame() {
        // Accept the number of rounds to play
        cout << "\n*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "                 ROUNDS" << endl;
        cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << playerName << ", how many rounds do you want to play? : ";
        cin >> totalRounds;

        // Initialize scores
        playerScore = 0;
        computerScore = 0;
        currentRound = 1;

        // Loop through each round
        while (currentRound <= totalRounds) {
            playRound();
            currentRound++;
        }

        // Display the final result
        displayFinalResult();
    }

private:
    string playerName;
    int totalRounds;
    int currentRound;
    int playerScore;
    int computerScore;

    // Function to display the menu
    void displayMenu() {
        cout << "\n1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
    }

    // Function to get the computer's choice
    int getComputerChoice() {
        return (rand() % 3) + 1;  // Generate a random choice between 1 and 3
    }

    // Function to display the choices
    void displayChoices(int playerChoice, int computerChoice) {
        cout << "\n" << playerName << " chose: " << choiceToString(playerChoice) << endl;
        cout << "Computer chose: " << choiceToString(computerChoice) << endl;
    }

    // Function to convert choice number to string
    string choiceToString(int choice) {
        switch (choice) {
            case 1: return "Rock";
            case 2: return "Paper";
            case 3: return "Scissors";
            default: return "Invalid choice";
        }
    }

    // Function to determine and display the winner of a round
    void determineRoundWinner(int playerChoice, int computerChoice) {
        if (playerChoice == computerChoice) {
            cout << "\nIt's a draw!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "\n" << playerName << " wins this round!" << endl;
            playerScore++;
        } else {
            cout << "\nComputer wins this round!" << endl;
            computerScore++;
        }
    }

    // Function to play a single round
    void playRound() {
        int playerChoice;
        int computerChoice;

        cout << "\n*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "                 GAME" << endl;
        cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "\nRound No: " << currentRound << "/" << totalRounds << endl;
        cout << "* " << playerName << "'s Score = " << playerScore << endl;
        cout << "* Computer's Score = " << computerScore << endl;

        // Display the menu
        displayMenu();

        // Get the player's choice
        do {
            cout << "-> Select your choice: ";
            cin >> playerChoice;
        } while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3);  // Ensure valid input

        // Get the computer's choice
        computerChoice = getComputerChoice();

        // Display choices
        displayChoices(playerChoice, computerChoice);

        // Determine and display the winner of the round
        determineRoundWinner(playerChoice, computerChoice);
    }

    // Function to display the final result of the game
    void displayFinalResult() {
        cout << "\n*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << "                 FINAL SCORE" << endl;
        cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
        cout << playerName << "'s Score: " << playerScore << endl;
        cout << "Computer's Score: " << computerScore << endl;

        if (playerScore == computerScore) {
            cout << "\nThe game is a draw!" << endl;
        } else if (playerScore > computerScore) {
            cout << "\nCongratulations, " << playerName << ", you won the game!" << endl;
        } else {
            cout << "\nSorry, " << playerName << ", the computer won the game!" << endl;
        }
    }
};

int main() {
    // Seed the random number generator
    srand(time(0));

    // Create a game object and start the game
    RockPaperScissors game;
    game.startGame();

    return 0;
}

