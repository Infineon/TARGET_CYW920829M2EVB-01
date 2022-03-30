# CYW920829M2EVB-01 BSP

## Overview

The Infineon AIROC™ CYW20829 Bluetooth® LE evaluation kit (CYW92089M2EVB-01) enables evaluation, prototyping, and development of a wide array of IoT applications using the AIROC™ CYW20829, a low power and high performance Bluetooth® LE MCU.
    



To use code from the BSP, simply include a reference to `cybsp.h`.

## Features

### Kit Features:

* AIROC™ CYW20829 Bluetooth® LE MCU in 56 pin QFN package
* Arduino compatible headers for hardware expansion
* On-board sensors - an ambient light sensor, thermistor, Infineon analog microphone, and Infineon digital microphone
* User switches and LEDs
* USB connector for power, programming and USB-UART bridge

### Kit Contents:

* Base Board - CYW9BTM2BASE1
* CYW920829M2IPA1 Bluetooth® radio card (pre-assembled on base board M.2 connector)
* USB Standard-A to Micro-B cable

## BSP Configuration

The BSP has a few hooks that allow its behavior to be configured. Some of these items are enabled by default while others must be explicitly enabled. Items enabled by default are specified in the CYW920829M2EVB-01.mk file. The items that are enabled can be changed by creating a custom BSP or by editing the application makefile.

Components:
* Device specific category reference (e.g.: CAT1) - This component, enabled by default, pulls in any device specific code for this board.
* BSP_DESIGN_MODUS - This component, enabled by default, causes the Configurator generated code for this specific BSP to be included. This should not be used at the same time as the CUSTOM_DESIGN_MODUS component.
* CUSTOM_DESIGN_MODUS - This component, disabled by default, causes the Configurator generated code from the application to be included. This assumes that the application provides configurator generated code. This should not be used at the same time as the BSP_DESIGN_MODUS component.

Defines:
* CYBSP_WIFI_CAPABLE - This define, disabled by default, causes the BSP to initialize the interface to an onboard wireless chip if it has one.
* CY_USING_HAL - This define, enabled by default, specifies that the HAL is intended to be used by the application. This will cause the BSP to include the applicable header file and to initialize the system level drivers.
* CYBSP_CUSTOM_SYSCLK_PM_CALLBACK - This define, disabled by default, causes the BSP to skip registering its default SysClk Power Management callback, if any, and instead to invoke the application-defined function `cybsp_register_custom_sysclk_pm_callback` to register an application-specific callback.

### Clock Configuration

| Clock    | Source    | Output Frequency |
|----------|-----------|------------------|
| FLL      | IHO       | 96.0 MHz         |
| CLK_HF0  | CLK_PATH0 | 96 MHz           |
| CLK_HF1  | CLK_PATH0 | 96 MHz           |
| CLK_HF2  | CLK_PATH0 | 96 MHz           |
| CLK_HF3  | CLK_PATH1 | 24 MHz           |

### Power Configuration

* System Active Power Mode: LP
* System Idle Power Mode: Deep Sleep
* VDDA Voltage: 3300 mV
* VDDD Voltage: 3300 mV

See the [BSP Setttings][settings] for additional board specific configuration settings.

## API Reference Manual

The CYW920829M2EVB-01 Board Support Package provides a set of APIs to configure, initialize and use the board resources.

See the [BSP API Reference Manual][api] for the complete list of the provided interfaces.

## More information
* [CYW920829M2EVB-01 BSP API Reference Manual][api]
* [CYW920829M2EVB-01 Documentation](https://www.infineon.com/cms/en/product/promopages/airoc20829/)
* [Cypress Semiconductor, an Infineon Technologies Company](http://www.cypress.com)
* [Infineon GitHub](https://github.com/infineon)
* [ModusToolbox™](https://www.cypress.com/products/modustoolbox-software-environment)

[api]: https://infineon.github.io/TARGET_CYW920829M2EVB-01/html/modules.html
[settings]: https://infineon.github.io/TARGET_CYW920829M2EVB-01/html/md_bsp_settings.html

---
© Cypress Semiconductor Corporation (an Infineon company) or an affiliate of Cypress Semiconductor Corporation, 2019-2021.