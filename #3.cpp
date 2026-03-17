#include <iostream>

using namespace std;

int main()
{
	cout << "=== Dynamic Array with Auto-Expansion ===\n\n";

	int width = 3;
	int input;
	int size = 0;
	int* numbers{ new int[width] };

	cout << "Enter numbers (0 to stop):\n";
	cout << "------------------------\n";

	while (cin >> input) {
		if (input == 0) {

			cout << "\n------------------------";
			cout << "\nYou entered " << size << " numbers:\n";
			cout << "------------------------\n";

			for (int i = 0; i < size; ++i) {
				cout << "numbers[" << i << "] = " << numbers[i] << endl;
			}
			
			cout << "------------------------\n";
			delete[] numbers;
			numbers = nullptr;
			break;
		}
		if (size >= width) {
			cout << "Array expanded: " << width << " -> " << width + 2 << " elements\n";
			width += 2;
			int* new_numbers{ new int[width] };
			for (int i = 0; i < size; ++i) {
				new_numbers[i] = numbers[i];
			}
			delete[] numbers;
			numbers = new_numbers;
		}
		
		numbers[size] = input;
		size++;
	}
}