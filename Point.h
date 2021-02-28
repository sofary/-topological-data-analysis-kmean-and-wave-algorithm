//
// Created by archi on 27.02.2021.
//

#ifndef TDA_ARKHIPOVA_POINT_H
#define TDA_ARKHIPOVA_POINT_H


class Point {
public:
    const double eps = 0.0001;
    double x, y;

    bool operator==(Point b);
    Point operator= (Point b);
    bool operator!=(Point b);
    Point(double x, double y);
    double dist(Point b);
};

#endif //TDA_ARKHIPOVA_POINT_H
