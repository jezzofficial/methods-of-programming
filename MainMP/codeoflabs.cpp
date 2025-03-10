﻿#include "codeoflabs.h"
#include <iostream>
#include <winsock2.h>
#include <vector>
using namespace std;
HANDLE hOUTPUT2 = GetStdHandle(STD_OUTPUT_HANDLE);

///LOGO FOR LABS
void logo(int n) {
    system("cls");
    SetConsoleTextAttribute(hOUTPUT2, 11);
    wstring logo;
    if (n == 1) {
        logo = LR"(
 _______   ______   ______  __    __ ________ _______   ______   ______  __    __ ______ __    __  ______  
|       \ /      \ /      \|  \  /  \        \       \ /      \ /      \|  \  /  \      \  \  |  \/      \ 
| ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓ /  ▓▓\▓▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓ /  ▓▓\▓▓▓▓▓▓ ▓▓\ | ▓▓  ▓▓▓▓▓▓\
| ▓▓__/ ▓▓ ▓▓__| ▓▓ ▓▓   \▓▓ ▓▓/  ▓▓   | ▓▓  | ▓▓__| ▓▓ ▓▓__| ▓▓ ▓▓   \▓▓ ▓▓/  ▓▓  | ▓▓ | ▓▓▓\| ▓▓ ▓▓ __\▓▓
| ▓▓    ▓▓ ▓▓    ▓▓ ▓▓     | ▓▓  ▓▓    | ▓▓  | ▓▓    ▓▓ ▓▓    ▓▓ ▓▓     | ▓▓  ▓▓   | ▓▓ | ▓▓▓▓\ ▓▓ ▓▓|    \
| ▓▓▓▓▓▓▓\ ▓▓▓▓▓▓▓▓ ▓▓   __| ▓▓▓▓▓\    | ▓▓  | ▓▓▓▓▓▓▓\ ▓▓▓▓▓▓▓▓ ▓▓   __| ▓▓▓▓▓\   | ▓▓ | ▓▓\▓▓ ▓▓ ▓▓ \▓▓▓▓
| ▓▓__/ ▓▓ ▓▓  | ▓▓ ▓▓__/  \ ▓▓ \▓▓\   | ▓▓  | ▓▓  | ▓▓ ▓▓  | ▓▓ ▓▓__/  \ ▓▓ \▓▓\ _| ▓▓_| ▓▓ \▓▓▓▓ ▓▓__| ▓▓
| ▓▓    ▓▓ ▓▓  | ▓▓\▓▓    ▓▓ ▓▓  \▓▓\  | ▓▓  | ▓▓  | ▓▓ ▓▓  | ▓▓\▓▓    ▓▓ ▓▓  \▓▓\   ▓▓ \ ▓▓  \▓▓▓\▓▓    ▓▓
 \▓▓▓▓▓▓▓ \▓▓   \▓▓ \▓▓▓▓▓▓ \▓▓   \▓▓   \▓▓   \▓▓   \▓▓\▓▓   \▓▓ \▓▓▓▓▓▓ \▓▓   \▓▓\▓▓▓▓▓▓\▓▓   \▓▓ \▓▓▓▓▓▓                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
)";
    }
    else if (n == 2) {
        logo = LR"(
  ______  __        ______   ______  _______  ______ ________ __    __ __       __  ______  
 /      \|  \      /      \ /      \|       \|      \        \  \  |  \  \     /  \/      \ 
|  ▓▓▓▓▓▓\ ▓▓     |  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓▓▓▓▓▓\\▓▓▓▓▓▓\▓▓▓▓▓▓▓▓ ▓▓  | ▓▓ ▓▓\   /  ▓▓  ▓▓▓▓▓▓\
| ▓▓__| ▓▓ ▓▓     | ▓▓ __\▓▓ ▓▓  | ▓▓ ▓▓__| ▓▓ | ▓▓    | ▓▓  | ▓▓__| ▓▓ ▓▓▓\ /  ▓▓▓ ▓▓___\▓▓
| ▓▓    ▓▓ ▓▓     | ▓▓|    \ ▓▓  | ▓▓ ▓▓    ▓▓ | ▓▓    | ▓▓  | ▓▓    ▓▓ ▓▓▓▓\  ▓▓▓▓\▓▓    \ 
| ▓▓▓▓▓▓▓▓ ▓▓     | ▓▓ \▓▓▓▓ ▓▓  | ▓▓ ▓▓▓▓▓▓▓\ | ▓▓    | ▓▓  | ▓▓▓▓▓▓▓▓ ▓▓\▓▓ ▓▓ ▓▓_\▓▓▓▓▓▓\
| ▓▓  | ▓▓ ▓▓_____| ▓▓__| ▓▓ ▓▓__/ ▓▓ ▓▓  | ▓▓_| ▓▓_   | ▓▓  | ▓▓  | ▓▓ ▓▓ \▓▓▓| ▓▓  \__| ▓▓
| ▓▓  | ▓▓ ▓▓     \\▓▓    ▓▓\▓▓    ▓▓ ▓▓  | ▓▓   ▓▓ \  | ▓▓  | ▓▓  | ▓▓ ▓▓  \▓ | ▓▓\▓▓    ▓▓
 \▓▓   \▓▓\▓▓▓▓▓▓▓▓ \▓▓▓▓▓▓  \▓▓▓▓▓▓ \▓▓   \▓▓\▓▓▓▓▓▓   \▓▓   \▓▓   \▓▓\▓▓      \▓▓ \▓▓▓▓▓▓                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
)";
    }
    locale::global(locale("en_US.UTF-8"));
    wcout.imbue(locale());
    wcout << logo;
    SetConsoleTextAttribute(hOUTPUT2, 15);
    setlocale(LC_ALL, "RU");
}

///Lab1 - Метод отработки назад
void lab1() {
    logo(1);
    double S;
    double V;
    double l;

    cout << "\nВведите объем бака: ";
    cin >> V;
    cout << "Введите расход на км: ";
    cin >> l;
    cout << "Введите расстояние: ";
    cin >> S;

    double remaining = S;
    int stages = 0;

    while (remaining > 0) {
        stages++;
        double d_stage = V / ((2 * stages - 1) * l);
        remaining -= d_stage;
    }

    cout << "Мин. кол-во баков: " << stages << endl;
}


///Lab2 - Алгоритмы
int partition(int n, int max) {
    if (n == 0) return 1;
    if (n < 0 || max == 0) return 0;
    return partition(n - max, max) + partition(n, max - 1);
}

void lab2() {
    logo(2);
    cout << "\n\nКакая задача вас интересует?"
        "\n\n1. Ханойские башни"
        "\n2. Число способов разбиения числа"
        "\n3. Спички-камни" << endl;

    int n;
    int omove;
    int ch;
    cout << "\n/#?: ";
    cin >> ch;

    switch (ch) {
    case 1:
        cout << "\nВведите число дисков: ";
        cin >> n;
        cout << "Минимальное количество ходов: " << (pow(2, n) - 1) << endl;
        break;
    case 2:
        cout << "\nВведите число для разбиения: ";
        cin >> n;
        cout << "Число разбиений: " << partition(n, n) << endl;
        break;
    case 3:
        cout << "\nВведите число спичек в начале: ";
        cin >> n;
        omove = n % 5;
        if (omove == 0) omove = 1;
        cout << "Первый игрок должен взять " << omove << " спичек, чтобы выиграть." << endl;
        break;
    default:
        system("cls");
        lab2();
        break;
    }
}


///Lab3 - Шахматная доска (Ферзи) 
int N; 
int solutions = 0; 

bool iS(const vector<int>& b, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (b[i] == col ||
            b[i] - i == col - row ||
            b[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

void q(vector<int>& b, int row) {
    if (row == N) {
        solutions++;
        return;
    }
    for (int col = 0; col < N; col++) {
        if (iS(b, row, col)) {
            b[row] = col;
            q(b, row + 1);
        }
    }
}

void lab3() {
    logo(1);
    cout << "\nВведите число ферзей и размер доски: ";
    cin >> N;
    if (N < 4) {
        cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": 0"<< endl;
    }
    else {
        vector<int> b(N, -1);
        q(b, 0);
        cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": " << solutions << endl;
    }
}
