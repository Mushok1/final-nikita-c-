#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
enum Position { TAYPA, BUKE, SHIKE, ALSHY };

Position rollAsyk() {
    return static_cast<Position>(rand() % 4);
}

string positionToString(Position pos) {
    switch (pos) {
        case TAYPA: return "Тайпа (на боку)";
        case BUKE: return "Бүке (вогнутой стороной вверх)";
        case SHIKE: return "Шике (выпуклой стороной вверх)";
        case ALSHY: return "Алшы (стоя)";
        default: return "Неизвестное положение";
    }
}

int main() {
    srand(time(0));
    int numPlayers;
    cout << "Введите количество игроков: ";
    cin >> numPlayers;

    vector<int> scores(numPlayers, 0);
    int rounds;
    cout << "Введите количество раундов: ";
    cin >> rounds;
    for (int r = 1; r <= rounds; r++) {
        cout << "\nРаунд " << r << "!" << endl;
        for (int i = 0; i < numPlayers; i++) {
            cout << "Игрок " << (i + 1) << " бросает асык..." << endl;
            Position result = rollAsyk();
            cout << "Результат: " << positionToString(result) << "\n";

            if (result == ALSHY) {
                scores[i] += 3;
            } else if (result == SHIKE) {
                scores[i] += 2;
            } else if (result == BUKE) {
                scores[i] += 1;
            }
        }
    }
    int maxScore = 0, winner = 0;
    for (int i = 0; i < numPlayers; i++) {
        cout << "Игрок " << (i + 1) << " набрал " << scores[i] << " очков." << endl;
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            winner = i + 1;
        }
    }
    cout << "\nПобедитель: Игрок " << winner << " с " << maxScore << " очками! Поздравляем!" << endl;
    return 0;
}
