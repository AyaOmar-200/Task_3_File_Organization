using namespace std;
#include <iostream>
#include<string>
#include<fstream>

int main()
{
	ofstream obj1("welcome.txt");

	if (!obj1.is_open())
	{
		cout << "Erorr In Openning File" << endl;
	}
	else
	{
		obj1 << "Hello Everybody";

		obj1.seekp(11, ios::beg);

		obj1 << "one";
		obj1 << endl;

		ifstream obj2("welcome.txt");

		string text;

		getline(obj2, text);

		ofstream obj3("welcome.txt" , ios:: app);

		obj3 << text;

		obj3.close();

	}
}
