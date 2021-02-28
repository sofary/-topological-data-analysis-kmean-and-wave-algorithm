//
// Created by archi on 27.02.2021.
//


#include <vector>
#include <cmath>
#include <random>
#include "Point.h"
#include <time.h>

using namespace std;

#ifndef UNTITLED1_GROUP_H
#define UNTITLED1_GROUP_H


class Group {
public:
    vector<Point> points;

    void add(Point p);

    void make_group(double xsr, double ysr, double dispx, double dispy, int count);

};


#endif //TDA_ARKHIPOVA_GROUP_H
