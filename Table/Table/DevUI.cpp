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

	int barMax = 255;



	void DevWindow() {

		void on_track(int, void *); {
			bar1 + 1;

		}

		namedWindow("Dev UI", CV_WINDOW_AUTOSIZE);
		createTrackbar("tresholde value", "Dev UI", &bar1, barMax, on_track);
		createTrackbar("value2", "Dev UI", &bar2, barMax, 0);
		createTrackbar("value3", "Dev UI", &bar3, barMax, 0);
		createTrackbar("value4", "Dev UI", &bar4, barMax, 0);
		createTrackbar("value5", "Dev UI", &bar5, barMax, 0);




	}

};