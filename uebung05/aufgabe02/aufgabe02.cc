#include <iostream>
#include <string>
#include <utility>

std::pair<int, int> parseInt(std::string number)
{
	int i = 0;
	while (i < number.size() && number[i] == ' ') i++;

	bool negative = false;
	if (i < number.size() && (number[i] == '+' || number[i] == '-')) {
		if (number[0] == '-') negative = true;
		i++;
	}

	if (i == number.size() || !(number[i] >= '0' && number[i] <= '9')) throw std::invalid_argument("String is not a number");
	
	int result = 0;
	while (i < number.size() && number[i] >= '0' && number[i] <= '9') {
		result *= 10;
		result += number[i] - '0';
		i++;
	}

	if (negative) result *= -1;

	return std::pair<int, int>(result, i);
}

int main(int argc, char** argv)
{
	if (argc > 1) {
		try {
			std::pair<int, int> res = parseInt(argv[1]);
			std::cout << "Number: " << res.first << std::endl;
			std::cout << "Index: " << res.second << std::endl;
		} 
		catch(const std::invalid_argument& ia) {
			std::cout << "Invalid Argument: " << ia.what() << std::endl;
		}
		return 0;	
	} else {
		std::cout << "Missing Argument" << std::endl;
		return 1;
	}
}
