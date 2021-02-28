//
// Created by archi on 27.02.2021.
//
#include <string>
#include <vector>
#include "Field.h"

#include "Cluster.h"
#include "Wave.h"
#include "Kmean.h"



#define PI 3.14159265

class Functional {
public:


    Field f;
    Kmean kmean_search;
    Wave wave_search;

    vector<vector<Cluster>> searches;
    void gnunorm(double xsr, double ysr, double dispx, double dispy, int count);

    void gnurnd(int min, int max, int count);

    void turn(int id, double alpha);

    void move(int id, double distx, double disty);

    void stretch(int id, double x_stretch, double y_stretch);


    void make_wave(double porog);

    void tree();

    void make_k(int k);

    void hierarchical(int k);

    void forel(double r);

    void dbscan(int min_point, double r);

    void em(int cl);





};


