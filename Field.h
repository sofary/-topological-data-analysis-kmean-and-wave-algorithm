//
// Created by archi on 27.02.2021.
//
#include <vector>
#include "Point.h"
#include "Cluster.h"
#include "Group.h"

#ifndef TDA_ARKHIPOVA_FIELD_H
#define TDA_ARKHIPOVA_FIELD_H


class Field {
public:
    vector<Group> groups;

    void add(Group g);

    vector<Point> all_points;

    void add_points(Group g);


};


#endif //TDA_ARKHIPOVA_FIELD_H
