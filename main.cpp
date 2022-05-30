#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

struct covidMK

{
string grad;
int novi;
int ozdraveni;

    covidMK(const string& grad, int novi, int ozdraveni)

    : grad(grad), novi(novi), ozdraveni(ozdraveni){}

bool operator>(const covidMK& c) const
    {
        return novi > c.novi; //sporedba za sortiranje po novi
    }

};

struct SortPointers
{
    bool operator()(const covidMK* a, const covidMK* b) const
    {
        return *a > *b;
    }
};
