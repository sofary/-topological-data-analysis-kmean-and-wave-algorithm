//
// Created by archi on 27.02.2021.
//

#ifndef TDA_ARKHIPOVA_CLUSTER_H
#define TDA_ARKHIPOVA_CLUSTER_H


#include "Point.h"
#include <vector>


using namespace std;

class Cluster {
public:

    vector<Point> points;

    void add(Point p);
    vector<double> find_vectors();//function that finds
    Point find_mass_centre();
};



#endif //TDA_ARKHIPOVA_CLUSTER_H
