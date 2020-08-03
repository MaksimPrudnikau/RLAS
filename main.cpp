#include "headers.h"
#include "functions.h"

//�������� ������� ������� ����� ���������� �� �������� ������-���������
int main() 
{
	setlocale(LC_CTYPE, "RUS");

	vector<Point> points;
	Angle
		alpha,
		beta;
	importPoints(points);
	importAngles(alpha, "alpha");
	importAngles(beta, "beta");
	double ctgY = setCtgY(points, alpha, beta);
	double z = setZ(points, alpha, beta, ctgY);
	setAndGetStationCoordinates(points, z, ctgY);
	return 0;
}