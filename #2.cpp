#include <iostream>
#include <random>

using namespace std;

int* numbers{ nullptr };
int N, P;

void Randomizer()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    cout << "Enter the number of elements: ";
    cin >> N;

    numbers = { new int[N] };

    cout << "\nGenerated " << N << " random numbers:\n";
    cout << "------------------------\n";
    for (int i = 0; i < N; ++i) {
        numbers[i] = dis(gen);
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    cout << "------------------------\n\n";
}

void Poisk() {
    bool found = false;

    cout << "Enter the number to search for: ";
    cin >> P;

    cout << "\nSearching for " << P << "...\n";
    cout << "------------------------\n";

    for (int i = 0; i < N; ++i) {
        if (numbers[i] == P) {
            cout << "Found at position: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Number " << P << " not found in the array" << endl;
    }
    cout << "------------------------\n\n";

    delete[] numbers;
    numbers = nullptr;
}

int main()
{
    cout << "=== Random Number Search Program ===\n\n";
    Randomizer();
    Poisk();
    cout << "Program finished.\n";

    return 1;
}
