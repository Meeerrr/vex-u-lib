#include "mylib/chassis.hpp"

namespace mylib {

    // Constructor Implementation
    Chassis::Chassis(std::initializer_list<std::int8_t> leftPorts, std::initializer_list<std::int8_t> rightPorts) 
        : leftMotors(leftPorts), rightMotors(rightPorts) {
        
        // strict configuration: Set brake modes automatically
        leftMotors.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
        rightMotors.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
    }

    // Arcade Drive Implementation
    void Chassis::arcade(int forward, int turn) {
        // Simple arcade math
        leftMotors.move(forward + turn);
        rightMotors.move(forward - turn);
    }

    

}