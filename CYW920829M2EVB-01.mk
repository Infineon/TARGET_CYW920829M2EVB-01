################################################################################
# \file CYW920829M2EVB-01.mk
#
# \brief
# Define the CYW920829M2EVB-01 target.
#
################################################################################
# \copyright
# Copyright 2019-2021 Cypress Semiconductor Corporation (an Infineon company) or
# an affiliate of Cypress Semiconductor Corporation
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
################################################################################

ifeq ($(WHICHFILE),true)
$(info Processing $(lastword $(MAKEFILE_LIST)))
endif

# Set the default build recipe for this board if not set by the user
include $(dir $(lastword $(MAKEFILE_LIST)))/locate_recipe.mk

# Default core is M33
CORE:=CM33

# MCU device selection
#    Changing the device should be done using "make bsp" or "make update_bsp" with the "DEVICE_GEN"
#    variable set to the new MCU. If you change the device manually here you must also update the
#    design.modus file and re-run the device configurator. (TODO: Replace with MPN in PDL)
DEVICE:=CYW20829A0LKML

# Additional devices on the board
#    If you change the additional device here you must also update the design.modus file and re-run
#    the device configurator. You may also need to update the COMPONENT variable to include the
#    correct Wi-Fi and Bluetooth firmware.
ADDITIONAL_DEVICES:=

# Additional components supported by the target
COMPONENTS+=$(TARGET) CAT1 CAT1B BSP_DESIGN_MODUS FIRMWARE-TX10 BTSS-IPC

# APP_IMAGE_TYPE
APPTYPE?=flash
# Set APP_SECURITY_TYPE to NORMAL_NO_SECURE for un-signed image
# Set APP_SECURITY_TYPE to SECURE for signed image
APP_SECURITY_TYPE?=NORMAL_NO_SECURE

# Use CyHAL
DEFINES+=CY_USING_HAL

# Path to the params blob for provisioning
CY_BSP_PROVISION_NORMAL_NON_SECURE_BINARIES=$(CY_TARGET_DIR)/provision/in_params.bin

# Path to the flash loaders to patch for this board
CY_QSPI_FLM_DIR=$(CY_TARGET_DIR)/COMPONENT_BSP_DESIGN_MODUS/FlashLoaders/

# Path to the patched flash loaders for this board
CY_QSPI_FLM_DIR_OUTPUT=$(CY_TARGET_DIR)/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/
