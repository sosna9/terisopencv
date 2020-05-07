#include <funcs.h>
#include <opencv2/core.hpp>
#include <opencv2\opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
double Basicfunctions::test(double a, double b)
{
    return a + b;
};
void Basicfunctions::startscreen(void)
{
	Mat image = Mat::zeros(600, 450, CV_8UC3);
	// Game welcoming screen
	while (true)
	{
		if (image.empty())
			break;

		putText(image, "Tetriz", Point(120, image.rows * 0.3), FONT_HERSHEY_DUPLEX, 2, Scalar(255, 20, 147), 2);
		putText(image, "PRESS ANY KEY TO PLAY", Point(60, image.rows * 0.5 + 10), FONT_HERSHEY_DUPLEX, 0.8, Scalar(255, 255, 255), 1);
		// Image is shown in the window
		imshow("Tetris", image);
		// To close the window
		if (waitKey(10) >= 0)
			break;
	}
};
void Basicfunctions::showtestscreen(void)
{
	Mat image = Mat::zeros(600, 450, CV_8UC3);
	putText(image, "a, w, d Test, esc to quit", Point(60, image.rows * 0.5 + 10), FONT_HERSHEY_DUPLEX, 0.8, Scalar(255, 255, 255), 1);
	imshow("Tetris", image);
}