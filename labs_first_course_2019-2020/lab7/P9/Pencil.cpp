#pragma once
#include "Pencil.h"
Pencil::Pencil()
{
	itsType = "";
	itsModel = "";
}

//Destructor
Pencil::~Pencil()
{
	cout << "��'��� ����� ����������" << endl;
}
//Medots

void Pencil::setType(string actualType)		//���������� ������ �������� ��������
{
	itsType = actualType;
}

void Pencil::setModel(string newValueOfModel)		//���������� ������ �������� �����
{
	itsModel = newValueOfModel;
}



string Pencil::getType() const			 //����������� ��������
{
	return itsType;
}

string Pencil::getModel()	const	//����������� �����
{
	return itsModel;
}

void Pencil::printAllData()		//����� ���� ������
{
	cout << "������� ���������: " << itsType << endl << "����� ���������: " << itsModel << endl;
};

