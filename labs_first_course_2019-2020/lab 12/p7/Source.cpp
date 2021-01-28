/*7.	ўо нев≥рно в цьому фрагмент≥ коду ?
 class Shape { public: virtual Shape(); ~Shape(); };


*/

class Shape
{
public:
	int data;
	virtual Shape(); //не бывает виртуальных конструкторов
	~Shape();
};