#include <iostream>

#include <string>

using namespace std;

void print_info(string & s) {
	cout << "content =\"" << s << "\" ";
	cout << "capacity = " << s.capacity() << endl;
	cout << "is empty? " << (s.empty() ? "yes" : "no") << endl;
	cout << "---------" << endl;
}

int main(void) {
	string the_string = "content";
	print_info(the_string);
	the_string.resize(50, '?');
	print_info(the_string);
	the_string.resize(4);
	print_info(the_string);
	the_string.clear();
	print_info(the_string);

	return 0;
}