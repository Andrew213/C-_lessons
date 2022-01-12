#include <iostream>
using namespace std;

int getPerfectInt(int a, int b)
{


	for (; a < b; a++)
	{
		int result = 0;
		for (int j = 1; j < a; j++)
		{
			if ((a % j) == 0)
			{
				result += j;
			}
		}
		if (result == a && result)
		{
			cout << result << " \n";

		}
	}
	return 0;
}

void main()
{

	setlocale(0, "ru");

	int a = 0, b = 0;
	cout << "Введите интервал\n" << endl;
	cout << "От: ";
	cin >> a;
	cout << "До: ";
	cin >> b;

	getPerfectInt(a, b);

}