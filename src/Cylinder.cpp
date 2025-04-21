# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <cmath>
using namespace std;

const double pi = M_PI;

double Cylinder :: SurfaceArea(){
    return pi * 2.00 * radius * (radius + height);
}

double Cylinder :: Volume(){
    return pi * radius * radius * height;
}

double Cylinder :: Circumference(){
    return pi * radius * 2.00;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << setprecision(3) << cldr.Volume() << endl;
    return out;
}

# endif
