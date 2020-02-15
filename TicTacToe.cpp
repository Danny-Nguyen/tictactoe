#include <iostream>
#include <string> 

class TicTacToe {
    public:
        TicTacToe() {
            turn_count_ = 0;
        }
        void CreateBoard() {
            for (int i = 0; i < 9; i++) { // in matrix of 9 values give each square a unique value to assign an x or o to.
                arr_[i / 3][i % 3] = '1' + i; // adding char to int type casts the char to an int resulting in no type error
            }
        }
        void DisplayBoard() {
            for (int i = 0; i < 3; i++) { // loops through each row and column
                for (int j = 0; j < 3 ; j ++) {
                    std::cout << "[" << arr_[i][j] << "] "; // encapsulates each value in a square with brackets simulating a board
                }
                std::cout << std::endl;
            }
        }
        void GetPlayerChoice() { // prompts user for a square for their turn, uses turn count to determine X/O turn
            char choice;
            std::cout << "Please select a square (1-9) for your move" << std::endl;
            std::cin >> choice;
            char player_type;
            if (turn_count_ % 2 == 0) {
                player_type = 'X';
            }
            else {
                player_type = 'O';
            }
            switch (choice)
            {
            case '1': // changes corresponding square to a player type
                PlaceMarker(0,0,player_type);
                break;
            case '2':
                PlaceMarker(0,1,player_type);
                break;
            case '3':
                PlaceMarker(0,2,player_type);
                break;
            case '4':
                PlaceMarker(1,0,player_type);
                break;
            case '5':
                PlaceMarker(1,1,player_type);
                break;
            case '6':
                PlaceMarker(1,2,player_type);
                break;
            case '7':
                PlaceMarker(2,0,player_type);
                break;
            case '8':
                PlaceMarker(2,1,player_type);
                break;
            case '9':
                PlaceMarker(2,2,player_type);
                break;
            default:
                break;
            }
            turn_count_++;
        }
        void PlaceMarker(int i, int j, char marker) { // function to update a square based on player choice
            arr_[i][j] = marker;
        }
    private:
        char arr_[3][3];
        int turn_count_;
};

int main() {
    TicTacToe Game;
    Game.CreateBoard();
    Game.DisplayBoard();
    for (int i = 0; i < 9; i++)
    {
        Game.GetPlayerChoice();
        Game.DisplayBoard();
    }
}