# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>

const double pi = 3.142;

double Cylinder :: SurfaceArea(){
    double circle = radius * radius * pi * 2;
    double rectangle = 2.0 * radius * pi * height;
    return (circle + rectangle);
}

double Cylinder :: Volume(){
    double volume = radius * radius * pi * height;
    return volume;
}

double Cylinder :: Circumference(){
    double cir = radius * pi * 2.0 * 2.0;
    return cir;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << std::fixed << std::setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
