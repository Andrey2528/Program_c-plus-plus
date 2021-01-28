/*
4.	�������� � ������� ������� ��� ��������� ���� Shape
� ������� ��� ��'���� ���� Square � Rectangle � ����� ���'��,
������� �� ������ � ��� ����������.
��������� ������� ��'���� ������ ������� �� ����������,
��� � �� ���������� ������ �����.
��������� ������� ��'���� � �������� �� ���������.

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
		cout << "�������� ���������� ������ ������" << endl;
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
		cout << "�������� ��������� ������ �������" << endl;
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
		cout << "�������� ��������� ������ �������������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//������� ���������� ������� Square � Rectangle
	Shape* square = new Square();
	Shape* rect = new Rectangle();

	//������� �� ����� � ��������
	square->computeArea();
	square->computePerimeter();

	rect->computeArea();
	rect->computePerimeter();

	//
	cout << "����� 1 ������ " << square->getArea() << endl;
	cout << "�������� 1 ������ " << square->getPerimetr() << endl;

	cout << "����� 2 ������ " << rect->getArea() << endl;
	cout << "�������� 2 ������ " << rect->getPerimetr() << endl;

	//������ ������
	delete square;
	delete rect;

	//�������� ����������
	square = NULL;
	rect = NULL;

	return 0;
}