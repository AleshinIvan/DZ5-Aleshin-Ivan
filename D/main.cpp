#include <iostream>
#include <algorithm>
#include "Person.hpp"

void Person::a()
{
	std::cout << "Hello!" << '\n'; 
	//������� ������ ����������� ������������� �������� �������, �������-���� a() ���������� � � ���� ������ Source.cpp � person.cpp, ����� ��������� ���������� ������� ������ ���� ����������� ������� a()
	
}

int main()
{
	Person p(1);
	p.a();
	p.b();

	return 0;
}