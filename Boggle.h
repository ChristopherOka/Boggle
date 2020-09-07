#include <iostream>
#include <windows.h>
#include <time.h>
void letters_four() {

    std::cout << "|";
    for (int i = 0; i < 4; i++) {
        int letter = (rand() % 26);
        int modifier = (rand() % 4);
        if (letter == 0) {
            std::cout << " A |";
        }
        if (letter == 1) {
            std::cout << " B |";
        }
        if (letter == 2) {
            std::cout << " C |";
        }
        if (letter == 3) {
            std::cout << " D |";
        }
        if (letter == 4) {
            std::cout << " E |";
        }
        if (letter == 5) {
            std::cout << " F |";
        }
        if (letter == 6) {
            std::cout << " G |";
        }
        if (letter == 7) {
            std::cout << " H |";
        }
        if (letter == 8) {
            std::cout << " I |";
        }
        if (letter == 9) {
            std::cout << " J |";
        }
        if (letter == 10) {
            std::cout << " K |";
        }
        if (letter == 11) {
            std::cout << " L |";
        }
        if (letter == 12) {
            std::cout << " M |";
        }
        if (letter == 13) {
            std::cout << " N |";
        }
        if (letter == 14) {
            std::cout << " O |";
        }
        if (letter == 15) {
            std::cout << " P |";
        }
        if (letter == 16 && modifier < 1) {
            std::cout << " Qu|";
        }
        else if (letter == 16 && modifier >= 1) {
            std::cout << " E |";
        }
        if (letter == 17) {
            std::cout << " R |";
        }
        if (letter == 18) {
            std::cout << " S |";
        }
        if (letter == 19) {
            std::cout << " T |";
        }
        if (letter == 20) {
            std::cout << " U |";
        }
        if (letter == 21) {
            std::cout << " V |";
        }
        if (letter == 22) {
            std::cout << " W |";
        }
        if (letter == 23 && modifier > 1) {
            std::cout << " X |";
        }
        else if (letter == 23 && modifier <= 1) {
            std::cout << " A |";
        }
        if (letter == 24 && modifier < 2) {
            std::cout << " Y |";
        }
        else if (letter == 24 && modifier >= 2) {
            std::cout << " I |";
        }
        if (letter == 25 && modifier < 1) {
            std::cout << " Z |";
        }
        else if (letter == 25 && modifier >= 1) {
            std::cout << " O |";
        }
        else {
            std::cout << "";
        }
    }
    std::cout << "\n";
}

void letters_six() {
    std::cout << "|";
    for (int i = 0; i < 6; i++) {
        int letter = (rand() % 26);
        int modifier = (rand() % 4);
        if (letter == 0) {
            std::cout << " A |";
        }
        if (letter == 1) {
            std::cout << " B |";
        }
        if (letter == 2) {
            std::cout << " C |";
        }
        if (letter == 3) {
            std::cout << " D |";
        }
        if (letter == 4) {
            std::cout << " E |";
        }
        if (letter == 5) {
            std::cout << " F |";
        }
        if (letter == 6) {
            std::cout << " G |";
        }
        if (letter == 7) {
            std::cout << " H |";
        }
        if (letter == 8) {
            std::cout << " I |";
        }
        if (letter == 9) {
            std::cout << " J |";
        }
        if (letter == 10) {
            std::cout << " K |";
        }
        if (letter == 11) {
            std::cout << " L |";
        }
        if (letter == 12) {
            std::cout << " M |";
        }
        if (letter == 13) {
            std::cout << " N |";
        }
        if (letter == 14) {
            std::cout << " O |";
        }
        if (letter == 15) {
            std::cout << " P |";
        }
        if (letter == 16 && modifier < 1) {
            std::cout << " Qu|";
        }
        else if (letter == 16 && modifier >= 1) {
            std::cout << " E |";
        }
        if (letter == 17) {
            std::cout << " R |";
        }
        if (letter == 18) {
            std::cout << " S |";
        }
        if (letter == 19) {
            std::cout << " T |";
        }
        if (letter == 20) {
            std::cout << " U |";
        }
        if (letter == 21) {
            std::cout << " V |";
        }
        if (letter == 22) {
            std::cout << " W |";
        }
        if (letter == 23 && modifier > 1) {
            std::cout << " X |";
        }
        else if (letter == 23 && modifier <= 1) {
            std::cout << " A |";
        }
        if (letter == 24 && modifier < 2) {
            std::cout << " Y |";
        }
        else if (letter == 24 && modifier >= 2) {
            std::cout << " I |";
        }
        if (letter == 25 && modifier < 1) {
            std::cout << " Z |";
        }
        else if (letter == 25 && modifier >= 1) {
            std::cout << " O |";
        }
        else {
            std::cout << "";
        }
    }
    std::cout << "\n";
}

void four_by_four() {
    srand((unsigned)time(0));
    int letter;
    int modifier;
    std::cout << "_________________\n";
    letters_four();
    letters_four();
    letters_four();
    letters_four();
}
void six_by_six() {
    srand((unsigned)time(0));
    int letter;
    int modifier;
    std::cout << "________________________\n";
    letters_six();
    letters_six();
    letters_six();
    letters_six();
    letters_six();
    letters_six();
}

int timer;
int time_control() {

    std::cout << "How long do you need to think?\n" << "1. 1:00\n" << "2. 2:00\n" << "3. 3:00\n" << "4. 4:00\n";
    std::cin >> timer;

    std::cout << "Ready?\n";
    Sleep(2000);
    std::cout << "3\n";
    Sleep(1000);
    std::cout << "2\n";
    Sleep(1000);
    std::cout << "1\n";
    Sleep(1000);
    std::cout << "BOGGLE!!!\n";

    return timer;

}

void time() {

    if (timer == 1) {
        Sleep(30000);
        std::cout << "30 seconds left!\n";
        Sleep(30000);
        std::cout << "TIME!\n";
    }
    else if (timer == 2) {
        Sleep(60000);
        std::cout << "1 minute left!\n";
        Sleep(60000);
        std::cout << "TIME!\n";
    }
    else if (timer == 3) {
        Sleep(90000);
        std::cout << "1.5 minutes left!\n";
        Sleep(90000);
        std::cout << "TIME!";
    }
    else if (timer == 4) {
        Sleep(120000);
        std::cout << "2 minutes left!\n";
        Sleep(120000);
        std::cout << "TIME!";
    }
}
int repeat_result = 1;
int repeat() {
    std::cout << "You wanna play again?\n" << "1. Yes\n" << "2. No\n";
    std::cin >> repeat_result;
    return repeat_result;
}
