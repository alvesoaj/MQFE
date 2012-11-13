/*
 * Ant.h
 *
 *  Created on: Aug 10, 2012
 *      Author: aj.alves@zerokol.com
 */

#ifndef ANT_H_
#define ANT_H_

// Importando bibliotecas necessárias
#include <vector>
using std::vector;

class Ant {
public:
	// Constantes
	static const int IDLE = 0;
	static const int ALTERNATE = 1;
	static const int RANDOM = 2;
	static const int COST = 100;
	static const int COVERAGE = -100;

	// Construtor
	Ant();
	Ant(int id, int trail);
	// Métodos
	int getID();
	int getTrailMode();
	void setTrailMode(int tm);
	double getCost();
	void setCost(double cos);
	double getCoverage();
	void setCoverage(double cov);
	double getQuality();
	void setQuality(double q);
	int getRouteSize();
	void addToRoute(int point);
	void incraseCost(double cos);
	void incraseCoverage(double cov);
	void restartSearch();
	vector<int> getRoute();
	int getPosition();
	bool checkVisitIn(int pos);

private:
	// Variáveis
	int id;
	int trailMode;
	double cost;
	double coverage;
	double quality;
	vector<int> route;
};

#endif /* ANT_H_ */
