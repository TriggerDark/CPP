#include<iostream>
#include<cmath>

// 计算一个数的平方根
int main(int argc, char** argv) {
	std::cout << argc << std::endl;
	if (argc < 2) 
		return 1;

	double inputValue = atof(argv[1]);
	double outputValue = sqrt(inputValue);
	std::cout << inputValue << "的平方根为：" << outputValue << std::endl;
}
