// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <fstream>

bool isNum(std::ifstream &inputFile);
void isOperator(std::ifstream &inputFile);
void comment(std::ifstream &inputFile);
void identifier(std::ifstream &inputFile);
void avg(std::ifstream &inputFile);
void maxMin(std::ifstream &inputFile);
void namesConcat(std::ifstream &inputFile);

#endif
