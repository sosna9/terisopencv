#include <opencv2\opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <funcs.h>
#include <move.h>
using namespace cv;

int main() 
{
	struct fig
	{
		int x, y;
	} pointnow[4], pointafter[4];


	int figures[7][4] =
	{
		1,3,5,7, // 0	O			 		 				 			
		2,4,5,7, // 1	O	1		 2		 3		44		 5		66
		3,5,4,6, // 2	O	11		22		33		 4		 5		66
		3,5,4,7, // 3	O	 1		2		 3		 4		55
		2,3,5,7, // 4			
		3,5,7,6, // 5
		2,3,4,5, // 6
	};
	int field[10][20] = { 0 }; 
	//ultimately parameters in external file
	Basicfunctions start;
	start.startscreen();
	printf("duap");
	int key;
	Move move;
	while (true) //pêtla gry
	{
		start.showtestscreen();
		key = waitKey(0);
		move.keyboardinput(key);
		if (key == 27)
		{
			break;
		}
	}
	return 0;
}