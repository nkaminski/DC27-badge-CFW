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

#define SOPT5_LPUART0RXSRC_LPUART_RX 0x00u /*!<@brief LPUART0 Receive Data Source Select: LPUART_RX pin */
#define SOPT5_LPUART0TXSRC_LPUART_TX 0x00u /*!<@brief LPUART0 Transmit Data Source Select: LPUART0_TX pin */

/*! @name PORTC6 (coord B4), LED_nINT
  @{ */
#define BOARD_INITPINS_LED_nINT_PERIPHERAL GPIOC                  /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_LED_nINT_SIGNAL GPIO                       /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_LED_nINT_GPIO GPIOC                        /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_nINT_GPIO_PIN 6U                       /*!<@brief PORTC pin index: 6 */
#define BOARD_INITPINS_LED_nINT_PORT PORTC                        /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_nINT_PIN 6U                            /*!<@brief PORTC pin index: 6 */
#define BOARD_INITPINS_LED_nINT_CHANNEL 6                         /*!<@brief GPIOC GPIO channel: 6 */
#define BOARD_INITPINS_LED_nINT_PIN_NAME PTC6                     /*!<@brief Pin name */
#define BOARD_INITPINS_LED_nINT_LABEL "LED_nINT"                  /*!<@brief Label */
#define BOARD_INITPINS_LED_nINT_NAME "LED_nINT"                   /*!<@brief Identifier name */
#define BOARD_INITPINS_LED_nINT_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                  /* @} */

/*! @name PORTB0 (coord D6), SCL
  @{ */
#define BOARD_INITPINS_SCL_PERIPHERAL I2C0   /*!<@brief Device name: I2C0 */
#define BOARD_INITPINS_SCL_SIGNAL SCL        /*!<@brief I2C0 signal: SCL */
#define BOARD_INITPINS_SCL_PORT PORTB        /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_SCL_PIN 0U            /*!<@brief PORTB pin index: 0 */
#define BOARD_INITPINS_SCL_PIN_NAME I2C0_SCL /*!<@brief Pin name */
#define BOARD_INITPINS_SCL_LABEL "SCL"       /*!<@brief Label */
#define BOARD_INITPINS_SCL_NAME "SCL"        /*!<@brief Identifier name */
                                             /* @} */

/*! @name PORTB1 (coord C6), SDA
  @{ */
#define BOARD_INITPINS_SDA_PERIPHERAL I2C0   /*!<@brief Device name: I2C0 */
#define BOARD_INITPINS_SDA_SIGNAL SDA        /*!<@brief I2C0 signal: SDA */
#define BOARD_INITPINS_SDA_PORT PORTB        /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_SDA_PIN 1U            /*!<@brief PORTB pin index: 1 */
#define BOARD_INITPINS_SDA_PIN_NAME I2C0_SDA /*!<@brief Pin name */
#define BOARD_INITPINS_SDA_LABEL "SDA"       /*!<@brief Label */
#define BOARD_INITPINS_SDA_NAME "SDA"        /*!<@brief Identifier name */
                                             /* @} */

/*! @name PORTC5 (coord A5), LED_EN
  @{ */
#define BOARD_INITPINS_LED_EN_PERIPHERAL GPIOC                   /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_LED_EN_SIGNAL GPIO                        /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_LED_EN_GPIO GPIOC                         /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_EN_GPIO_PIN 5U                        /*!<@brief PORTC pin index: 5 */
#define BOARD_INITPINS_LED_EN_PORT PORTC                         /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_EN_PIN 5U                             /*!<@brief PORTC pin index: 5 */
#define BOARD_INITPINS_LED_EN_CHANNEL 5                          /*!<@brief GPIOC GPIO channel: 5 */
#define BOARD_INITPINS_LED_EN_PIN_NAME PTC5                      /*!<@brief Pin name */
#define BOARD_INITPINS_LED_EN_LABEL "LED_EN"                     /*!<@brief Label */
#define BOARD_INITPINS_LED_EN_NAME "LED_EN"                      /*!<@brief Identifier name */
#define BOARD_INITPINS_LED_EN_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                 /* @} */

/*! @name PORTD7 (coord A2), PTD7
  @{ */
/*!
 * @brief Device name: n/a */
#define BOARD_INITPINS_PTD7_PERIPHERAL n/a
/*!
 * @brief n/a signal: disabled */
#define BOARD_INITPINS_PTD7_SIGNAL disabled
/*!
 * @brief PORT device name: PORTD */
#define BOARD_INITPINS_PTD7_PORT PORTD
/*!
 * @brief PORTD pin index: 7 */
#define BOARD_INITPINS_PTD7_PIN 7U
/*!
 * @brief Pin name */
#define BOARD_INITPINS_PTD7_PIN_NAME PTD7/SPI1_MISO/LPUART0_TX/I2C1_SCL/SPI1_MOSI/FXIO0_D7
/*!
 * @brief Label */
#define BOARD_INITPINS_PTD7_LABEL "PTD7"
/*!
 * @brief Identifier name */
#define BOARD_INITPINS_PTD7_NAME "PTD7"
/* @} */

/*! @name PORTC4 (coord A6), NXH_nRESET
  @{ */
#define BOARD_INITPINS_NXH_nRESET_PERIPHERAL GPIOC                   /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_NXH_nRESET_SIGNAL GPIO                        /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_NXH_nRESET_GPIO GPIOC                         /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_NXH_nRESET_GPIO_PIN 4U                        /*!<@brief PORTC pin index: 4 */
#define BOARD_INITPINS_NXH_nRESET_PORT PORTC                         /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_NXH_nRESET_PIN 4U                             /*!<@brief PORTC pin index: 4 */
#define BOARD_INITPINS_NXH_nRESET_CHANNEL 4                          /*!<@brief GPIOC GPIO channel: 4 */
#define BOARD_INITPINS_NXH_nRESET_PIN_NAME PTC4                      /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_nRESET_LABEL "NXH_nRESET"                 /*!<@brief Label */
#define BOARD_INITPINS_NXH_nRESET_NAME "NXH_nRESET"                  /*!<@brief Identifier name */
#define BOARD_INITPINS_NXH_nRESET_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                     /* @} */

/*! @name PORTE22 (coord E1), KL_TX
  @{ */
#define BOARD_INITPINS_KL_TX_PERIPHERAL UART2  /*!<@brief Device name: UART2 */
#define BOARD_INITPINS_KL_TX_SIGNAL TX         /*!<@brief UART2 signal: TX */
#define BOARD_INITPINS_KL_TX_PORT PORTE        /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_KL_TX_PIN 22U           /*!<@brief PORTE pin index: 22 */
#define BOARD_INITPINS_KL_TX_PIN_NAME UART2_TX /*!<@brief Pin name */
#define BOARD_INITPINS_KL_TX_LABEL "KL_TX"     /*!<@brief Label */
#define BOARD_INITPINS_KL_TX_NAME "KL_TX"      /*!<@brief Identifier name */
                                               /* @} */

/*! @name PORTE23 (coord F1), KL_RX
  @{ */
#define BOARD_INITPINS_KL_RX_PERIPHERAL UART2  /*!<@brief Device name: UART2 */
#define BOARD_INITPINS_KL_RX_SIGNAL RX         /*!<@brief UART2 signal: RX */
#define BOARD_INITPINS_KL_RX_PORT PORTE        /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_KL_RX_PIN 23U           /*!<@brief PORTE pin index: 23 */
#define BOARD_INITPINS_KL_RX_PIN_NAME UART2_RX /*!<@brief Pin name */
#define BOARD_INITPINS_KL_RX_LABEL "KL_RX"     /*!<@brief Label */
#define BOARD_INITPINS_KL_RX_NAME "KL_RX"      /*!<@brief Identifier name */
                                               /* @} */

/*! @name PORTC3 (coord B5), NXH_REFCLK
  @{ */
#define BOARD_INITPINS_NXH_REFCLK_PERIPHERAL SIM     /*!<@brief Device name: SIM */
#define BOARD_INITPINS_NXH_REFCLK_SIGNAL CLKOUT      /*!<@brief SIM signal: CLKOUT */
#define BOARD_INITPINS_NXH_REFCLK_PORT PORTC         /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_NXH_REFCLK_PIN 3U             /*!<@brief PORTC pin index: 3 */
#define BOARD_INITPINS_NXH_REFCLK_PIN_NAME CLKOUT    /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_REFCLK_LABEL "NXH_REFCLK" /*!<@brief Label */
#define BOARD_INITPINS_NXH_REFCLK_NAME "NXH_REFCLK"  /*!<@brief Identifier name */
                                                     /* @} */

/*! @name PORTA1 (coord F4), NXH_RX
  @{ */
#define BOARD_INITPINS_NXH_RX_PERIPHERAL LPUART0  /*!<@brief Device name: LPUART0 */
#define BOARD_INITPINS_NXH_RX_SIGNAL RX           /*!<@brief LPUART0 signal: RX */
#define BOARD_INITPINS_NXH_RX_PORT PORTA          /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_NXH_RX_PIN 1U              /*!<@brief PORTA pin index: 1 */
#define BOARD_INITPINS_NXH_RX_PIN_NAME LPUART0_RX /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_RX_LABEL "NXH_RX"      /*!<@brief Label */
#define BOARD_INITPINS_NXH_RX_NAME "NXH_RX"       /*!<@brief Identifier name */
                                                  /* @} */

/*! @name PORTA2 (coord E4), NXH_TX
  @{ */
#define BOARD_INITPINS_NXH_TX_PERIPHERAL LPUART0  /*!<@brief Device name: LPUART0 */
#define BOARD_INITPINS_NXH_TX_SIGNAL TX           /*!<@brief LPUART0 signal: TX */
#define BOARD_INITPINS_NXH_TX_PORT PORTA          /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_NXH_TX_PIN 2U              /*!<@brief PORTA pin index: 2 */
#define BOARD_INITPINS_NXH_TX_PIN_NAME LPUART0_TX /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_TX_LABEL "NXH_TX"      /*!<@brief Label */
#define BOARD_INITPINS_NXH_TX_NAME "NXH_TX"       /*!<@brief Identifier name */
                                                  /* @} */

/*! @name PORTC7 (coord A4), NXH_DETECT
  @{ */
#define BOARD_INITPINS_NXH_DETECT_PERIPHERAL GPIOC                  /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_NXH_DETECT_SIGNAL GPIO                       /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_NXH_DETECT_GPIO GPIOC                        /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_NXH_DETECT_GPIO_PIN 7U                       /*!<@brief PORTC pin index: 7 */
#define BOARD_INITPINS_NXH_DETECT_PORT PORTC                        /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_NXH_DETECT_PIN 7U                            /*!<@brief PORTC pin index: 7 */
#define BOARD_INITPINS_NXH_DETECT_CHANNEL 7                         /*!<@brief GPIOC GPIO channel: 7 */
#define BOARD_INITPINS_NXH_DETECT_PIN_NAME PTC7                     /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_DETECT_LABEL "NXH_DETECT"                /*!<@brief Label */
#define BOARD_INITPINS_NXH_DETECT_NAME "NXH_DETECT"                 /*!<@brief Identifier name */
#define BOARD_INITPINS_NXH_DETECT_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*! @name PORTC2 (coord B6), NXH_CAL
  @{ */
#define BOARD_INITPINS_NXH_CAL_PERIPHERAL GPIOC                   /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_NXH_CAL_SIGNAL GPIO                        /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_NXH_CAL_GPIO GPIOC                         /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_NXH_CAL_GPIO_PIN 2U                        /*!<@brief PORTC pin index: 2 */
#define BOARD_INITPINS_NXH_CAL_PORT PORTC                         /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_NXH_CAL_PIN 2U                             /*!<@brief PORTC pin index: 2 */
#define BOARD_INITPINS_NXH_CAL_CHANNEL 2                          /*!<@brief GPIOC GPIO channel: 2 */
#define BOARD_INITPINS_NXH_CAL_PIN_NAME PTC2                      /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_CAL_LABEL "NXH_CAL"                    /*!<@brief Label */
#define BOARD_INITPINS_NXH_CAL_NAME "NXH_CAL"                     /*!<@brief Identifier name */
#define BOARD_INITPINS_NXH_CAL_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                  /* @} */

/*! @name PORTC1 (coord C5), NXH_UPDATE
  @{ */
#define BOARD_INITPINS_NXH_UPDATE_PERIPHERAL GPIOC                   /*!<@brief Device name: GPIOC */
#define BOARD_INITPINS_NXH_UPDATE_SIGNAL GPIO                        /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITPINS_NXH_UPDATE_GPIO GPIOC                         /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_NXH_UPDATE_GPIO_PIN 1U                        /*!<@brief PORTC pin index: 1 */
#define BOARD_INITPINS_NXH_UPDATE_PORT PORTC                         /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_NXH_UPDATE_PIN 1U                             /*!<@brief PORTC pin index: 1 */
#define BOARD_INITPINS_NXH_UPDATE_CHANNEL 1                          /*!<@brief GPIOC GPIO channel: 1 */
#define BOARD_INITPINS_NXH_UPDATE_PIN_NAME PTC1                      /*!<@brief Pin name */
#define BOARD_INITPINS_NXH_UPDATE_LABEL "NXH_UPDATE"                 /*!<@brief Label */
#define BOARD_INITPINS_NXH_UPDATE_NAME "NXH_UPDATE"                  /*!<@brief Identifier name */
#define BOARD_INITPINS_NXH_UPDATE_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                     /* @} */

/*! @name PORTA4 (coord F5), BOOTCFG0
  @{ */
#define BOARD_INITPINS_BOOTCFG0_PERIPHERAL n/a                        /*!<@brief Device name: n/a */
#define BOARD_INITPINS_BOOTCFG0_SIGNAL disabled                       /*!<@brief n/a signal: disabled */
#define BOARD_INITPINS_BOOTCFG0_PORT PORTA                            /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_BOOTCFG0_PIN 4U                                /*!<@brief PORTA pin index: 4 */
#define BOARD_INITPINS_BOOTCFG0_PIN_NAME PTA4/I2C1_SDA/TPM0_CH1/NMI_b /*!<@brief Pin name */
#define BOARD_INITPINS_BOOTCFG0_LABEL "BOOTCFG0"                      /*!<@brief Label */
#define BOARD_INITPINS_BOOTCFG0_NAME "BOOTCFG0"                       /*!<@brief Identifier name */
                                                                      /* @} */

/*! @name PORTD4 (coord A3), KL_PIEZO
  @{ */
#define BOARD_INITPINS_KL_PIEZO_PERIPHERAL TPM0                    /*!<@brief Device name: TPM0 */
#define BOARD_INITPINS_KL_PIEZO_SIGNAL CH                          /*!<@brief TPM0 signal: CH */
#define BOARD_INITPINS_KL_PIEZO_PORT PORTD                         /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_KL_PIEZO_PIN 4U                             /*!<@brief PORTD pin index: 4 */
#define BOARD_INITPINS_KL_PIEZO_CHANNEL 4                          /*!<@brief TPM0 channel: 4 */
#define BOARD_INITPINS_KL_PIEZO_PIN_NAME TPM0_CH4                  /*!<@brief Pin name */
#define BOARD_INITPINS_KL_PIEZO_LABEL "KL_PIEZO"                   /*!<@brief Label */
#define BOARD_INITPINS_KL_PIEZO_NAME "KL_PIEZO"                    /*!<@brief Identifier name */
#define BOARD_INITPINS_KL_PIEZO_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                   /* @} */

/*! @name PORTA20 (coord D5), KL_nRESET
  @{ */
#define BOARD_INITPINS_KL_nRESET_PERIPHERAL RCM    /*!<@brief Device name: RCM */
#define BOARD_INITPINS_KL_nRESET_SIGNAL RESET      /*!<@brief RCM signal: RESET */
#define BOARD_INITPINS_KL_nRESET_PORT PORTA        /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_KL_nRESET_PIN 20U           /*!<@brief PORTA pin index: 20 */
#define BOARD_INITPINS_KL_nRESET_PIN_NAME RESET_b  /*!<@brief Pin name */
#define BOARD_INITPINS_KL_nRESET_LABEL "KL_nRESET" /*!<@brief Label */
#define BOARD_INITPINS_KL_nRESET_NAME "KL_nRESET"  /*!<@brief Identifier name */
                                                   /* @} */

/*! @name PORTA3 (coord E5), KL_SWDIO
  @{ */
#define BOARD_INITPINS_KL_SWDIO_PERIPHERAL SWD   /*!<@brief Device name: SWD */
#define BOARD_INITPINS_KL_SWDIO_SIGNAL DIO       /*!<@brief SWD signal: DIO */
#define BOARD_INITPINS_KL_SWDIO_PORT PORTA       /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_KL_SWDIO_PIN 3U           /*!<@brief PORTA pin index: 3 */
#define BOARD_INITPINS_KL_SWDIO_PIN_NAME SWD_DIO /*!<@brief Pin name */
#define BOARD_INITPINS_KL_SWDIO_LABEL "KL_SWDIO" /*!<@brief Label */
#define BOARD_INITPINS_KL_SWDIO_NAME "KL_SWDIO"  /*!<@brief Identifier name */
                                                 /* @} */

/*! @name PORTA0 (coord F3), KL_SWCLK
  @{ */
#define BOARD_INITPINS_KL_SWCLK_PERIPHERAL SWD   /*!<@brief Device name: SWD */
#define BOARD_INITPINS_KL_SWCLK_SIGNAL CLK       /*!<@brief SWD signal: CLK */
#define BOARD_INITPINS_KL_SWCLK_PORT PORTA       /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_KL_SWCLK_PIN 0U           /*!<@brief PORTA pin index: 0 */
#define BOARD_INITPINS_KL_SWCLK_PIN_NAME SWD_CLK /*!<@brief Pin name */
#define BOARD_INITPINS_KL_SWCLK_LABEL "KL_SWCLK" /*!<@brief Label */
#define BOARD_INITPINS_KL_SWCLK_NAME "KL_SWCLK"  /*!<@brief Identifier name */
                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

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