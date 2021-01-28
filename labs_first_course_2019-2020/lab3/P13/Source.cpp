//13.	Виведіть на екран всі прописні букви і їх номери.
//Жуков Андрій 30.09.2019
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int rus_word = 192;
	cout << "Rusian words: \n\n" << endl;
	for (rus_word = 192; rus_word <= 223; ++rus_word)
	{
		cout << unsigned char(rus_word) << "-" << rus_word << endl;
		
	}
	system("pause");
		return 0;
}