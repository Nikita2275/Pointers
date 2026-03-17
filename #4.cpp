#include <iostream>
#include <random>
using namespace std;

int input;
int* numbers{ nullptr };

void Randomizer() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    numbers = { new int[input] };

    cout << "\nGenerated " << input << " random numbers:\n";
    cout << "------------------------\n";

    for (int i = 0; i < input; ++i) {
        numbers[i] = dis(gen);
        cout << "numbers[" << i << "] = " << numbers[i] << endl;  
    }
    cout << "------------------------\n";
}

void filterEven() {

    int Count = 0;
    for (int i = 0; i < input; ++i) {
        if (numbers[i] % 2 == 0) {
            Count++;
        }
    }

    int* numb{ new int[Count] };
    int inp = 0;
    for (int i = 0; i < input; ++i) {
        if (numbers[i] % 2 == 0) {
            numb[inp] = numbers[i];
            inp++;
        }
    }

    cout << "\nFiltered even numbers (" << Count << " found):\n";
    cout << "------------------------\n";

    for (int j = 0; j < Count; ++j) {
        cout << "numbers[" << j << "] = " << numb[j] << endl;
    }
    cout << "------------------------\n";

    delete[] numbers;
    numbers = nullptr;
    delete[] numb;
    numb = nullptr;
}

int main()
{
    cout << "=== Even Number Filter ===\n\n";
    cout << "Enter the number of elements: ";

    cin >> input;
    Randomizer();
    filterEven();
}