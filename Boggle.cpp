#include <iostream>
#include <io.h>
#include "Boggle.h"

int main() {
	int play_boggle;
	std::cout << "Do you wanna Boggle??\n" << "1. Yes\n" << "2. No\n";
	std::cin >> play_boggle;

	if (play_boggle == 1) {
		while (repeat_result == 1) {
			int board_size;
			std::cout << "What size of Boggle board would you like?\n" << "1. 4x4\n" << "2. 6x6\n";
			std::cin >> board_size;

			if (board_size == 1) {
				//4x4 boggle
				time_control();
				four_by_four();
				time();
				Sleep(3000);
				repeat();
			}
			else {
				//6x6 boggle
				time_control();
				six_by_six();
				time();
				Sleep(3000);
				repeat();
			}
		}
	}
	std::cout << "Okay, see you later then\n";
}
