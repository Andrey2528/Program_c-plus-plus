/*8.	*** Напишіть оголошення і реалізацію закритого класу для роботи з датою, що складається з трьох цілих чисел : день, місяць, рік. 
Додайте до складу класу конструктори, деструктор, методи доступу, логічні методи для перевірки частин дати і визначення високосного року, 
друк дати в кількох форматах 
( " дд.мм.гг ", " дд / мм / рррр ", " mmm - dd - yyyy " ). 
Протестуйте цей клас.
*/

#include <iostream>

typedef unsigned short int USINT;

using namespace std;

class Data
{
private:
	USINT itsDay;
	USINT itsMonth;
	USINT itsYears;
public:
	USINT isDayCorrect();

	bool isMonthCorrect();
	

	//konstruktor
	Data()
	{
		itsDay = 1;
		itsMonth = 1;
		itsYears = 2019;
	}
	//Destructor
	~Data()
	{
		cout << "Деструктор: Настал Апокалипсис" << endl;
		system("cls");
	}

	//Methods

	USINT getDay() const
	{
		return itsDay;
	}
	USINT getMonth() const
	{
		return itsMonth;
	}
	USINT getYears()const
	{
		return itsYears;
	}

	void setDay(USINT newValueOfDay)
	{
		itsDay = newValueOfDay;
		
	}

	void  setMonth(USINT newValueOfMonth)
	{
			itsMonth = newValueOfMonth;
		
	}

	void setYears(USINT newValueOfYear)
	{

		itsYears = newValueOfYear;
	}

	USINT isYearLeap();

	void printSlashFormatDDMMYY();

	void printDateFormatDDMMYYYY();


	void printFormatMMMDDYYYY();

};

USINT Data::isDayCorrect()
{
	USINT currentMonth = getMonth();
	USINT quontityDaysInMonth;
	switch (currentMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		quontityDaysInMonth = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		quontityDaysInMonth = 30;
		break;
	default:
		if (isYearLeap())
			quontityDaysInMonth = 29;
		else
			quontityDaysInMonth = 28;
	}
	if (itsDay > 0 && itsDay <= quontityDaysInMonth)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isMonthCorrect(USINT numberOfMonth)
{
	if (numberOfMonth > 0 && numberOfMonth <= 12)
	{
		return true;
	}
	{return true; }



}

bool Data::isMonthCorrect()
{
	if (itsMonth > 0 && itsMonth <= 12)
	{
		return true;
	}
	{return true; }



}



USINT Data::isYearLeap()
{
	if ((itsYears % 4) == 0 && (itsYears % 100 != 0 || itsYears % 400 == 0))
		return true;
	return false;
}

void Data::printSlashFormatDDMMYY()
{
	if (getDay() < 10)
		cout << "0";
	cout << getDay() << "/";
	
	if (getMonth() < 10)
		cout << "0";
	cout << getMonth() << "/";
	cout << getYears() / 10 % 10 << getYears() % 10 << endl;
}

void Data::printDateFormatDDMMYYYY()
{
	if (getDay() < 10)
		cout << "0";
	cout << getDay() << "-";
	if (getMonth() < 10)
		cout << "0";
		cout << getMonth() << "-";
	 cout  << getYears() << endl;


}


void Data::printFormatMMMDDYYYY()
{
	switch (itsMonth)
	{
	case 1:
		cout << "Jan";
		break;
	case 2:
		cout << "Feb";
		break;
	case 3:
		cout << "Mar";
		break;
	case 4:
		cout << "Apr";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "Jun";
		break;
	case 7:
		cout << "Jul";
		break;
	case 8:
		cout << "Aug";
		break;
	case 9:
		cout << "Sep";
		break;
	case 10:
		cout << "Oct";
		break;
	case 11:
		cout << "Nov";
		break;
	case 12:
		cout << "Dec";
		break;
	default:
		cout << "ERROR";
		break;

	}
	cout << ".";
	if (getDay() < 10)
		cout << "0";
	cout << getDay() << ".";

	cout << getYears() << endl;
}






int main()
{
    setlocale(LC_ALL, "Russian");
	Data Calendar;
	
		USINT newValueOfYear;
		cout << "Введите год: " << endl;
		cin >> newValueOfYear;
		Calendar.setYears(newValueOfYear);
	


	do
	{
		USINT newValueOfMonth;
		cout << "Введите значение месяца " << endl;
		cin >> newValueOfMonth;
		Calendar.setMonth(newValueOfMonth);
	} while (!Calendar.isMonthCorrect());

	do
	{
		USINT newValueOfDay;
		cout << "Введите значение дня: " << endl;
		cin >> newValueOfDay;
		Calendar.setDay(newValueOfDay);
	} while (!Calendar.isDayCorrect());

	Calendar.printSlashFormatDDMMYY();
	Calendar.printDateFormatDDMMYYYY();
	Calendar.printFormatMMMDDYYYY();

	system("pause");
	system("color 4");
	system("pause");

	return 0;
}