#include <iostream>

class TicTacToe {
    public:
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
    private:
        char arr_[3][3];
};

int main() {
    TicTacToe Game;
    Game.CreateBoard();
    Game.DisplayBoard();
}