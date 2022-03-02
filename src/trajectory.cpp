#include "rk4.hpp"

class Trajectory {
    public:
        // Define the constructor:
        Trajectory(double X[6]){
            this->X = X;
        }

        // Define the dynamics model:
        dynamics(){
            return 0;
        }

        // Define the propagator method:
        propagate(double dt){
            // rk4(dynamics, dt, this->X)
            std::cout<< "Hello from inside trajectory\n";
            return 0;
        }

}