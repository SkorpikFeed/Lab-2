#include <iostream>
#include <string>

int Size(char[]);
int Size(std::string);
void Add(char[]);
int main()
{
	std::string temp;
	char String[19];
	start:
	std::cout << "Enter values(9):" << std::endl;
	std::cin >> temp;
	if (Size(temp) != 9)
	{
		system("cls");
		std::cout << "Wrong amount of values. There should be 9 of them" << std::endl;
		temp = "";
		goto start;
	}
	for (int i = 0; i < Size(temp); i++)
	{
		String[i] = temp[i];
	}
	String[Size(temp)] = '\0';
	std::cout << "Your string:" << " ";
	for (int i = 0; i < Size(temp); i++)
	{
		std::cout << String[i] << " ";
	}
	std::cout <<std::endl<<"The size of your string: "<<Size(String) << std::endl << "Your string after adding symbols:" << " ";
	Add(String);
	for (int i = 0; i < Size(String); i++)
	{
		std::cout << String[i] << " ";
	}
	std::cout << std::endl << "The size of your string: " << Size(String);
}
int Size(std::string value)
{
	int size = 0;
	while (value[size] != '\0')
	{
		size++;
	}
	return size;
};
int Size(char value[])
{
	int size = 0;
	while (value[size] != '\0')
	{
		size++;
	}
	return size;
};
void Add(char main[])
{
	for (int i = 0; i < 9; i++)
	{
		main[17 - i] = main[i];
	}
	main[18] = '\0';
}