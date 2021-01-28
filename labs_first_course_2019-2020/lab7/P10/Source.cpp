//10.	Напишіть 3 варіанти switch для друку назв днів тижня, використовуючи різні типи його параметра : ціле, символ і перерахування.
#include <iostream>

using namespace std;

int main()
{
	int currentDay = 3;
	enum days { Sunday = 1, Monday, Tuesday, Wednesday, Thersday, Friday, Saturday };
	switch (currentDay)
	{
	case Sunday:
		cout << "Sunday";
		break;
	case Monday:
		cout << "Monday";
		break;
	case Tuesday:
		cout << "Tuesday";
		break;
	case Wednesday:
		cout << "Wednesday";
		break;
	case Thersday:
		cout << "Thersday";
		break;
	case Friday:
		cout << "Friday";
		break;
	case Saturday:
		cout << "Saturday";
		break;
	}
	cout << endl;
	char dayOfWeek = 's';

	switch (dayOfWeek)
	{
	case 's':
		cout << "Sunday";
		break;
	case 'm':
		cout << "Monday";
		break;
	case 'e':
		cout << "Tuesday";
		break;
	case 'w':
		cout << "Wednesday";
		break;
	case 'h':
		cout << "Thersday";
		break;
	case 'f':
		cout << "Friday";
		break;
	case 'a':
		cout << "Saturday";
		break;
	}
	cout << endl;

	int currentDayOfWeek = 3;
	switch (currentDayOfWeek)
	{
	case 1:
		cout << "Sunday";
		break;
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thersday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	}

}