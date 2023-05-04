#include "zoom.h"
using namespace cv;
using namespace std;

zoom::zoom(Mat& src, Mat& dst) {
    this->src = src;
    this->dst = dst;
    HEIGHT = src.rows;
    WIDTH = src.cols;
}

void zoom::procces(void) {
    int h, w, temp = 0;
    for (h = 0; h < HEIGHT; h++) {
        for (w = 0; w < WIDTH; w++) {

            temp = src.at<uchar>(h, w);  // tijdelijk de pixel waarden opslaan

            //dst.at<uchar>(h, WIDTH - w - 1) = temp; 
            dst.at<uchar>(HEIGHT - h - 1, WIDTH - w - 1) = temp;
        }
    }
}