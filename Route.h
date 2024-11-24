#ifndef ROUTE_H
#define ROUTE_H

#include <bits/stdc++.h>
using namespace std;

class Route
{
private:
    string routeId;
    string start;
    string destination;

public:
    Route(string id, string start, string destination);
    void showRoute();
};

#endif
