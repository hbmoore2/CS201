//
//truncstruct.h
//Harrison Moore
//CS201
//April 1, 2020
//

#ifndef FILE_TRUNCSTRUCT_HPP_INCLUDED
#define FILE_TRUNCSTRUCT_HPP_INCLUDED

#include <string>

/**
 * Holds string and info about its length.
 */
struct StringInfo {
    std::string str;
    std::size_t len;
};

/**
 * Truncates given string to length at most given length (or 0 if
 * this is negative) and converted to upper-case.
 *
 * @param stringInfo struct with a string and a length of the string
 * @return New struct StringInfo of resulting string and its length.
 */
StringInfo trunc(const StringInfo& stringInfo);

/**
 * Truncates input string to length at most 8 and converted to
 * upper-case.
 *
 * @param str string
 * @return struct holding resulting string and its length.
 */
StringInfo trunc8(const std::string& str);

#endif //#ifndef FILE_TRUNCSTRUCT_HPP_INCLUDED