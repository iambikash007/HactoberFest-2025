#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    // Load the image
    Mat image = imread("image.jpg");

    if (image.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }

    Mat rotated;

    // Rotate 90 degrees clockwise
    rotate(image, rotated, ROTATE_90_CLOCKWISE);
    // Other options:
    // ROTATE_90_COUNTERCLOCKWISE
    // ROTATE_180

    // Show images
    imshow("Original Image", image);
    imshow("Rotated Image", rotated);

    // Wait until a key is pressed
    waitKey(0);

    // Save the rotated image
    imwrite("rotated_image.jpg", rotated);

    return 0;
}
