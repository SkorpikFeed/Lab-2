#include "StaticLib Lab 2 C++/String.h"
#include "StaticLib Lab 2 C++/String.cpp"
#include "iostream"
int main()
{
	String First;
	std::string A;
start:
	std::cout << "Enter values:" << std::endl;
	std::cin >> A;
	int i = 0;
	bool result = true;
	while (A[i] != '\0')
	{
		if (A[i] < '0' || A[i] > '9')
			result = false;
		i++;
	}
	system("cls");
	if (result == false)
	{
		std::cout << "Try again" << std::endl;
		goto start;
	}
	First.setValue(A);
	std::cout << "Your string:" << " ";
	for (int i = 0; i < First.Size(); i++)
	{
		std::cout << First.GetString(i) << " ";
	}
	std::cout << std::endl << std::endl << "(If you want to delete '5' type 'DELETE')" << std::endl << "(If you want to know the size of the string type 'SIZE')" << std::endl << "(If you want to stop type 'STOP')";
	std::cout << std::endl << "(If you want to replace a string with another type 'CHANGE')" << std::endl << "(If you want to add symbol in the string type 'ADD')" << std::endl;
	for (int i = 0; i != -1; i++)
	{
		std::cin >> A;
		if (A == "DELETE")
		{
			First.Delete5();
			std::cout << "Your string:" << " ";
			for (int i = 0; i < First.Size(); i++)
			{
				std::cout << First.GetString(i) << " ";
			}
			std::cout << std::endl;
		}
		else if (A == "SIZE")
		{
			std::cout << "Your size:" << "" << First.Size() << std::endl;
		}
		else if (A == "STOP") break;

		else if (A == "ADD")
		{
			std::cout << "Enter value: ";
			char B;
			std::cin >> B;
			First.Add(B);
			std::cout << std::endl<< "Your string: ";
			for (int i = 0; i < First.Size(); i++)
			{
				std::cout << First.GetString(i) << " ";
			}
			std::cout << std::endl;
		}
		else if (A == "CHANGE")
		{
			std::cout << "Enter new string: ";
			std::string Second;
			std::cin >> Second;
			First.Change(Second);
			std::cout << std::endl << "Your new string: ";
			for (int i = 0; i < First.Size(); i++)
			{
				std::cout << First.GetString(i) << " ";
			}
			std::cout << std::endl;

		}
		else std::cout << "Try again" << std::endl;
	}
}