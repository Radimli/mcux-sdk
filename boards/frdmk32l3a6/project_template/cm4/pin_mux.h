/*
 * Copyright 2019-2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins_cm4(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTA0 (coord B10), BUTTON_NMI
  @{ */
/* Routed pin properties */
#define BOARD_INITBUTTONSPINS_SW2_PERIPHERAL GPIOA                  /*!<@brief Peripheral name */
#define BOARD_INITBUTTONSPINS_SW2_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITBUTTONSPINS_SW2_CHANNEL 0                         /*!<@brief Signal channel */
#define BOARD_INITBUTTONSPINS_SW2_PIN_NAME PTA0                     /*!<@brief Routed pin name */
#define BOARD_INITBUTTONSPINS_SW2_LABEL "BUTTON_NMI"                /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW2_NAME "SW2"                        /*!<@brief Identifier */
#define BOARD_INITBUTTONSPINS_SW2_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW2_GPIO GPIOA                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN 0U                       /*!<@brief GPIO pin number */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN_MASK (1U << 0U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW2_PORT PORTA                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW2_PIN 0U                            /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW2_PIN_MASK (1U << 0U)               /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PORTE8 (coord P16), BUTTON_LLWUP23
  @{ */
/* Routed pin properties */
#define BOARD_INITBUTTONSPINS_SW3_PERIPHERAL GPIOE                  /*!<@brief Peripheral name */
#define BOARD_INITBUTTONSPINS_SW3_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITBUTTONSPINS_SW3_CHANNEL 8                         /*!<@brief Signal channel */
#define BOARD_INITBUTTONSPINS_SW3_PIN_NAME PTE8                     /*!<@brief Routed pin name */
#define BOARD_INITBUTTONSPINS_SW3_LABEL "BUTTON_LLWUP23"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW3_NAME "SW3"                        /*!<@brief Identifier */
#define BOARD_INITBUTTONSPINS_SW3_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW3_FGPIO FGPIOE                      /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_GPIO GPIOE                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_GPIO_PIN 8U                       /*!<@brief GPIO pin number */
#define BOARD_INITBUTTONSPINS_SW3_GPIO_PIN_MASK (1U << 8U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW3_PORT PORTE                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW3_PIN 8U                            /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW3_PIN_MASK (1U << 8U)               /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PORTE9 (coord N16), BUTTON_LLWUP24
  @{ */
/* Routed pin properties */
#define BOARD_INITBUTTONSPINS_SW4_PERIPHERAL GPIOE                  /*!<@brief Peripheral name */
#define BOARD_INITBUTTONSPINS_SW4_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITBUTTONSPINS_SW4_CHANNEL 9                         /*!<@brief Signal channel */
#define BOARD_INITBUTTONSPINS_SW4_PIN_NAME PTE9                     /*!<@brief Routed pin name */
#define BOARD_INITBUTTONSPINS_SW4_LABEL "BUTTON_LLWUP24"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW4_NAME "SW4"                        /*!<@brief Identifier */
#define BOARD_INITBUTTONSPINS_SW4_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW4_FGPIO FGPIOE                      /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW4_GPIO GPIOE                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW4_GPIO_PIN 9U                       /*!<@brief GPIO pin number */
#define BOARD_INITBUTTONSPINS_SW4_GPIO_PIN_MASK (1U << 9U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW4_PORT PORTE                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW4_PIN 9U                            /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW4_PIN_MASK (1U << 9U)               /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PORTE12 (coord L12), BUTTON_LLWUP26
  @{ */
/* Routed pin properties */
#define BOARD_INITBUTTONSPINS_SW5_PERIPHERAL GPIOE                  /*!<@brief Peripheral name */
#define BOARD_INITBUTTONSPINS_SW5_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITBUTTONSPINS_SW5_CHANNEL 12                        /*!<@brief Signal channel */
#define BOARD_INITBUTTONSPINS_SW5_PIN_NAME PTE12                    /*!<@brief Routed pin name */
#define BOARD_INITBUTTONSPINS_SW5_LABEL "BUTTON_LLWUP26"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW5_NAME "SW5"                        /*!<@brief Identifier */
#define BOARD_INITBUTTONSPINS_SW5_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITBUTTONSPINS_SW5_FGPIO FGPIOE                      /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW5_GPIO GPIOE                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW5_GPIO_PIN 12U                      /*!<@brief GPIO pin number */
#define BOARD_INITBUTTONSPINS_SW5_GPIO_PIN_MASK (1U << 12U)         /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITBUTTONSPINS_SW5_PORT PORTE                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITBUTTONSPINS_SW5_PIN 12U                           /*!<@brief PORT pin number */
#define BOARD_INITBUTTONSPINS_SW5_PIN_MASK (1U << 12U)              /*!<@brief PORT pin mask */
                                                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtonsPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTA22 (coord B6), Q6[2]/LED_BLUE
  @{ */
/* Routed pin properties */
#define BOARD_INITLEDSPINS_RGB_BLUE_PERIPHERAL GPIOA                   /*!<@brief Peripheral name */
#define BOARD_INITLEDSPINS_RGB_BLUE_SIGNAL GPIO                        /*!<@brief Signal name */
#define BOARD_INITLEDSPINS_RGB_BLUE_CHANNEL 22                         /*!<@brief Signal channel */
#define BOARD_INITLEDSPINS_RGB_BLUE_PIN_NAME PTA22                     /*!<@brief Routed pin name */
#define BOARD_INITLEDSPINS_RGB_BLUE_LABEL "Q6[2]/LED_BLUE"             /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_BLUE_NAME "RGB_BLUE"                    /*!<@brief Identifier */
#define BOARD_INITLEDSPINS_RGB_BLUE_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_RGB_BLUE_GPIO GPIOA                         /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_BLUE_GPIO_PIN 22U                       /*!<@brief GPIO pin number */
#define BOARD_INITLEDSPINS_RGB_BLUE_GPIO_PIN_MASK (1U << 22U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_RGB_BLUE_PORT PORTA                         /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_BLUE_PIN 22U                            /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_RGB_BLUE_PIN_MASK (1U << 22U)               /*!<@brief PORT pin mask */
                                                                       /* @} */

/*! @name PORTA23 (coord E6), Q7[5]/LED_GREEN
  @{ */
/* Routed pin properties */
#define BOARD_INITLEDSPINS_RGB_GREEN_PERIPHERAL GPIOA                   /*!<@brief Peripheral name */
#define BOARD_INITLEDSPINS_RGB_GREEN_SIGNAL GPIO                        /*!<@brief Signal name */
#define BOARD_INITLEDSPINS_RGB_GREEN_CHANNEL 23                         /*!<@brief Signal channel */
#define BOARD_INITLEDSPINS_RGB_GREEN_PIN_NAME PTA23                     /*!<@brief Routed pin name */
#define BOARD_INITLEDSPINS_RGB_GREEN_LABEL "Q7[5]/LED_GREEN"            /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_GREEN_NAME "RGB_GREEN"                   /*!<@brief Identifier */
#define BOARD_INITLEDSPINS_RGB_GREEN_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_RGB_GREEN_GPIO GPIOA                         /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_GREEN_GPIO_PIN 23U                       /*!<@brief GPIO pin number */
#define BOARD_INITLEDSPINS_RGB_GREEN_GPIO_PIN_MASK (1U << 23U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_RGB_GREEN_PORT PORTA                         /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_GREEN_PIN 23U                            /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_RGB_GREEN_PIN_MASK (1U << 23U)               /*!<@brief PORT pin mask */
                                                                        /* @} */

/*! @name PORTA24 (coord D6), Q7[2]/LED_RED
  @{ */
/* Routed pin properties */
#define BOARD_INITLEDSPINS_RGB_RED_PERIPHERAL GPIOA                   /*!<@brief Peripheral name */
#define BOARD_INITLEDSPINS_RGB_RED_SIGNAL GPIO                        /*!<@brief Signal name */
#define BOARD_INITLEDSPINS_RGB_RED_CHANNEL 24                         /*!<@brief Signal channel */
#define BOARD_INITLEDSPINS_RGB_RED_PIN_NAME PTA24                     /*!<@brief Routed pin name */
#define BOARD_INITLEDSPINS_RGB_RED_LABEL "Q7[2]/LED_RED"              /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_RED_NAME "RGB_RED"                     /*!<@brief Identifier */
#define BOARD_INITLEDSPINS_RGB_RED_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_RGB_RED_GPIO GPIOA                         /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_RED_GPIO_PIN 24U                       /*!<@brief GPIO pin number */
#define BOARD_INITLEDSPINS_RGB_RED_GPIO_PIN_MASK (1U << 24U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_RGB_RED_PORT PORTA                         /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_RGB_RED_PIN 24U                            /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_RGB_RED_PIN_MASK (1U << 24U)               /*!<@brief PORT pin mask */
                                                                      /* @} */

/*! @name PORTE0 (coord R14), G2[5]/RED_LED_STS
  @{ */
/* Routed pin properties */
#define BOARD_INITLEDSPINS_RED_LED_STS_PERIPHERAL GPIOE                   /*!<@brief Peripheral name */
#define BOARD_INITLEDSPINS_RED_LED_STS_SIGNAL GPIO                        /*!<@brief Signal name */
#define BOARD_INITLEDSPINS_RED_LED_STS_CHANNEL 0                          /*!<@brief Signal channel */
#define BOARD_INITLEDSPINS_RED_LED_STS_PIN_NAME PTE0                      /*!<@brief Routed pin name */
#define BOARD_INITLEDSPINS_RED_LED_STS_LABEL "G2[5]/RED_LED_STS"          /*!<@brief Label */
#define BOARD_INITLEDSPINS_RED_LED_STS_NAME "RED_LED_STS"                 /*!<@brief Identifier */
#define BOARD_INITLEDSPINS_RED_LED_STS_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITLEDSPINS_RED_LED_STS_FGPIO FGPIOE                       /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_RED_LED_STS_GPIO GPIOE                         /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITLEDSPINS_RED_LED_STS_GPIO_PIN 0U                        /*!<@brief GPIO pin number */
#define BOARD_INITLEDSPINS_RED_LED_STS_GPIO_PIN_MASK (1U << 0U)           /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITLEDSPINS_RED_LED_STS_PORT PORTE                         /*!<@brief PORT peripheral base pointer */
#define BOARD_INITLEDSPINS_RED_LED_STS_PIN 0U                             /*!<@brief PORT pin number */
#define BOARD_INITLEDSPINS_RED_LED_STS_PIN_MASK (1U << 0U)                /*!<@brief PORT pin mask */
                                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTC7 (coord N2), U40[1]/K32L_UART0_RX
  @{ */
/* Routed pin properties */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PERIPHERAL LPUART0           /*!<@brief Peripheral name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_SIGNAL RX                    /*!<@brief Signal name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PIN_NAME LPUART0_RX          /*!<@brief Routed pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_LABEL "U40[1]/K32L_UART0_RX" /*!<@brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_NAME "DEBUG_UART0_RX"        /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PORT PORTC                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PIN 7U                       /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PIN_MASK (1U << 7U)          /*!<@brief PORT pin mask */
                                                                             /* @} */

/*! @name PORTC8 (coord P3), U11[1]/K32L_UART0_TX
  @{ */
/* Routed pin properties */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PERIPHERAL LPUART0           /*!<@brief Peripheral name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_SIGNAL TX                    /*!<@brief Signal name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PIN_NAME LPUART0_TX          /*!<@brief Routed pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_LABEL "U11[1]/K32L_UART0_TX" /*!<@brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_NAME "DEBUG_UART0_TX"        /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PORT PORTC                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PIN 8U                       /*!<@brief PORT pin number */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PIN_MASK (1U << 8U)          /*!<@brief PORT pin mask */
                                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M4F */

/*! @name EXTAL32 (coord E16), Y1[1]/EXTAL_32KHZ
  @{ */
/* Routed pin properties */
#define BOARD_INITOSCPINS_EXTAL32_PERIPHERAL RTC            /*!<@brief Peripheral name */
#define BOARD_INITOSCPINS_EXTAL32_SIGNAL EXTAL32            /*!<@brief Signal name */
#define BOARD_INITOSCPINS_EXTAL32_PIN_NAME EXTAL32          /*!<@brief Routed pin name */
#define BOARD_INITOSCPINS_EXTAL32_LABEL "Y1[1]/EXTAL_32KHZ" /*!<@brief Label */
#define BOARD_INITOSCPINS_EXTAL32_NAME "EXTAL32"            /*!<@brief Identifier */
                                                            /* @} */

/*! @name XTAL32 (coord E17), Y1[2]/XTAL_32KHZ
  @{ */
/* Routed pin properties */
#define BOARD_INITOSCPINS_XTAL32_PERIPHERAL RTC           /*!<@brief Peripheral name */
#define BOARD_INITOSCPINS_XTAL32_SIGNAL XTAL32            /*!<@brief Signal name */
#define BOARD_INITOSCPINS_XTAL32_PIN_NAME XTAL32          /*!<@brief Routed pin name */
#define BOARD_INITOSCPINS_XTAL32_LABEL "Y1[2]/XTAL_32KHZ" /*!<@brief Label */
#define BOARD_INITOSCPINS_XTAL32_NAME "XTAL32"            /*!<@brief Identifier */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTE30 (coord G17), U14[4]/ACCEL_I2C3_SCL
  @{ */
/* Routed pin properties */
#define BOARD_INITACCELPINS_ACCEL_SCL_PERIPHERAL LPI2C3             /*!<@brief Peripheral name */
#define BOARD_INITACCELPINS_ACCEL_SCL_SIGNAL SCL                    /*!<@brief Signal name */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN_NAME LPI2C3_SCL           /*!<@brief Routed pin name */
#define BOARD_INITACCELPINS_ACCEL_SCL_LABEL "U14[4]/ACCEL_I2C3_SCL" /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_SCL_NAME "ACCEL_SCL"              /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_SCL_PORT PORTE                    /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN 30U                       /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN_MASK (1U << 30U)          /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PORTE29 (coord G15), U14[6]/ACCEL_I2C3_SDA
  @{ */
/* Routed pin properties */
#define BOARD_INITACCELPINS_ACCEL_SDA_PERIPHERAL LPI2C3             /*!<@brief Peripheral name */
#define BOARD_INITACCELPINS_ACCEL_SDA_SIGNAL SDA                    /*!<@brief Signal name */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN_NAME LPI2C3_SDA           /*!<@brief Routed pin name */
#define BOARD_INITACCELPINS_ACCEL_SDA_LABEL "U14[6]/ACCEL_I2C3_SDA" /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_SDA_NAME "ACCEL_SDA"              /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_SDA_PORT PORTE                    /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN 29U                       /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN_MASK (1U << 29U)          /*!<@brief PORT pin mask */
                                                                    /* @} */

/*! @name PORTE1 (coord R16), U14[11]/ACCEL_INT1
  @{ */
/* Routed pin properties */
#define BOARD_INITACCELPINS_ACCEL_INT1_PERIPHERAL GPIOE                  /*!<@brief Peripheral name */
#define BOARD_INITACCELPINS_ACCEL_INT1_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITACCELPINS_ACCEL_INT1_CHANNEL 1                         /*!<@brief Signal channel */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN_NAME PTE1                     /*!<@brief Routed pin name */
#define BOARD_INITACCELPINS_ACCEL_INT1_LABEL "U14[11]/ACCEL_INT1"        /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_INT1_NAME "ACCEL_INT1"                 /*!<@brief Identifier */
#define BOARD_INITACCELPINS_ACCEL_INT1_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCEL_INT1_FGPIO FGPIOE                      /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO GPIOE                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PIN 1U                       /*!<@brief GPIO pin number */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PIN_MASK (1U << 1U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_INT1_PORT PORTE                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN 1U                            /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN_MASK (1U << 1U)               /*!<@brief PORT pin mask */
                                                                         /* @} */

/*! @name PORTE22 (coord J16), U14[9]/ACCEL_INT2
  @{ */
/* Routed pin properties */
#define BOARD_INITACCELPINS_ACCEL_INT2_PERIPHERAL GPIOE                  /*!<@brief Peripheral name */
#define BOARD_INITACCELPINS_ACCEL_INT2_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITACCELPINS_ACCEL_INT2_CHANNEL 22                        /*!<@brief Signal channel */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN_NAME PTE22                    /*!<@brief Routed pin name */
#define BOARD_INITACCELPINS_ACCEL_INT2_LABEL "U14[9]/ACCEL_INT2"         /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_INT2_NAME "ACCEL_INT2"                 /*!<@brief Identifier */
#define BOARD_INITACCELPINS_ACCEL_INT2_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCEL_INT2_FGPIO FGPIOE                      /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO GPIOE                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PIN 22U                      /*!<@brief GPIO pin number */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PIN_MASK (1U << 22U)         /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_INT2_PORT PORTE                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN 22U                           /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN_MASK (1U << 22U)              /*!<@brief PORT pin mask */
                                                                         /* @} */

/*! @name PORTE27 (coord H14), U14[16]/ACCEL_RST
  @{ */
/* Routed pin properties */
#define BOARD_INITACCELPINS_ACCEL_RST_PERIPHERAL GPIOE                   /*!<@brief Peripheral name */
#define BOARD_INITACCELPINS_ACCEL_RST_SIGNAL GPIO                        /*!<@brief Signal name */
#define BOARD_INITACCELPINS_ACCEL_RST_CHANNEL 27                         /*!<@brief Signal channel */
#define BOARD_INITACCELPINS_ACCEL_RST_PIN_NAME PTE27                     /*!<@brief Routed pin name */
#define BOARD_INITACCELPINS_ACCEL_RST_LABEL "U14[16]/ACCEL_RST"          /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_RST_NAME "ACCEL_RST"                   /*!<@brief Identifier */
#define BOARD_INITACCELPINS_ACCEL_RST_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITACCELPINS_ACCEL_RST_FGPIO FGPIOE                       /*!<@brief FGPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_RST_GPIO GPIOE                         /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_RST_GPIO_PIN 27U                       /*!<@brief GPIO pin number */
#define BOARD_INITACCELPINS_ACCEL_RST_GPIO_PIN_MASK (1U << 27U)          /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITACCELPINS_ACCEL_RST_PORT PORTE                         /*!<@brief PORT peripheral base pointer */
#define BOARD_INITACCELPINS_ACCEL_RST_PIN 27U                            /*!<@brief PORT pin number */
#define BOARD_INITACCELPINS_ACCEL_RST_PIN_MASK (1U << 27U)               /*!<@brief PORT pin mask */
                                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTB9 (coord F4), J4[6]/J47[2]/ARDUINO_A2/ADC0_SE3
  @{ */
/* Routed pin properties */
/*!
 * @brief Peripheral name */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PERIPHERAL GPIOB
/*!
 * @brief Signal name */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_SIGNAL GPIO
/*!
 * @brief Signal channel */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_CHANNEL 9
/*!
 * @brief Routed pin name */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PIN_NAME PTB9
/*!
 * @brief Label */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_LABEL "J4[6]/J47[2]/ARDUINO_A2/ADC0_SE3"
/*!
 * @brief Identifier */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_NAME "SNS_LIGHT_ADC"

/* Symbols to be used with GPIO driver */
/*!
 * @brief GPIO peripheral base pointer */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_GPIO GPIOB
/*!
 * @brief GPIO pin number */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_GPIO_PIN 9U
/*!
 * @brief GPIO pin mask */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_GPIO_PIN_MASK (1U << 9U)

/* Symbols to be used with PORT driver */
/*!
 * @brief PORT peripheral base pointer */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PORT PORTB
/*!
 * @brief PORT pin number */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PIN 9U
/*!
 * @brief PORT pin mask */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PIN_MASK (1U << 9U)
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLIGHT_SENSORPins(void); /* Function assigned for the Cortex-M4F */

/*! @name USB0_DM (coord T12), J8[2]/K32L_USB_DN
  @{ */
/* Routed pin properties */
#define BOARD_INITUSBPINS_USB0_DM_PERIPHERAL USB0           /*!<@brief Peripheral name */
#define BOARD_INITUSBPINS_USB0_DM_SIGNAL DM                 /*!<@brief Signal name */
#define BOARD_INITUSBPINS_USB0_DM_PIN_NAME USB0_DM          /*!<@brief Routed pin name */
#define BOARD_INITUSBPINS_USB0_DM_LABEL "J8[2]/K32L_USB_DN" /*!<@brief Label */
#define BOARD_INITUSBPINS_USB0_DM_NAME "USB0_DM"            /*!<@brief Identifier */
                                                            /* @} */

/*! @name USB0_DP (coord T11), J8[3]/K32L_USB_DP
  @{ */
/* Routed pin properties */
#define BOARD_INITUSBPINS_USB0_DP_PERIPHERAL USB0           /*!<@brief Peripheral name */
#define BOARD_INITUSBPINS_USB0_DP_SIGNAL DP                 /*!<@brief Signal name */
#define BOARD_INITUSBPINS_USB0_DP_PIN_NAME USB0_DP          /*!<@brief Routed pin name */
#define BOARD_INITUSBPINS_USB0_DP_LABEL "J8[3]/K32L_USB_DP" /*!<@brief Label */
#define BOARD_INITUSBPINS_USB0_DP_NAME "USB0_DP"            /*!<@brief Identifier */
                                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSBPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTD11 (coord R11), J9[P1]/SDHC0_D2
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_D2_PERIPHERAL USDHC0         /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_D2_SIGNAL DATA               /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_D2_CHANNEL 2                 /*!<@brief Signal channel */
#define BOARD_INITSDHCPINS_SDHC0_D2_PIN_NAME SDHC0_D2         /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_D2_LABEL "J9[P1]/SDHC0_D2"   /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D2_NAME "SDHC0_D2"           /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_D2_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_D2_PIN 11U                   /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_D2_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTD10 (coord P11), J9[P2]/SDHC0_D3
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_D3_PERIPHERAL USDHC0         /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_D3_SIGNAL DATA               /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_D3_CHANNEL 3                 /*!<@brief Signal channel */
#define BOARD_INITSDHCPINS_SDHC0_D3_PIN_NAME SDHC0_D3         /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_D3_LABEL "J9[P2]/SDHC0_D3"   /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D3_NAME "SDHC0_D3"           /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_D3_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_D3_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_D3_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTD9 (coord U11), J9[P3]/SDHC0_CMD
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PERIPHERAL USDHC0        /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_CMD_SIGNAL CMD               /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PIN_NAME SDHC0_CMD       /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_CMD_LABEL "J9[P3]/SDHC0_CMD" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_CMD_NAME "SDHC0_CMD"         /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTD8 (coord T9), J9[P5]/SDHC0_DCLK
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PERIPHERAL USDHC0         /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_SIGNAL DCLK               /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PIN_NAME SDHC0_DCLK       /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_LABEL "J9[P5]/SDHC0_DCLK" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_NAME "SDHC0_DCLK"         /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PIN 8U                    /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PIN_MASK (1U << 8U)       /*!<@brief PORT pin mask */
                                                                /* @} */

/*! @name PORTD7 (coord P10), J9[P7]/SDHC0_D0
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_D0_PERIPHERAL USDHC0        /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_D0_SIGNAL DATA              /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_D0_CHANNEL 0                /*!<@brief Signal channel */
#define BOARD_INITSDHCPINS_SDHC0_D0_PIN_NAME SDHC0_D0        /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_D0_LABEL "J9[P7]/SDHC0_D0"  /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D0_NAME "SDHC0_D0"          /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_D0_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_D0_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_D0_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTD6 (coord U9), J9[P8]/SDHC0_D1
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SDHC0_D1_PERIPHERAL USDHC0        /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SDHC0_D1_SIGNAL DATA              /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SDHC0_D1_CHANNEL 1                /*!<@brief Signal channel */
#define BOARD_INITSDHCPINS_SDHC0_D1_PIN_NAME SDHC0_D1        /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SDHC0_D1_LABEL "J9[P8]/SDHC0_D1"  /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D1_NAME "SDHC0_D1"          /*!<@brief Identifier */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SDHC0_D1_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SDHC0_D1_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SDHC0_D1_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTC27 (coord P6), J9[G1]/SD_DETECT
  @{ */
/* Routed pin properties */
#define BOARD_INITSDHCPINS_SD_DETECT_PERIPHERAL GPIOC                  /*!<@brief Peripheral name */
#define BOARD_INITSDHCPINS_SD_DETECT_SIGNAL GPIO                       /*!<@brief Signal name */
#define BOARD_INITSDHCPINS_SD_DETECT_CHANNEL 27                        /*!<@brief Signal channel */
#define BOARD_INITSDHCPINS_SD_DETECT_PIN_NAME PTC27                    /*!<@brief Routed pin name */
#define BOARD_INITSDHCPINS_SD_DETECT_LABEL "J9[G1]/SD_DETECT"          /*!<@brief Label */
#define BOARD_INITSDHCPINS_SD_DETECT_NAME "SD_DETECT"                  /*!<@brief Identifier */
#define BOARD_INITSDHCPINS_SD_DETECT_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */

/* Symbols to be used with GPIO driver */
#define BOARD_INITSDHCPINS_SD_DETECT_GPIO GPIOC                        /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITSDHCPINS_SD_DETECT_GPIO_PIN 27U                      /*!<@brief GPIO pin number */
#define BOARD_INITSDHCPINS_SD_DETECT_GPIO_PIN_MASK (1U << 27U)         /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_INITSDHCPINS_SD_DETECT_PORT PORTC                        /*!<@brief PORT peripheral base pointer */
#define BOARD_INITSDHCPINS_SD_DETECT_PIN 27U                           /*!<@brief PORT pin number */
#define BOARD_INITSDHCPINS_SD_DETECT_PIN_MASK (1U << 27U)              /*!<@brief PORT pin mask */
                                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSDHCPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
