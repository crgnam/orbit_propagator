#include <iostream>

#include "trajectory.hpp"
#include "rk4.hpp"

int main() {
    // Declare position and velocity array:
    double X[6];

    // Define initial values:


    // Create the orbit instance:
    Trajectory traj(X);

    // Propagate the trajectory:
    double dt = 10;
    traj.propagate(dt);

    // Display the propagated result:
    std::cout << "[" << traj.X[0] << "\n" 
                     << traj.X[1] << "\n"
                     << traj.X[2] << "\n"
                     << traj.X[3] << "\n"
                     << traj.X[4] << "\n"
                     << traj.X[5] << "]\n";
}