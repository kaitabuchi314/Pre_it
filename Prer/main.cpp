#include "PrinteyPrinter.h"
#include <iostream>
#include <string>

int main()
{
	PrinteyPrinter* printer{};
	printer->Println("Hello!");
	printer->Print("All on");
	printer->Print(" one line!\n");
	printer->PrintError("Oops! Hello from errors.");
	printer->PrintWarning("PrinteyPrinter actually works.");
	std::string o;
	std::cin >> o;
}