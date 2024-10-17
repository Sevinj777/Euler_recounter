/*
 * euler_mod.cxx
 * 
 * Copyright 2024 stud-06 <stud-06@stud06-desktop>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include "euler.h"



int main()
{
	double x0=0;
	double y0=3;
	std::vector<std::pair<double, double>> xy= euler(x0, y0);
	std::cout<<"{";
	for(size_t i=0; i<xy.size()-1; i++)
		std::cout<<"{"<<xy[i].first <<","<< xy[i].second <<"},"<<"\n";
	std::cout<<"{"<<xy[xy.size()-1].first<<","<<xy[xy.size()-1].second<<"}}";
	return 0;
}

