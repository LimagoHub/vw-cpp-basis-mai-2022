// Tag3_06Calculator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalculatorSecure.h"
#include "CalcClient.h"
int main()
{
	CalculatorImpl impl;
	CalculatorLogger logger{ impl };
	CalculatorSecure secure{ logger };
	CalcClient client{secure};
	client.run();
}

