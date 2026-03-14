#include <iostream>
#include <random>

using namespace std;

int main()
{
    cout << "=== Random Number Generator ===\n\n";

    cout << "Enter the number of elements: ";
    int N;
    cin >> N;

    int* numbers{ nullptr };

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    numbers = { new int[N] };

    cout << "\nGenerated " << N << " random numbers:\n";
    cout << "------------------------\n";
    for (int i = 0; i < N; ++i) {
        numbers[i] = dis(gen);
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    cout << "------------------------\n";

    delete[] numbers;
    numbers = nullptr;

    cout << "Program finished.\n";

    return 1;
}