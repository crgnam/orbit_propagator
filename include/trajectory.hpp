class Trajectory {
    public:
        double X[6];

        Trajectory(double X[6]);
        void dynamics();
        void propagate(double dt);
};