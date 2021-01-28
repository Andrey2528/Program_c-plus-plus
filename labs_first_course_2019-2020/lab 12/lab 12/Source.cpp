/*1.	�������� ���������� ����� Rectangle ( ����������� ) , ���� � �������� �� Square (�������), ����, � ���� ����� - �������� �� Shape (������). 
� ���� Shape �������� ������� ������� �����-��� : ���� ��� ������ � ������� �� ��� � �������� 2 ������������ - �� ������������� � � �����������.
� ������ Square � Rectangle �������� ������ (�������) �����-��� ��� ��������� ������ ����� � �����, ����� ������������, 
�� ���������� ������������ �������� �����, � ����� ������ ��� ���������� ����� �� ��������� �����. 
� ���� Rectangle ����'������ �������������� ������������ ������ �������� ����� Square. ��� ����������� ������� � ����� ������ �������.
�������� ������� ��������, � ��� ��������� ��������� ��'����-����� ����� ���� � �� �������.*/

#include <iostream>
#include <string.h>
using namespace std;

class Shape {
	protected:
		string LineColors;
		unsigned int LineWeidth;

	public:
		Shape() {
			this->LineColors = "";
			this->LineWeidth = 0;
		}
		Shape(string Color) {
			this->LineColors = Color;
			this->LineWeidth = 0;
		}
		Shape(unsigned int Weidth)
		{

			this->LineColors = "";
			this->LineWeidth = Weidth;
		}
		~Shape() { cout << "�����������! ����� ����������" << endl; }
};

class Square : public Shape
{
protected:
	unsigned int length;
public:
	inline unsigned int computeArea()
	{
		return this->length * this->length;
	}

	inline unsigned int computePerimeter()
	{
		return 4 * this->length;
	}

	inline string getLinesColor()
	{
		return this->LineColors;
	}

	inline unsigned int getWeight()
	{
		return this->LineWeidth;
	}

	inline unsigned int getLength()
	{
		return this->length;
	}

	inline void setLinesWeight(unsigned int linesWeigth = 10)
	{
		this->LineWeidth = linesWeigth;
	}

	inline void setColor(string linesColor = "white")
	{
		this->LineColors = linesColor;
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
};

class Rectangle : public Square
{
protected:
	unsigned int width;

public:
	inline unsigned int computeArea()
	{
		return this->length * this->width;
	}

	inline unsigned int computePerimeter()
	{
		return 2 * (this->length + this->width);
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
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Rectangle rect;
	cout << rect.computePerimeter() << endl;

	Square square;
	cout << square.computePerimeter() << endl;

	return 0;
}
