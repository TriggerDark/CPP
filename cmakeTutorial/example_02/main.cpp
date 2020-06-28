#include <iostream>
#include <cmath>
#include "ExampleConfig.h"

int main(int argc, char** argv) {
	if (argc < 2)
		return 1;
	double inputValue = atof(argv[1]);
	double outputValue = sqrt(inputValue);
	std::cout << inputValue << "的平方根为：" << outputValue << std::endl;
}
