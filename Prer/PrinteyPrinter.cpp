#include "PrinteyPrinter.h"
#include <iostream>

void PrinteyPrinter::Println(const char* text)
{
	std::cout << text << "\n";
}
void PrinteyPrinter::Print(const char* text)
{
	std::cout << text;
}
void PrinteyPrinter::PrintError(const char* code)
{
	std::cout << "Error: " << code << "\n";
}
void PrinteyPrinter::PrintWarning(const char* warning)
{
	std::cout << "Warning: " << warning << "\n";
}