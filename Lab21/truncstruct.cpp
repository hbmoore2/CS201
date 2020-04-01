//
//truncstruct.cpp
//Harrison Moore
//CS201
//April 1, 2020
//

#include "truncstruct.hpp"
// For struct StringInfo definition
#include <string>
using std::string;
#include <cctype>
using std::toupper;

// trunc
// (See header for description.)
StringInfo trunc(const StringInfo& stringInfo) {
	// Get input string & maxlen
	string s = stringInfo.str;
	auto maxlen = stringInfo.len;
	if (maxlen < 0) {
		maxlen = 0;
	}
	// Truncate string & get its new length
	s = s.substr(0, maxlen);
	auto len = (s.size());

	// Convert string to upper-case
	for (std::size_t i = 0; i < len; ++i) {
		s[i] = char(toupper(s[i]));
	}
	// Create return value
	return StringInfo{ s, len };
}

// trunc8
// (See header for description.)
StringInfo trunc8(const string& str) {
	return trunc(StringInfo{ str, 8 });
}