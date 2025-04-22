#include <iostream>
#include <winsock2.h>
#include <cmath>
#include <vector>
#include "codeoflabs.h"
using namespace std;
HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);

bool reload() {
    char ch;
    cout << "\nВернуться в начало?(y/n): ";
    cin >> ch;
    if (ch == 'y') {   
        return true;
    }
    else if (ch == 'n') {
        return false;
    }
    else {
        cout << "\nВы ввели недопустимый знак! Программа закрыта.";
        return 0;
    }
}

void logo() {
    system("cls");
    SetConsoleTextAttribute(hOUTPUT, 11);
    wstring logo = LR"(
██████╗ ██████╗  ██████╗  ██████╗        ███╗   ███╗███████╗████████╗██╗  ██╗ ██████╗ ██████╗ ███████╗
██╔══██╗██╔══██╗██╔═══██╗██╔════╝        ████╗ ████║██╔════╝╚══██╔══╝██║  ██║██╔═══██╗██╔══██╗██╔════╝
██████╔╝██████╔╝██║   ██║██║  ███╗       ██╔████╔██║█████╗     ██║   ███████║██║   ██║██║  ██║███████╗
██╔═══╝ ██╔══██╗██║   ██║██║   ██║       ██║╚██╔╝██║██╔══╝     ██║   ██╔══██║██║   ██║██║  ██║╚════██║
██║     ██║  ██║╚██████╔╝╚██████╔╝██╗    ██║ ╚═╝ ██║███████╗   ██║   ██║  ██║╚██████╔╝██████╔╝███████║
╚═╝     ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝    ╚═╝     ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═════╝ ╚══════╝   
                                                                           ██▄ ▀▄▀     █ ██▀ ▀█▀ ▀█▀ █
                                                                           █▄█  █    ▀▄█ █▄▄ █▄▄ █▄▄ █
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
)";
    locale::global(locale("en_US.UTF-8"));
    wcout.imbue(locale());
    wcout << logo;
    SetConsoleTextAttribute(hOUTPUT, 15);
    setlocale(LC_ALL, "RU");
}

int main() {
    bool run = true;
    while (run) {
        logo();
        cout << "\nКакая лабораторная?"
            "\n\n1. Метод отработки назад (Задача с машиной в пустыни)"
            "\n2. Алгоритмы"
            "\n3. Шахматная доска"
            "\n4. Хеширование"
            "\n5. Графы" << endl;

        int ch;
        cout << "\n/#?: ";
        cin >> ch;

        switch (ch) {
        case 1:
            lab1();
            break;
        case 2:
            lab2();
            break;
        case 3:
            lab3();
            break;
        case 4:
            lab4();
            break;
        case 5:
            lab5();
            break;
        default:
            system("cls");
            main();
            continue;
        }

        run = reload();

    }

}
