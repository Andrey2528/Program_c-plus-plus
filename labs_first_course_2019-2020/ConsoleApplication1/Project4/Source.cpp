/*5.	Напишіть програму, в якій створюються два об'єкти типу "Студент".
Встановіть їх вік, стать і стипендію за допомогою методів доступу. Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу. 
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.*/
#include <iostream>
using namespace std;
//Объявление класса Student
class Student {
	// закрытые члены-данные 
private:
	unsigned short int Age;
	char Gender[21];
float Stipend; public:
	void DisplayAllToScreen();
	void GetAllFromKeyBoard();
	Student();
	Student(unsigned short int, char, float);
	~Student();
	// методы доступа
	unsigned short int getAge()const { return Age; }  //inline
	void setAge(unsigned short int Age) { Age = Age; }    //inline
	char getGender()const { return Gender[21]; }  //inline
	void setv(char Gender) { Gender = Gender; }    //inline
	float getStipend()const { return Stipend; }  //inline
	void setStipend(float Stipend) { Stipend = Stipend; }    //inline
};
	Student::Student() {
		Age = 22;
		strcpy_s(Gender, "Men");
		Stipend = 1222;
		cout << "Default Student constructor №1\n";
	}
	Student::Student(unsigned short int dAge, char dGender, float dStipend) {
		Age = dAge;
		Gender[21] = dGender;
		Stipend = dStipend;
		cout << "Student constructor №2\n";
	}
	//деструктор
	Student::~Student()
	{
		cout << "Student destructor\n";
	}

	// реализация класса
	void Student::DisplayAllToScreen()
	{
		cout << "Возраст студента: " << Age << '\t' << "Стать студента: " << Gender << '\t' << "Стипендия: " << Stipend << '\t' << endl;
	}
	int main() {
		setlocale(LC_ALL, "Russian");
		float G, St; Student S1;
		Student S2(19, 'M', 1300);
		S1.DisplayAllToScreen();
		S2.DisplayAllToScreen();
		G = (float(S1.getAge()) + S2.getAge()) / 2;
		St = S1.getStipend() + S2.getStipend();
		cout << "Средний возраст" << G << endl;
		cout << "Общая стипендия" << St << endl;
		system("pause"); return 0;
	}
