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

//mPoints->�� ������ ����Ǿ��ִ� �����͵��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��Ͻÿ�
void Viewer::tem2DViewer()
{
	mPoints = new Point[100];

	Point* MAP = new Point[mSize];
	int Max_X = 0; // MAP Size(����)
	int Max_Y = 0; // MAP Size(����)

	int MAP[mSize][mSize] = { 0, };
	int scaling = 3; // Scaling ����
	for (int i = 0; i < size; i++) { // ����� ���� ũ�⸦ ���� ���� ���Ҷ� �ش� size �� x,y��ǥ�� ���� ū ���� MAX_X, MAX_Y�� �޾ƿ´�.
		if (mPoints[i].getX() > Max_X) {
			Max_X = mPoints[i].getX();
		}
		if (mPoints[i].getY() > Max_Y) {
			Max_Y = mPoints[i].getY();
		}
	}

	for (int i = 0; i < size; i++) { // mPoints�� Example
		mPoints[i].setX(i);
		mPoints[i].setY(i);
	}
	for (int i = 0; i < mSize; i++) { // Scaling �۾�
		mPoints[i].setPoint(mPoints[i].getX() / scaling, mPoints[i].getY() / scaling);
	}	
	for (int i = 0; i < mSize; i++) { // mPoints�� ��ǥ���� �о� MAP�� ǥ���ϴ� �۾�
		MAP[mPoints[i].getX()][mPoints[i].getY()] = 1;
	}

	for (int y = 0; y < size; y++) // ȭ�� ���
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
	// cout << "MAX_X=" << Max_X << "\t" << "MAX_Y=" << Max_Y << endl; // ���� Map ũ�⸦ ������ ���� 
}