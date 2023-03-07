#pragma once
#include <string>
class String
{
private:
	std::string value;
public:
	String();
	~String();
	std::string GetValue() const
	{
		return value;
	};
	void setValue(const std::string& newValue)
	{
		value = newValue;
	};
	int Size();
	void Delete5();
	char GetString(int);
	void Change(std::string);
	void Add(char);
};
