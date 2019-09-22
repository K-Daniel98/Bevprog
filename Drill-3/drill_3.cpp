#include "std_lib_facilities.h"

using namespace std;

int main()
{

	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age = 0;

	cout << "Enter the name of the person you want to write to" << endl;
	cin >> first_name;

	cout << "Dear " << first_name << ", How are you?" << endl;
	cout << "I am fine. I miss you." << endl;

	cout << "Enter the name of your friend" << endl;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	cout << "Enter the gender of your friend! Enter `m` - for male, `f` - for female" << endl;
	cin >> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
		cout << "How old is he?" << endl;
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
		cout << "How old is she?" << endl;
	}
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("You're kidding!");

	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

	if (age < 12)
		cout << "Next year you will be " << age + 1 << "." << endl;
	else if (age == 17)
		cout << "Next year you will be able to vote." << endl;
	else if (age > 70)
		cout << "I hope you are enjoying retirement." << endl;

	cout << "Yours sincerely," << endl << endl << "Daniel K.";

	return 0;
}