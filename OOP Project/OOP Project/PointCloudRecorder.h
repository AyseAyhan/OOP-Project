#pragma once
#include "PointCloud.h"
#include <string>
#include<fstream>
using namespace std;
class PointCloudRecorder :public PointCloud {
private:
	string fileName; ///name of file
public:
	PointCloudRecorder(string);
	void setfileName(string);
	string getfileName();
	bool save(PointCloud& pc);
};
