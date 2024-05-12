#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
	cv::Mat image = cv::imread("example.jpg");
	if (image.empty()) {
		std::cout << "이미지를 불러올 수 없습니다." << std::endl;
		return -1;
	}
	cv::imshow("Image", image);
	cv::waitKey(0);
	return 0;
}