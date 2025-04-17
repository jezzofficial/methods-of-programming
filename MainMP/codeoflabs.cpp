#include "codeoflabs.h"
#include <iostream>
#include <winsock2.h>
#include <vector>
#include <fstream>
#include <list>
#include <set>
#include <queue>
#include <limits>

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
    else if (n == 3) {
        logo = LR"(
 /$$   /$$  /$$$$$$   /$$$$$$  /$$   /$$         /$$$$$$$$ /$$   /$$ /$$   /$$  /$$$$$$ 
| $$  | $$ /$$__  $$ /$$__  $$| $$  | $$        | $$_____/| $$  | $$| $$$ | $$ /$$__  $$
| $$  | $$| $$  \ $$| $$  \__/| $$  | $$        | $$      | $$  | $$| $$$$| $$| $$  \__/
| $$$$$$$$| $$$$$$$$|  $$$$$$ | $$$$$$$$ /$$$$$$| $$$$$   | $$  | $$| $$ $$ $$| $$      
| $$__  $$| $$__  $$ \____  $$| $$__  $$|______/| $$__/   | $$  | $$| $$  $$$$| $$      
| $$  | $$| $$  | $$ /$$  \ $$| $$  | $$        | $$      | $$  | $$| $$\  $$$| $$    $$
| $$  | $$| $$  | $$|  $$$$$$/| $$  | $$        | $$      |  $$$$$$/| $$ \  $$|  $$$$$$/
|__/  |__/|__/  |__/ \______/ |__/  |__/        |__/       \______/ |__/  \__/ \______/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
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
    int m;
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
        cout << "Введите макс. возможное число, которое можно взять за раз: ";
        cin >> m;
        omove = n % (1 + m);
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
vector<int> finalBoard;

bool iS(const vector<int>& b, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (b[i] == col) {
            return false;
        }
    }
    return true;
}

bool iS2(const vector<int>& b, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (b[i] == col ||
            b[i] - i == col - row ||
            b[i] + i == col + row
            ) {
            return false;
        }
    }
    return true;
}

void q(vector<int>& b, int row) {
    if (row == N) {
        solutions++;
        if (solutions == 1) {
            finalBoard = b;
        }
        return;
    }

    for (int col = 0; col < N; col++) {
        if (iS2(b, row, col)) {
            b[row] = col;
            q(b, row + 1);
        }
    }
}

void f(vector<int>& b, int row) {
    if (row == N) {
        solutions++;
        if (solutions == 1) {
            finalBoard = b;
        }
        return;
    }

    for (int col = 0; col < N; col++) {
        if (iS(b, row, col)) {
            b[row] = col;
            q(b, row + 1);
        }
    }
}

void printBoard(const vector<int>& b, int ch) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (b[i] == j && ch == 1) {
                cout << "Q ";
            }
            else if (b[i] == j && ch == 2) {
                cout << "F ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void lab3() {
    logo(2);
    cout << "\nВведите число ферзей (ладья) и размер доски: ";
    cin >> N;
    cout << "Что мы проверяем?"
        "\n1. Ферзи"
        "\n2. Ладьи" << endl;
    int ch;
    cout << "~#/: ";
    cin >> ch;


    if (ch == 1) {
        if (N < 2) {
            cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": 0" << endl;
            system("cls");
        }
        vector<int> b(N, -1);
        q(b, 0);
        cout << "Число возможных расстановок " << N << " ферзей на доске " << N << " на " << N << ": " << solutions << endl;

        if (solutions > 0) {
            cout << "\nОдна из возможных расстановок:" << endl;
            printBoard(finalBoard, ch);
        }
    }
    else if (ch == 2) {
        vector<int> b(N, -1);
        f(b, 0);
        cout << "Число возможных расстановок " << N << " ладый на доске " << N << " на " << N << ": " << solutions << endl;

        if (solutions > 0) {
            cout << "\nОдна из возможных расстановок:" << endl;
            printBoard(finalBoard, ch);
        }
    }
    else {
        cout << "Неверный выбор!" << endl;
        system("cls");
    }
}



///Lab4 - Хеширование
class HashTable {
private:
    int SIZE = 100;
    vector<list<int>> table;

    int hashFunction(int key) {
        return SIZE % key;

    }

public:
    HashTable() : table(SIZE) {}

    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    bool search(int key) {
        int index = hashFunction(key);
        return find(table[index].begin(), table[index].end(), key) != table[index].end();
    }

    void print(ofstream& outFile) {
        for (int i = 0; i < SIZE; i++) {
            if (!table[i].empty()) {
                outFile << "Index " << i << ": ";
                for (int num : table[i]) {
                    outFile << num << " ";
                }
                outFile << endl;
            }
        }
    }
};


void lab4() {
    logo(3);
    HashTable hashTable;
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile) {
        cerr << "\nОшибка открытия input.txt" << endl;
        system("exit");
    }

    int num;
    while (inputFile >> num) {
        hashTable.insert(num);
    }
    inputFile.close();

    bool reg = true;
    bool reg2 = true;
    while (reg) {
        int ch2;
        system("cls");
        logo(3);
        cout << "\nЖелаете внести изменения?"
            "\n1. Добавить элемент"
            "\n2. Удалить элемент"
            "\n3. Поиск элемента"
            "\n4. Пропустить"
            "\n\n~#: ";

        cin >> ch2;

        switch (ch2) {
        case 1:
            reg2 = true;
            while (reg2) {
                cout << "\nВведите число, которое нужно добавить (если выход, то 0): ";
                cin >> num;
                if (num == 0) {
                    reg2 = false;
                }
                else if (num > 100) {
                    printf("Число может быть только меньше 101\n");
                }
                else {
                    hashTable.insert(num);
                }
            }
            system("pause");
            break;

        case 2:
            reg2 = true;
            while (reg2) {
                cout << "\nВведите число, которое нужно удалить (если выход, то 0): ";
                cin >> num;
                if (num == 0) {
                    reg2 = false;
                }
                else if (num > 100) {
                    printf("Число может быть только меньше 101\n");
                }
                else {
                    hashTable.remove(num);
                }
            }
            system("pause");
            break;

        case 3:
            cout << "\nВведите число для поиска: ";
            cin >> num;
            if (num > 100 || num == 0) {
                printf("Число может быть только меньше 101 и не == 0\n");
            }
            else if (hashTable.search(num)) {
                cout << "Число найдено в хеш-таблице." << endl;
            }
            else {
                cout << "Число отсутствует в хеш-таблице." << endl;
            }
            system("pause");
            break;

        case 4:
            cout << "Файл сохранен или остался без изменений!" << endl;
            reg = false;
            break;

        default:
            cout << "Неверный выбор." << endl;
            continue;
        }
    }
    hashTable.print(outputFile);
    outputFile.close();
}



///Lab5 - Графы
const int INF = numeric_limits<int>::max();

struct Edge {
    int to, weight;
};

void dijkstra(int start, int target, const vector<vector<Edge>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INF);
    vector<int> parent(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[start] = 0;
    pq.push({ 0, start });

    while (!pq.empty()) {
        int v = pq.top().second;
        int d_v = pq.top().first;
        pq.pop();

        if (d_v != dist[v]) continue;

        for (auto edge : graph[v]) {
            int to = edge.to;
            int weight = edge.weight;

            if (dist[v] + weight < dist[to]) {
                dist[to] = dist[v] + weight;
                parent[to] = v;
                pq.push({ dist[to], to });
            }
        }
    }

    if (dist[target] == INF) {
        cout << "Нет пути от " << start + 1 << " до " << target + 1 << "\n";
        return;
    }

    cout << "Кратчайший путь от " << start + 1 << " до " << target + 1 << " равен " << dist[target] << "\n";
    vector<int> path;
    for (int v = target; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());

    cout << "Путь: ";
    for (int v : path) cout << v + 1 << " ";
    cout << "\n";
}

void lab5() {
    setlocale(LC_ALL, "");
    int n = 9;
    vector<vector<Edge>> graph(n);
    set<pair<int, int>> added_edges;

    vector<vector<int>> edges = {
        {1, 2, 10}, {1, 7, 3}, {1, 8, 6}, {1, 9, 12},
        {2, 3, 18}, {2, 7, 2}, {2, 9, 13},
        {3, 9, 7}, {3, 6, 20}, {3, 4, 25},
        {4, 5, 5}, {4, 6, 16}, {4, 7, 4},
        {5, 6, 10},
        {6, 7, 1}, {6, 8, 15}, {6, 9, 9},
        {7, 9, 24},
        {8, 5, 23}, {8, 6, 15}, {8, 9, 5}
    };

    for (const auto& edge : edges) {
        int u = edge[0] - 1;
        int v = edge[1] - 1;
        int w = edge[2];

        if (u >= n || v >= n) {
            cout << "Ошибка: выход за границы массива!" << endl;
            continue;
        }

        if (added_edges.find({ u, v }) == added_edges.end() && added_edges.find({ v, u }) == added_edges.end()) {
            graph[u].push_back({ v, w });
            graph[v].push_back({ u, w });
            added_edges.insert({ u, v });
        }
    }

    int start;
    int target;


    cout << "Откуда идем: ";
    cin >> start;
    cout << "Куда идем: ";
    cin >> target;

    start = start - 1;
    target = target - 1;




    dijkstra(start, target, graph);
}