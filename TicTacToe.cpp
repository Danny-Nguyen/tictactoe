#include <iostream>

class TicTacToe {
    public:
        TicTacToe() {
            turn_count = 0;
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
        void GetPlayerChoice() {
            char Player;
            char input;
            std::cout << "Please enter a position to place your move (1-9)." << std::endl;
            std::cin >> input;

            if (turn_count % 2 == 0) {
                Player = 'X';
            }

            else {
                Player = 'O';
            }
            std::cout << Player << std::endl;
            switch(input) {
                case '1': 
                    arr_[0][0] = Player;
                    break;
                case '2': 
                    arr_[0][1] = Player;
                    break;
                case '3': 
                    arr_[0][2] = Player;
                    break;
                case '4': 
                    arr_[1][0] = Player;
                    break;
                case '5': 
                    arr_[1][1] = Player;
                    break;
                case '6': 
                    arr_[1][2] = Player;
                    break;
                case '7': 
                    arr_[2][0] = Player;
                    break;
                case '8': 
                    arr_[2][1] = Player;
                    break;
                case '9': 
                    arr_[2][2] = Player;
                    break;
            }
            DisplayBoard();
            turn_count ++;
        }
    private:
        char arr_[3][3];
        int turn_count;
};

int main() {
    TicTacToe Game;
    Game.CreateBoard();
    Game.DisplayBoard();
    
    for (int i = 0; i < 9; i++) {
        Game.GetPlayerChoice();
    }
}