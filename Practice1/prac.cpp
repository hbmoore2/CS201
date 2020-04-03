#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv) {

	// Create an empty map
	map<int, string> m;

	// Insert hardcoded values
	m.insert(pair<int, string>(0, "Foo"));
	m.insert(pair<int, string>(-2, "Im going to be removed :D"));
	m.insert(pair<int, string>(69, "Bar"));
	m.insert(pair<int, string>(1, "Baz"));
	m.insert(pair<int, string>(420, "Im just trying to be funny :("));
	m.insert(pair<int, string>(0xAAAAAA, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));

	// Remove a certain key
	m.erase(-2);

	// Print out the values in the map
	map<int, string>::iterator itr;
	for (itr = m.begin(); itr != m.end(); itr++) {
		printf("%i: %s\n", itr->first, itr->second.c_str());
	}

	// Return 0 to show success
	return 0;
}