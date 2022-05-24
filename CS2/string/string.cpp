/**
 * Thomas Moore
 * String
 * CS 23001
 */

// This program will construct an ADT called "String"

#include <iostream>
#include "string.hpp"
#include <cassert>
#include <vector>


String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}

String::String(char x) {
    if (x == '\0') {
        stringSize = 1;
	    str = new char[stringSize];
        str[0] = 0; //null terminator
    }
    else {
        stringSize = 2;
        str = new char[stringSize];
        str[1] = 0;
        str[0] = x;
    }
}

String::String(const char input[]) {
    int index = 0;
    while (input[index] != '\0') {
        ++index;
    }
    stringSize = index + 1;
    str = new char[stringSize];
    for (int i = 0; i < index; ++i) {
        str[i] = input[i];
    }
    str[index] = '\0';
}

String::String(const String& rhs){
    stringSize = rhs.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; ++i) {
		str[i] = rhs.str[i];
    }
}

String::~String(){
    delete[] str;
}

int String::capacity() const{
    return stringSize - 1;
}

int String::length() const{ 
    int result = 0;
    while (str[result] != '\0') {
        ++result;
    }
    return result;
}

char& String::operator[](int i) {
    assert(i < length());
    assert(i >= 0);
    return str[i];
}

char String::operator[](int i) const{
    assert(i < length());
    assert(i >= 0);
    return str[i];
}

String& String::operator+=(const String& rhs) { 
    if(rhs == "") return *this;
    int lhsLen = length();
    int rhsLen = rhs.length();
    int combinedLen = length() + rhs.length();
    char* tempstr = new char[combinedLen + 1];

    for (int i = 0;i < lhsLen; ++i) {
        if (i <= combinedLen) {
            tempstr[i] = str[i];
        } 
    }
    stringSize = combinedLen + 1;
    delete[] str;
    str = tempstr;
    for (int k = 0; k < rhsLen; ++k) {
        str[lhsLen + k] = rhs[k];
    }
    str[combinedLen] = '\0';
    return *this;
}

bool String::operator==(const String& rhs) const{
    int i = 0;
    while ((str[i] != 0) && (str[i] == rhs.str[i]) && (rhs[i] != 0)) ++i;
    return str[i] == rhs.str[i];
}

bool String::operator<(const String& rhs) const{
    int i = 0;
    while ((str[i] != 0) && (str[i] == rhs.str[i]) && (rhs[i] != 0)) ++i;
    return str[i] < rhs.str[i];
}

String String::substr (int start, int end) const{ // add and change ifs
    if ((start < 0) || (start >= length())) return String();
    if (end < 0) return String();
    if (end < start) return String();
    
    char* tempstr = new char[end - start + 2];
    int i = start;
    int tempIndex = 0;
    while (i <= end) {
        tempstr[tempIndex] = str[i];
        ++i;
        ++tempIndex;
    }
    tempstr[end - start + 1] = 0; // 0 == '\0'
    String result = tempstr;
    delete[] tempstr;
    return result;
}

int String::findch (int start, char ch) const{
    int i = start;
    if ((start < 0) || (start >= length())) return -1;
    while (str[i] != 0) {
        if (str[i] == ch) return i;
        ++i;
    }
    return -1;
}

int String::findstr (int start, const String& rhs) const{
    if ((start < 0) || (start >= length())) return -1;

    for (int i = start; i - start < length(); ++i) {
        String substring = substr(i, rhs.length() + i - 1);
        if(rhs == substring) {
            return i;
        }
    }
    return -1;
}

std::istream& operator>>(std::istream& input, String& rhs) {
    char ch[500];
    input >> ch;
    rhs = String(ch);
    return input;
}

std::ostream& operator<<(std::ostream& output, const String& rhs) {
    output << rhs.str;
    return output;
}

String operator+(String lhs, const String& rhs) {
    return lhs += rhs;
}

bool operator==(const char lhs[],  const String& rhs) {
    return String(lhs) == rhs;
}

bool operator==(char lhs, const String& rhs) {
    return String(lhs) == rhs;
}

bool operator<(const char lhs[],const String& rhs){
    return String(lhs) < rhs;
}

bool operator<(char lhs, const String& rhs){
    return String(lhs) < rhs;
}

bool operator<=(const String& lhs, const String& rhs){
    return lhs < rhs || lhs == rhs;
}

bool operator!=(const String& lhs, const String& rhs){
    return !(lhs == rhs);
}

bool operator>=(const String& lhs, const String& rhs){
    return lhs > rhs || lhs == rhs;
}

bool operator>(const String& lhs, const String& rhs){
    return rhs < lhs;
}

void String::swap(String& rhs) {
    int captemp = rhs.stringSize;
	rhs.stringSize = stringSize;
	stringSize = captemp;

	char* temp = rhs.str;
	rhs.str = str;
	str = temp;
}

String& String::operator=(String rhs){
    swap(rhs);
    return *this;
}

std::vector<String> String::split(char ch) const {
    std::vector<String> splitVect;
    int start = 0;
    
    while (findch(start, ch) != -1) {
        splitVect.push_back(substr(start, findch(start, ch) -  1));
        start = findch(start, ch) + 1;
    }
    splitVect.push_back(substr(start, length() - 1));

    return splitVect;
}