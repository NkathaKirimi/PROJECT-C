NAME;MERCY NKATHA
BSCIT-05-0047/2024


#include <iostream>
#include <string>

using namespace std;

// Define Player structure
struct Player {
    string name;
    int score;
    int level;
};

// Function to display player information
void displayPlayer(const Player& p) {
    cout << "Player Name: " << p.name << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
    cout << "---------------------------" << endl;
}

int main() {
    // Create two Player records with hardcoded values
    Player player1 = {"Alice", 1500, 5};
    Player player2 = {"Bob", 2000, 7};
// Display player details
    cout << "Hardcoded Player Details:" << endl;
    displayPlayer(player1);
    displayPlayer(player2);

    // Modify to allow user input
    Player userPlayer;
    cout << "Enter Player Name: ";
    getline(cin, userPlayer.name);
    cout << "Enter Score: ";
    cin >> userPlayer.score;
    cout << "Enter Level: ";
    cin >> userPlayer.level;

    // Display user inputted player details
    cout << "\nUser Entered Player Details:" << endl;
    displayPlayer(userPlayer);

    return 0;
}
