/*
4.	Оголосіть в головній програмі два вказівника типу Shape
і створіть два об'єкти типу Square і Rectangle у вільній пам'яті,
зберігши їх адреси в цих вказівниках.
Виконайте обробку об'єктів шляхом виклику як віртуальних,
так і не віртуальних методів класів.
Необхідно знищити об'єкти і обнулити їх вказівники.

*/

#include <iostream>
#include <string.h>

using namespace std;

class Shape
{
protected:
	string linesColor;
	unsigned int linesWeight;
	unsigned int area;
	unsigned int perimetr;
public:
	Shape()
	{
		this->linesColor = "";
		this->linesWeight = 0;
	}

	virtual void computeArea()
	{
	}

	virtual void computePerimeter()
	{
	}

	unsigned int getArea()
	{
		return this->area;
	}

	unsigned int getPerimetr()
	{
		return this->perimetr;
	}

	inline void setLinesColor(string linesColor)
	{
		this->linesColor = linesColor;
	}

	inline void setLinesWeight(unsigned int linesWeight)
	{
		this->linesWeight = linesWeight;
	}

	inline string getLinesColor()
	{
		return this->linesColor;
	}

	inline unsigned int getLinesWeight()
	{
		return this->linesWeight;
	}

	Shape(string color)
	{
		this->linesColor = color;
		this->linesWeight = 0;
	}

	Shape(unsigned int weight)
	{
		this->linesColor = "";
		this->linesWeight = weight;
	}

	virtual ~Shape()
	{
		cout << "Сработал деструктор класса фигура" << endl;
	}
};

class Square : public Shape
{
protected:
	unsigned int length;
public:
	virtual inline void computeArea()
	{
		this->area = this->length * this->length;
	}

	virtual void computePerimeter()
	{
		this->perimetr = 4 * this->length;
	}

	inline string getLinesColor()
	{
		return this->linesColor;
	}

	inline unsigned int getWeight()
	{
		return this->linesWeight;
	}

	inline unsigned int getLength()
	{
		return this->length;
	}

	inline void setLinesWeight(unsigned int linesWeigth = 10)
	{
		this->linesWeight = linesWeigth;
	}

	inline void setColor(string linesColor = "white")
	{
		this->linesColor = linesColor;
	}

	inline void setlength(unsigned int length = 12)
	{
		this->length = length;
	}

	Square()
	{
		this->length = 12;
	}

	Square(unsigned int length)
	{
		this->length = length;
	}

	virtual ~Square()
	{
		cout << "Сработал деструтор класса квадрат" << endl;
	}
};

class Rectangle : public Square
{
protected:
	unsigned int width;

public:
	virtual inline void computeArea()
	{
		this->area = this->length * this->width;
	}

	virtual void computePerimeter()
	{
		this->perimetr = 2 * (this->width + this->length);
	}

	inline void setWidth(unsigned int width = 5)
	{
		this->width = width;
	}

	inline unsigned int getWidth()
	{
		return this->width;
	}

	Rectangle()
	{
		this->width = 5;
	}

	Rectangle(unsigned int width)
	{
		this->width = width;
	}

	~Rectangle()
	{
		cout << "Сработал деструтор класса прямоугольник" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//Создаем экземпляры классов Square и Rectangle
	Shape* square = new Square();
	Shape* rect = new Rectangle();

	//Считаем их площу и периметр
	square->computeArea();
	square->computePerimeter();

	rect->computeArea();
	rect->computePerimeter();

	//
	cout << "Площа 1 фигуры " << square->getArea() << endl;
	cout << "Периметр 1 фигуры " << square->getPerimetr() << endl;

	cout << "Площа 2 фигуры " << rect->getArea() << endl;
	cout << "Периметр 2 фигуры " << rect->getPerimetr() << endl;

	//Чистим память
	delete square;
	delete rect;

	//Обнуляем показатели
	square = NULL;
	rect = NULL;

	return 0;
}