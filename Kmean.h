//
// Created by archi on 27.02.2021.
//
#include <vector>
#include "Point.h"
#include "Cluster.h"
#include "Field.h"
#include <iostream>
#include <fstream>
#define PI 3.14159265

#ifndef TDA_ARKHIPOVA_KMEAN_H
#define TDA_ARKHIPOVA_KMEAN_H


class Kmean {
public:
    Field f;
    int ID=0;
    int points_nmb;
    vector<Cluster> clusters;
    int k;

    vector<Point> centres;
    vector<Point> old_centres;
    vector<Point> new_centres;
//first centres for k_mean iteration
    void make_first_centers();
    //iteration for kmean
    void iteration();
    void k_mean();
    //kmean algorithm, compare whether the centres are balanced
    void print_clusters(ofstream &out,string filename);
};



#endif //TDA_ARKHIPOVA_KMEAN_H
