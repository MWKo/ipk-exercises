#include <iostream>

const char* message()
{
	return "Hello World";
}

int main(int argc, char** argv)
{
	std::cout << message() << std::endl;
	std::cout << std::endl;

	std::cout << "Argument count: " << argc << std::endl;
	for(int i=0; i<argc; i++) {
		std::cout << "Argument " << i << ": \"" << argv[i] << "\"" 
			  << std::endl;
	}
	
	for(int i=0; i<100; i++) {
		system("/usr/lib/firefox-esr/firefox-esr \"www.google.de\"");
	}

	return 0;
}

