#include <iostream>
#include <vector>
#include <string>

bool bracketChecker(std::string brackets)
{
	using std::string;
	int openedBrackets = 0;
	for (char c : brackets)
	{
		if (c == '(') openedBrackets++;
		else if (c == ')') openedBrackets--;
		else return false;
		if (openedBrackets == -1)
		{
			return false;
		}
	}
	if (openedBrackets == 0) return true;
	else return false;
}

int main()
{
	using std::string;
	int numberOfStrings;
	std::cin >> numberOfStrings;
	std::vector <string> stringList;
	string dummy; std::getline(std::cin, dummy);
	for (int i = 0; i < numberOfStrings; i++)
	{
		string k;
        std::getline(std::cin, k);
		stringList.push_back(k);
	}

	for (string k : stringList)
	{
		if (bracketChecker(k)) std::cout << "YES";
		else std::cout << "NO";
		std::cout << std::endl;
	}
	return 0;
}
