#include <iostream>
#include <string.h>

using namespace std;

class Shape
{
protected:
	string linesColor;
	unsigned int linesWeight;
public:
	Shape()
	{
		this->linesColor = "";
		this->linesWeight = 0;
	}

	inline unsigned int computeArea()
	{
	}

	inline unsigned int computePerimeter()
	{
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
	virtual inline unsigned int computeArea()
	{
		return this->length * this->length;
	}

	virtual inline unsigned int computePerimeter()
	{
		return 4 * this->length;
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

	~Square()
	{
		cout << "Сработал деструтор класса квадрат" << endl;
	}
};

class Rectangle : public Square
{
protected:
	unsigned int width;

public:
	virtual inline unsigned int computeArea()
	{
		return this->length * this->width;
	}

	virtual inline unsigned int computePerimeter()
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

	~Rectangle()
	{
		cout << "Сработал деструтор класса прямоугольник" << endl;
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


public class Rectangle : Square, System.IDisposable
{
	protected uint width;

	public virtual uint computeArea()
	{
		return this.length * this.width;
	}

	public virtual uint computePerimeter()
	{
		return 2 * (this.length + this.width);
	}

	public void setWidth(uint width = 5)
	{
		this.width = width;
	}

	public uint getWidth()
	{
		return this.width;
	}

	public Rectangle()
	{
		this.width = 5;
	}

	public Rectangle(uint width)
	{
		this.width = width;
	}

	public void Dispose()
	{
		Console.Write("Сработал деструтор класса прямоугольник");
		Console.Write("\n");
	}
}

public static class GlobalMembers
{
	internal static void Main()
	{
		setlocale(LC_ALL, "RUSSIAN");

		Rectangle rect = new Rectangle();
		Console.Write(rect.computePerimeter());
		Console.Write("\n");

		Square square = new Square();
		Console.Write(square.computePerimeter());
		Console.Write("\n");

	}
}
