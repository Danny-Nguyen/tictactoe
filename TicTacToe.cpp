#include <iostream>

class TicTacToe {
    public:
        TicTacToe() {
            for (int i = 0; i < 9; i++) {
                arr_[i / 3][i % 3] = '1' + i;
            }
        }
        void CreateBoard() {

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    std::cout << arr_[i][j] << " ";
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
}