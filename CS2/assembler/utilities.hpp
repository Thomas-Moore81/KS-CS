#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include "../string/string.hpp"
#include "stack.hpp"
#include <fstream>

String infixToPostfix(std::ifstream& input, std::ostream& output);
String toAssembly(String expr);
String opcodes(String oper);
String evaluate(String& left, String& right, String& oper, int temp);
String intToString(int num);

#endif
