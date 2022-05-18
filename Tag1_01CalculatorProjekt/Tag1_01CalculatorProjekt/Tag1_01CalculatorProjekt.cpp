// Tag1_01CalculatorProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "CalculatorClient.h"
#include "CalculatorImpl.h"
#include "CalculatorLogger.h"
#include "CalculatorSecure.h"
int main()
{
    Math::CalculatorImpl impl;
	Math::CalculatorLogger logger{ impl };
	Math::CalculatorSecure secure{ logger };
	CalculatorClient client{ secure };
	client.run();
}
