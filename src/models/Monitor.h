/*
 * Monitor.h
 *
 *  Created on: Sep 13, 2012
 *      Author: zerokol
 */

#ifndef MONITOR_H_
#define MONITOR_H_

// Importando bibliotecas necessárias
#include <math.h>
#include <vector>
using std::vector;

class Monitor {
private:
	static const int a = 1;
	static const int b = 2;
	static const int c = 0;
public:
	Monitor();

	double getCost(double cost);
	double getCoverage(double cost);
	double getQuality(double value);
};

#endif /* MONITOR_H_ */
