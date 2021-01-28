/*1.	Створіть об'єкт цілого типу в стеку. Потім посилання і вказівник на нього. 
Змініть і роздрукуйте значення цього об'єкта за допомогою вказівника та посилання.*/
#include <iostream>
using namespace std;
int main() {
	int number = 5;

	//покажчик
	int* ptrToNumber = &number;
	*ptrToNumber = 6;
	cout << *ptrToNumber << endl;

	//посилання
	int& rfrToNumber = number;
	rfrToNumber = 7;
	cout << rfrToNumber << endl;

	//Убираем висячие показатели
	ptrToNumber = 0;
	return 0;
}