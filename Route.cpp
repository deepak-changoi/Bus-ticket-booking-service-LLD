#include "Route.h"
#include <bits/stdc++.h>
using namespace std;

Route::Route(string id, string start, string destination)
    : routeId(id), start(start), destination(destination) {}

void Route::showRoute()
{
    cout << "Route: " << start << " to " << destination << endl;
}