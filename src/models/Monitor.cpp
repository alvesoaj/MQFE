/*
 * Monitor.cpp
 *
 *  Created on: Sep 13, 2012
 *      Author: zerokol
 */

#include "Monitor.h"

Monitor::Monitor() {
	// TODO Auto-generated constructor stub
}

double Monitor::getCost(double cost) {
	return cost;
}

double Monitor::getCoverage(double cost) {
	return cost;
}

double Monitor::getQuality(double value) {
	return this->a * pow(value, 2) + this->b * pow(value, 1) + c;
}
