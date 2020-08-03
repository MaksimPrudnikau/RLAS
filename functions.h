#pragma once

using namespace std;

struct Point
{
	double
		x,
		y;
	double length;
};

//Дирекционный угол
struct Angle
{
	double
		grad,
		min,
		sec;
};

//Ввод координат точек
void importPoints(vector<Point>& points);

//Ввод дирекционных углов
void importAngles(Angle& angle, string angle_name);

double ctg(Angle angle);

//Расчёт котангенса угла Y
double setCtgY(vector<Point> points, Angle alpha, Angle beta);
//Расчёт Z
double setZ(vector<Point> points, Angle alpha, Angle beta, double ctgY);

void getStationCoordinates(double x, double y);

//Вычисление координат исходного пункта
void setAndGetStationCoordinates(vector<Point> points, double z, double ctgY);