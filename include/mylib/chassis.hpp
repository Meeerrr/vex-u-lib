#pragma once
#include "api.h"

namespace mylib { // Wrap everything in your namespace

    class Chassis {
        public:
            /**
             * @brief Constructor
             * @param leftPorts Examples: {1, -2, 3} (Negative means reversed)
             * @param rightPorts Examples: {4, -5, 6}
             */
            Chassis(std::initializer_list<std::int8_t> leftPorts, std::initializer_list<std::int8_t> rightPorts);

            /**
             * @brief Drive the robot (Arcade control)
             * @param forward Speed (-127 to 127)
             * @param turn Turn speed (-127 to 127)
             */
            void arcade(int forward, int turn);

        private:
            // We use 'MotorGroup' because you likely have multiple motors per side
            pros::MotorGroup leftMotors;
            pros::MotorGroup rightMotors;
    };

}