using namespace std;
#include <iostream>
#include "Viewer.h"

Viewer::Viewer() 
{
	mSize = 100;
}

void Viewer::Run()
{
	tem2DViewer();
}

//mPoints->이 변수에 저장되어있는 포인터들을 화면에 출력하는 함수를 작성하시오
void Viewer::tem2DViewer()
{
	mPoints = new Point[100];

	Point* MAP = new Point[mSize];
	int Max_X = 0; // MAP Size(동적)
	int Max_Y = 0; // MAP Size(동적)

	int MAP[mSize][mSize] = { 0, };
	int scaling = 3; // Scaling 변수
	for (int i = 0; i < size; i++) { // 저장된 맵의 크기를 지정 하지 못할때 해당 size 중 x,y좌표가 가장 큰 값을 MAX_X, MAX_Y를 받아온다.
		if (mPoints[i].getX() > Max_X) {
			Max_X = mPoints[i].getX();
		}
		if (mPoints[i].getY() > Max_Y) {
			Max_Y = mPoints[i].getY();
		}
	}

	for (int i = 0; i < size; i++) { // mPoints의 Example
		mPoints[i].setX(i);
		mPoints[i].setY(i);
	}
	for (int i = 0; i < mSize; i++) { // Scaling 작업
		mPoints[i].setPoint(mPoints[i].getX() / scaling, mPoints[i].getY() / scaling);
	}	
	for (int i = 0; i < mSize; i++) { // mPoints의 좌표값을 읽어 MAP에 표기하는 작업
		MAP[mPoints[i].getX()][mPoints[i].getY()] = 1;
	}

	for (int y = 0; y < size; y++) // 화면 출력
	{
		for (int x = 0; x < size; x++) {
			if (MAP[x][y] == 0) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	// cout << "MAX_X=" << Max_X << "\t" << "MAX_Y=" << Max_Y << endl; // 추후 Map 크기를 조절할 변수 
}