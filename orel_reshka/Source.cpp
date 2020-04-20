#include <iostream>
namespace cut
{
	void fst_menu()
	{
		std::cout << "Орёл или решка? Пожалуйста, напишите один из вариантов\n"
				  << "orel or 0\n"
				  << "reshka or 1\n";
	}
}

class var
{
public:
	
	bool or_resh;
	char s[7];
	std::string input()
	{
		fgets(s, 7, stdin);
		return s;
	}
	void rand_this_fckg_shit()
	{
		if (s == "orel" || s == 0) or_resh = true;
		else or_resh = false;
		std::cout << or_resh;

	}
	void outt(char *s)
	{
		std::cout << s << std::endl;
	}

};
int main()
{
	setlocale(LC_ALL, "");
	var var;
	std::cout << " строк\n";
	var.s;
	cut::fst_menu();
	var.input();
	var.outt(var.s);
	var.rand_this_fckg_shit();
	return 0;
}