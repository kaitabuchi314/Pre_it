#pragma once

class PrinteyPrinter
{
public:
	void Println(const char* text);
	void Print(const char* text);
	void PrintError(const char* code);
	void PrintWarning(const char* warning);
};