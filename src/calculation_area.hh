#ifndef CALCULATION_AREA_HH
#define CALCULATION_AREA_HH

#include "particle.hh"

#include <iostream>
#include <map>
#include <vector>


using namespace std;

class Calculation_area
{
public:
    Calculation_area(int height,int width, int wall_thickness);
    map<int,vector<particle>> hae_alue(); //returns calculation area as map
    void initialize_calculation_area();				//initializes particles to calculation area
    void add_particle(particle to_add);				//adds a particle to calculation area (map)
    void print_all();								//prints all particles in calculation area
    void move_particles();                           //moves individual particle by updating it's location

private:
    int area_height_;
    int area_width_;
    int area_wall_thickness_;

    map<int,vector<particle>> particles_;
};

#endif // CALCULATION_AREA_HH
