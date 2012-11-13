/*
 * Ant.cpp
 *
 *  Created on: Aug 10, 2012
 *      Author: aj.alves@zerokol.com
 */

#include "Ant.h"

// Implementação do construtor
Ant::Ant() {
}

Ant::Ant(int id, int trailMode) {
	this->id = id;
	this->trailMode = trailMode;
	this->cost = 0;
	this->coverage = 0;
	this->quality = 0;
}

int Ant::getID() {
	return this->id;
}

int Ant::getTrailMode() {
	return this->trailMode;
}

void Ant::setTrailMode(int tm) {
	this->trailMode = tm;
}

double Ant::getCost() {
	return this->cost;
}

void Ant::setCost(double cos) {
	this->cost = cos;
}

double Ant::getCoverage() {
	return this->coverage;
}

void Ant::setCoverage(double cov) {
	this->coverage = cov;
}

double Ant::getQuality() {
	return this->quality;
}

void Ant::setQuality(double q) {
	this->quality = q;
}

int Ant::getRouteSize() {
	return this->route.size();
}

void Ant::addToRoute(int point) {
	this->route.push_back(point);
}

void Ant::incraseCost(double cos) {
	this->cost += cos;
}

void Ant::incraseCoverage(double cov) {
	this->coverage += cov;
}

void Ant::restartSearch() {
	vector<int> newRoute;
	newRoute.push_back(this->route.at(0));
	this->route = newRoute;
	this->cost = 0;
	this->coverage = 0;
	this->quality = 0;
}

vector<int> Ant::getRoute() {
	return this->route;
}

int Ant::getPosition() {
	return this->route[this->route.size() - 1];
}

bool Ant::checkVisitIn(int pos) {
	for (unsigned int i = 0; i < this->route.size(); i++) {
		if (this->route[i] == pos) {
			return true;
		}
	}
	return false;
}
