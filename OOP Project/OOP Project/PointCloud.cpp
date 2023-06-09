#include "PointCloud.h"

PointCloud::PointCloud(int pointNumber) { 
	///constructor
	if (pointNumber >= 0) { //Dizi size negatif olmamali
		this->pointNumber = pointNumber;
		points = new Point[pointNumber];
	}
	else {
		this->pointNumber = 0;
		points = new Point[pointNumber];
	}
}

PointCloud::PointCloud(PointCloud& p) { 
	/// Copy constructor
	this->pointNumber = p.pointNumber;
	points = new Point[pointNumber];
	for (int i = 0; i < p.pointNumber; i++) {
		points[i] = p.points[i];
	}
}
void PointCloud::setpointNumber(int newpointNumber)
{
	///set size of array
	Point* tmppoints = new Point[newpointNumber];
	for (int i = 0; i < pointNumber; i++)
	{
		tmppoints[i] = points[i];
	}
	delete[] points;

	int oldPointNumber = pointNumber;
	pointNumber = newpointNumber;
	points = new Point[pointNumber];
	for (int i = 0; i < oldPointNumber; i++)
	{
		points[i] = tmppoints[i];
	}
	delete[] tmppoints;
}
int PointCloud::getpointNumber() { 
	/// return pointNumber(size of array)
	return this->pointNumber; }
Point* PointCloud::getPoints() {
	/// return array
	return points; }  
void PointCloud::setPoints(int i, Point p) { 
	/// assign value to array
	this->points[i] = p; }
PointCloud PointCloud::operator+(const PointCloud& p) {
		/// add two PointCloud
	int tempsize = p.pointNumber + this->pointNumber;
	PointCloud temp(tempsize);
	for (int i = 0; i < tempsize; i++) {
		if (i < p.pointNumber) {
			temp.points[i] = p.points[i];
		}
		if (i >= p.pointNumber) {
			temp.points[i] = this->points[i - p.pointNumber];
		}
	}
	return temp;
}

PointCloud PointCloud::operator=(const PointCloud& p) {
	/// equal operator overloading
	this->pointNumber = p.pointNumber;
	points = new Point[pointNumber];
	for (int i = 0; i < p.pointNumber; i++) {
		points[i] = p.points[i];
	}
	return *this;
}
