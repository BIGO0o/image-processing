#include "inverteer.h"
using namespace cv;
using namespace std;

    inverteer::inverteer(Mat& src, Mat& dst) {
    this->src = src;
    this->dst = dst;
    HEIGHT = src.rows;
    WIDTH = src.cols;
}

//verticaal
void inverteer::process(void) {
    int h, w, temp = 0;
    for (h = 0; h < HEIGHT; h++) {
        for (w = 0; w < WIDTH; w++) {

            temp = src.at<uchar>(h, w);  // tijdelijk de pixel waarden opslaan
            dst.at<uchar>(h, w) = 255 - temp; //inverteer grijswaarde
        }
    }
}
