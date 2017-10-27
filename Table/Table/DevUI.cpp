#include "stdafx.h"
#include <iostream>
#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>


using namespace std;
using namespace cv;

class DevUI {

public:

	int bar1 = 0;
	int bar2 = 0;
	int bar3 = 0;
	int bar4 = 0;
	int bar5 = 0;

	void DevWindow() {


		namedWindow("Dev UI", CV_WINDOW_AUTOSIZE);
		createTrackbar("tresholde value", "Dev UI", &bar1, 255, 0);
		createTrackbar("value2", "Dev UI", &bar2, 255, 0);
		createTrackbar("value3", "Dev UI", &bar3, 255, 0);
		createTrackbar("value4", "Dev UI", &bar4, 255, 0);
		createTrackbar("value5", "Dev UI", &bar5, 255, 0);




	}

};