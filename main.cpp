#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));  // 랜덤 시드 설정
    int target = std::rand() % 100 + 1;  // 1부터 100 사이의 숫자 생성
    int guess;
    int tries = 0;

    std::cout << "Guess the number between 1 and 100!" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > target) {
            std::cout << "Too high!" << std::endl;
        } else if (guess < target) {
            std::cout << "Too low!" << std::endl;
        } else {
            std::cout << "Congratulations! You found the number in " << tries << " tries!" << std::endl;
        }
    } while (guess != target);

    return 0;
}
