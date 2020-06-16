/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/bus.h"

const timerHardware_t timerHardware[] = {
  // DEF_TIM(TIM11, CH1,  PB9, TIM_USE_CAMERA_CONTROL,      0, 0), // There is not camera control in INAV
  DEF_TIM(TIM1,  CH2N, PB0, TIM_USE_MC_MOTOR,            0, 0), // S1
  DEF_TIM(TIM8,  CH3N, PB1, TIM_USE_MC_MOTOR,            0, 0), // S2
  DEF_TIM(TIM2,  CH4,  PA3, TIM_USE_MC_MOTOR,            0, 1), // S3
  DEF_TIM(TIM1,  CH2N, PB0, TIM_USE_MC_MOTOR,            0, 0), // S4
  DEF_TIM(TIM3,  CH1,  PB4, TIM_USE_BEEPER,              0, 0), // BEEPER PWM
  DEF_TIM(TIM4,  CH3,  PB8, TIM_USE_LED,                 0, 0), // LED
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
