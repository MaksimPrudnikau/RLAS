#pragma once

using namespace std;

struct Point
{
	double
		x,
		y;
	double length;
};

//������������ ����
struct Angle
{
	double
		grad,
		min,
		sec;
};

//���� ��������� �����
void importPoints(vector<Point>& points);

//���� ������������ �����
void importAngles(Angle& angle, string angle_name);

double ctg(Angle angle);

//������ ���������� ���� Y
double setCtgY(vector<Point> points, Angle alpha, Angle beta);
//������ Z
double setZ(vector<Point> points, Angle alpha, Angle beta, double ctgY);

void getStationCoordinates(double x, double y);

//���������� ��������� ��������� ������
void setAndGetStationCoordinates(vector<Point> points, double z, double ctgY);