#ifndef RACECAR_HPP
#define RACECAR_HPP

#include <vector>

class Racecar {
private:
  std::vector<double> _time;
  std::vector<double> _state;
  std::vector<std::vector<double>> _state_array;
  std::vector<std::vector<double>> _input_array;
  const double _coeff[9] = {
      0.000016614664891, -0.000000195546174, 0.000003619042463,
      0.000000438199867, -0.081112039381716, -1.473644114877512,
      0.125688871505601, 0.076458603684900,  -0.013991208725085};

  const double _wheelbase = 0.5;
  const double _height = 0.25;
  std::vector<double> _rover_x_bounds;
  std::vector<double> _rover_y_bounds;

  const double _max_steering = 0.4; // radians
  const double _min_steering = -0.4; // radians
  const double _max_v = 3;           // m/s
  const double _min_v = -3;          // m/s

public:
  Racecar(std::vector<double> x0);

  std::vector<double> dynamics(Racecar R, double t, std::vector<double> z, std::vector<double> Tnom, std::vector<std::vector<double>> Unom, bool brake);

};

#endif //RACECAR_HPP

