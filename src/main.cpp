#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main() {
  VideoCapture capture(0);
  Mat frame;
  while (capture.read(frame)) {
    imshow("frame", frame);
    char key = waitKey(33);
    if (key == 'q') break;
  }
  cout << "ok" << endl;
}