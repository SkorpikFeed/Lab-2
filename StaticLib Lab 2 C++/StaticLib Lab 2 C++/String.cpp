#include "String.h"
#include "pch.h"
String::String()
{
};
String::~String()
{
};
void String::Delete5()
{
	for (int i = 0; i < Size(); i++)
	{
		if (value[i] == '5')
		{
			for (int j = i; j <= Size(); j++)
			{
				value[j] = value[j + 1];
			}
			i--;
		}
	}
};
int String::Size()
{
	int size = 0;
	while (value[size] != '\0')
	{
		size++;
	}
	return size;
};
char String::GetString(int number)
{
	char A = value[number];
	return A;
};
void String::Change(std::string New)
{
	setValue(New);
};
void String::Add(char symb)
{
	value += symb;
}
