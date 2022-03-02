#include <iostream>

#include "rk4.hpp"
#include "trajectory.hpp"

// Define the constructor:
Trajectory::Trajectory(double X[6]) {
    for (int ii = 0; ii < 6; ++ii){
        this->X[ii] = X[ii];
    }
}

// Define the dynamics model:
void Trajectory::dynamics(){
}

// Define the propagator method:
void Trajectory::propagate(double dt){
    // rk4(dynamics, dt, this->X)
    std::cout<< "Hello from inside trajectory\n";
}