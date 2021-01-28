/*
5.	� ������� ������� �������� ����� ��������� ���� Shape .
������� ����� ��'���� ���� Square � Rectangle � ����� ���'��,
������� �� ������ � ����� �����.
�������� � ����������� ��������� ��'���� �� �����,
�������������� ������ ��� �����.
��������� ������� ��'���� � �������� ����� ���������.


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

	virtual void printDataToConsole()
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

	void printDataToConsole()
	{
		cout << "������ " << this->length << endl;
		cout << "�������� " << this->perimetr << endl;
		cout << "����� " << this->area << endl;
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

	void printDataToConsole()
	{
		cout << "������ " << this->width << endl;
		cout << "������ " << this->length << endl;
		cout << "�������� " << this->perimetr << endl;
		cout << "����� " << this->area << endl;
	}

	Rectangle()
	{
		this->width = 5;
	}

	Rectangle(unsigned int width)
	{
		this->width = width;
	}

	Rectangle(unsigned int width, unsigned int length)
	{
		this->width = width;
		this->length = length;
	}

	~Rectangle()
	{
		cout << "�������� ��������� ������ �������������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//������� ���������� ������� Square � Rectangle � �������
	Shape* shapes[4] = { new Rectangle(5, 6), new Rectangle(8, 9), new Square(3), new Square(4) };

	//������� �� ����� � ��������� � �����
	for (unsigned int i = 0; i < 4; i++)
	{
		shapes[i]->computeArea();
		shapes[i]->computePerimeter();
	}

	//�������� �� ������ � �������
	for (unsigned int i = 0; i < 4; i++)
	{
		shapes[i]->printDataToConsole();
		cout << endl << endl;
	}

	// delete[] shapes - �� ��������

	//�������� �� ������ � ������� �����
	//� ���������� �� ������� ����������
	for (unsigned int i = 0; i < 4; i++)
	{
		delete shapes[i];
		shapes[i] = 0;
		cout << endl << endl;
	}
	return 0;
}