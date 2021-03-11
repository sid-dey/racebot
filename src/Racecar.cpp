#include "Racecar.hpp"
#include <iostream>
#include <vector>

Racecar::Racecar(std::vector<double> x0) {
  _time.push_back(0);
  _state = x0;
  _state_array.push_back(_state);
  _input_array.push_back({0, 0});
  // name = "";
  _rover_x_bounds =
      std::vector<double>{-_wheelbase / 3, -_wheelbase / 3, 2 * _wheelbase / 3};
  _rover_y_bounds = std::vector<double>{-_height / 2, _height / 2, 0};
}

std::vector<double> dynamics(Racecar R, double t, std::vector<double> z,
                             std::vector<double> Tnom,
                             std::vector<std::vector<double>> Unom,
                             bool brake) {

  //  Interpolate w / zero order hold
  // Extrapolates inputs in case t is outside range of Tnom
  // U = interp1(Tnom, Unom, t, 'previous', 'extrap');

  // for (int i = 0; i < Tnom.size(); i++) {
    
  // }

  // v_des = min(max(U(1), R.min_v), R.max_v);
  // d_des = min(max(U(2), R.min_steering), R.max_steering);

  // psi = z(3);
  // vx = z(4);
  // c = R.coeff;

  // pd = tan(c(1) * d_des + c(2)) * vx / (c(3) + c(4) * vx ^ 2);
  // vy = pd * (c(8) + c(9) * vx ^ 2);
  // xd = vx * cos(psi) - vy * sin(psi);
  // yd = vx * sin(psi) + vy * cos(psi);
  // vxd = c(5) + c(6) * (vx - v_des) + c(7) * (vx - v_des) ^ 2;
  // zd = [xd yd pd vxd]';

  // //  % In case rover crashes, stop simulation/rover.
  // if brake zd = zeros(4, 1);

  std::cout << "Instance function not ready yet" << std::endl;
  return std::vector<double> {0,0,0,0};
}

