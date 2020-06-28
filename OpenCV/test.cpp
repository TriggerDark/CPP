#include<iostream>
#include<opencv2/opencv.hpp>

int main(int argc, char** argv) {
	cv::Mat img = cv::imread(argv[1], -1);
	if (img.empty()) return -1;
	cv::namedWindow("test", cv::WINDOW_AUTOSIZE);
	cv::imshow("test", img);
	cv::waitKey(0);
	cv::destroyWindow("test");
	return 0;
}
