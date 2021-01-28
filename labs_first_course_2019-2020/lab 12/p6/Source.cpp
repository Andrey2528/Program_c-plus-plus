/*6.	Що невірно в цьому фрагменті коду ?
void SomeFunc(Shape);
Shape* pRect = new Rectangle;
SomeFunc(*pRect);


*/

//Да, помоем все правильно
void SomeFunc(Shape);
Shape* pRect = new Rectangle;
SomeFunc(*pRect);