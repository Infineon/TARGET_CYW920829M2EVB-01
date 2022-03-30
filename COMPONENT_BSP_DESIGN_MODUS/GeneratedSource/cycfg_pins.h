/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* mtb-pdl-cat1 2.4.0.0
* personalities 6.0.0.0
* udd 3.0.0.2024
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
    #define CYBSP_USER_LED1 (P0_0)
    #define CYBSP_PDM_CLK CYBSP_USER_LED1
    #define CYBSP_USER_LED CYBSP_USER_LED1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USER_LED2 (P0_1)
    #define CYBSP_PDM_DATA CYBSP_USER_LED2
    #define CYBSP_A2 CYBSP_USER_LED2
    #define CYBSP_SPI_CS CYBSP_USER_LED2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P0_2)
    #define CYBSP_A3 CYBSP_I2C_SCL
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P0_3)
    #define CYBSP_I2S_DI CYBSP_I2C_SDA
    #define CYBSP_A4 CYBSP_I2C_SDA
    #define CYBSP_D12 CYBSP_I2C_SDA
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2S_MCLK1 (P0_4)
    #define CYBSP_A5 CYBSP_I2S_MCLK1
    #define CYBSP_D3 CYBSP_I2S_MCLK1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2S_SCK (P0_5)
    #define CYBSP_D13 CYBSP_I2S_SCK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2S_WS (P1_0)
    #define CYBSP_D10 CYBSP_I2S_WS
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2S_D0 (P1_1)
    #define CYBSP_D11 CYBSP_I2S_D0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDIO (P1_2)
    #define CYBSP_D5 CYBSP_SWDIO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SWDCK (P1_3)
    #define CYBSP_D4 CYBSP_SWDCK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D6 (P1_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D7 (P1_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D8 (P1_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CSN0 (P2_0)
    #define CYBSP_QSPI_SS CYBSP_SPI_CSN0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_SIO3 (P2_1)
    #define CYBSP_QSPI_D3 CYBSP_SPI_SIO3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_SIO2 (P2_2)
    #define CYBSP_QSPI_D2 CYBSP_SPI_SIO2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MISO (P2_3)
    #define CYBSP_QSPI_D1 CYBSP_SPI_MISO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MOSI (P2_4)
    #define CYBSP_QSPI_D0 CYBSP_SPI_MOSI
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CLK (P2_5)
    #define CYBSP_QSPI_SCK CYBSP_SPI_CLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LIGHT_SENSOR (P3_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_BT_UART_RTS (P3_1)
    #define CYBSP_DEBUG_UART_RTS CYBSP_BT_UART_RTS
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_BT_UART_RX (P3_2)
    #define CYBSP_DEBUG_UART_RX CYBSP_BT_UART_RX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_BT_UART_TX (P3_3)
    #define CYBSP_DEBUG_UART_TX CYBSP_BT_UART_TX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D0 (P3_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D1 (P3_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_THERMISTOR (P3_6)
    #define CYBSP_A0 CYBSP_THERMISTOR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D2 (P3_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_BT_UART_CTS (P4_0)
    #define CYBSP_DEBUG_UART_CTS CYBSP_BT_UART_CTS
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USER_BUTTON (P4_1)
    #define CYBSP_USER_BTN CYBSP_USER_BUTTON
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_XTAL1 (P5_0)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_XTAL0 (P5_1)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A1 (P5_2)
#endif //defined (CY_USING_HAL)


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
