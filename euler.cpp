#include "euler.h"

double function(std::pair<double, double> z){
	return z.second - z.first*z.first*z.first;
	
}

std::vector<std::pair<double, double>> euler(double x0, double y0){
	double h=0.01;
	std::vector<std::pair<double, double>> dots(101);
	std::vector<double> y_s(101);
	dots[0].first=x0;
	for(int i=0; i<100; i++)
		dots[i+1].first=dots[i].first+h;
	dots[0].second=y0;
	for(int i=0; i<100; i++){
		y_s[i+1]=dots[i].second + h*function(dots[i]);
		dots[i+1].second = dots[i].second + (h/2)*(function(dots[i]) + function(std::make_pair(dots[i+1].first, y_s[i+1])));
	}
	
	return dots;	
	
}
