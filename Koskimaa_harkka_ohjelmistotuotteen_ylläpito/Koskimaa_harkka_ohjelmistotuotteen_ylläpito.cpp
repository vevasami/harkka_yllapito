// Koskimaa_harkka_ohjelmistotuotteen_ylläpito.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyRegistryClass.h"

#include <vector>
#include "MySystemQueryDLL.h"

int _tmain(int argc, _TCHAR* argv[])
{
	MyRegistryClass::MyRegistryClass* reg = new MyRegistryClass::MyRegistryClass();

	reg->openRegister("software\\vevarisami_2");
	
	reg->write("moro", "666122223");

	reg->write("hello", 3);

	reg->addValue("teppo", "moro");
	std::cout << "numberOfValues: " << reg->numberOfValues() << std::endl;
	
	char c;
	std::cout << "> ";
	std::cin >> c;

	reg->deleteValue("teppo");

	std::cout << "numberOfValues: " << reg->numberOfValues() << std::endl;
	
	std::cout << "> ";
	std::cin >> c;

	foo();

	reg->closeRegister();
	return 0;
}

