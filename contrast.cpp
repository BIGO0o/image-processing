#include "contrast.h"
using namespace cv;
using namespace std;

contrast::contrast(Mat& src, Mat& dst) {
    this->src = src;
    this->dst = dst;
    HEIGHT = src.rows;
    WIDTH = src.cols;
}

//verticaal
void contrast::process(void) {
    int h, w, temp = 0;
    for (h = 0; h < HEIGHT; h++) {
        for (w = 0; w < WIDTH; w++) {

            temp = src.at<uchar>(h, w);  // tijdelijk de pixel waarden opslaan
            dst.at<uchar>(h, w) = (float)(temp - 3) / (95 - 3) * 255;; //inverteer grijswaarde
        }
    }
}
// (float)(temp-103) / (255 - 103) * 255;