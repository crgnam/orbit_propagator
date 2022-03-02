# Orbit Propagator Test Project

## Build instructions (Linux/WSL)
```
mkdir build
cd build
cmake ..
make
```

## What has been done:
CMakeLists.txt has been configured so that building the project is easy.  You just need to fill in the headers and source files appropriately.

## What to do:
Basically, this project is structured such that you have a `Trajectory` class which stores an array of length 6, where the first 3 elements are the position and the final 3 elements are the velocity.  Currently in main.cpp, they are defaulted to some ISS orbital states.

You'll need to:

- [ ] fill in the `dynamics` method with the first order differential equations for projectile motion, where gravity is: -mu/|r|^3 * r
- [ ] Implement `rk4` 
- [ ] Implement the `propagate` method to call `rk4` and pass a pointer to `dynamics`