#include <iostream>
#include <sstream>

using namespace std;

int main(){

	setlocale(LC_ALL, "Ru");

	float R1 = 0, R2 = 0, R3 = 0;

	int count = 1;

	do {
			cout << "\nВведите сопротивление " << count << "(Оm): "<<flush;

			if (count == 1) cin >> R1;
			

			if (count == 2) cin >> R2;
			

			if (count == 3) cin >> R3;
			
			if (!cin.good()) {
				
				cout << "Ввели не  число" << endl;
				
				break;
			}

			count++;
	} while (count <= 3);

	if (R1 && R2 && R3) {
		float const R0 = 1 / R1 + 1 / R2 + 1 / R3;
		
		cout << "\n Сопротивление равно:" << 1/R0 << endl;

	}

}
