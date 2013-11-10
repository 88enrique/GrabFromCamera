/**
    Opencv example code: camera frame grabbing
    Enrique Marin
    88enrique@gmail.com
*/

#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>

using namespace std;
using namespace cv;

int main(){

    // Variables
    VideoCapture capture;
    Mat frame;

    // Initialise capture device
    capture.open(0);
    if (!capture.isOpened()){
        printf("No camera detected\n");
        return -1;
    }

    // Read frames from the device
    while (1){
        // Read frame
        capture.read(frame);

        // Show frame
        imshow("Camera", frame);

        // Press ESC for exit
        if ((cvWaitKey(10) & 255) == 27) break;
    }

    // Release memory
    frame.release();

    return 0;
}

