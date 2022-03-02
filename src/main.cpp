#include <iostream>

#include "trajectory.hpp"
#include "rk4.hpp"

int main() {
    // Declare and instantiate array of states:
    double X[6] = {6394.179099986180, -1754.014609652220, -1484.810000361760, 0.04420749667441, 5.03343755477428, -5.77838841266144};

    // Create the orbit instance:
    Trajectory traj(X);

    // Propagate the trajectory:
    double dt = 10.0;
    traj.propagate(dt);

    // Display the propagated result:
    std::cout << "[" << traj.X[0] << "\n" 
                     << traj.X[1] << "\n"
                     << traj.X[2] << "\n"
                     << traj.X[3] << "\n"
                     << traj.X[4] << "\n"
                     << traj.X[5] << "]\n";
}