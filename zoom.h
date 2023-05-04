#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

class zoom
{
public:

	zoom(Mat& src, Mat& dst);
	void procces(void);
private:
	Mat src, dst;
	int HEIGHT, WIDTH;
};

