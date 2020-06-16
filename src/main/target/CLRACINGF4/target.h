/*
* This file is part of INAV Project.
*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*
* Alternatively, the contents of this file may be used under the terms
* of the GNU General Public License Version 3, as described below:
*
* This file is free software: you may copy, redistribute and/or modify
* it under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your
* option) any later version.
*
* This file is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see http://www.gnu.org/licenses/.
*/

#pragma once

#define TARGET_BOARD_IDENTIFIER "CLR4"

#define USBD_PRODUCT_STRING "CLRACINGF4"

#define USE_TARGET_CONFIG

#define LED0     PB5
#define BEEPER   PB4
#define BEEPER_INVERTED

#define INVERTER_PIN_UART PC0

#define USE_MPU_DATA_READY_SIGNAL

#define GYRO_INT_EXTI            PC4
#define USE_EXTI

#define USE_IMU_MPU6000
