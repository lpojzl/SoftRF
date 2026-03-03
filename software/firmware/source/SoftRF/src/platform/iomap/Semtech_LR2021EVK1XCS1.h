/* Seeed & Semtech LR2021 LoRa Plus™ Evaluation Kit */

#if defined(ARDUINO_XIAO_NRF54L15)
/* Peripherals */
#define SOC_GPIO_PIN_CONS_EVK_RX        PIN_SAMD11_TX  // D19, P1.08 +
#define SOC_GPIO_PIN_CONS_EVK_TX        PIN_SAMD11_RX  // D18, P1.09 +

#define SOC_GPIO_PIN_GNSS_EVK_RX        PIN_D7         // D7,  P2.08 +
#define SOC_GPIO_PIN_GNSS_EVK_TX        PIN_D6         // D6,  P2.07 +
#define SOC_GPIO_PIN_GNSS_EVK_PPS       PIN_D13        // D13, P2.10 +

/* SPI */
#define SOC_GPIO_PIN_EVK_MOSI           PIN_D10        // D10, P2.02 +
#define SOC_GPIO_PIN_EVK_MISO           PIN_D9         // D9,  P2.04 +
#define SOC_GPIO_PIN_EVK_SCK            PIN_D8         // D8,  P2.06 +
#define SOC_GPIO_PIN_EVK_SS             PIN_D3         // D3,  P1.07 +

/* LR2021 */
#define SOC_GPIO_PIN_EVK_RST            PIN_D2         // D2,  P1.06 +
#define SOC_GPIO_PIN_EVK_DIO7           PIN_D6         // D6,  P2.07 +
#define SOC_GPIO_PIN_EVK_DIO8           PIN_D0         // D0,  P1.04 +
#define SOC_GPIO_PIN_EVK_DIO11          PIN_D7         // D7,  P2.08 +
#define SOC_GPIO_PIN_EVK_BUSY           PIN_D1         // D1,  P1.05 +

/* I2C */
#define SOC_GPIO_PIN_EVK_SDA            PIN_D4         // D4,  P1.10 +
#define SOC_GPIO_PIN_EVK_SCL            PIN_D5         // D5,  P1.11 +

/* antenna switch */
#define SOC_GPIO_PIN_EVK_ANT_SW         _PINNUM(2,  5) // P2.05 +
#define SOC_GPIO_PIN_EVK_ANT_PWR        _PINNUM(2,  3) // P2.03 +

#define SOC_GPIO_PIN_EVK_STATUS         PIN_LED_BUILTIN // D16, P2.00 +
#define SOC_GPIO_PIN_EVK_BUTTON         PIN_BUTTON     // D17, P0.00 +, XIAO
#define SOC_GPIO_PIN_EVK_BUZZER         SOC_UNUSED_PIN
#define SOC_GPIO_PIN_EVK_BATTERY        PIN_A7         // A7,  P1.14 + (AIN7)

#define SOC_GPIO_PIN_EVK_D11            PIN_D11        // D11, P0.03 +
#define SOC_GPIO_PIN_EVK_D12            PIN_D12        // D12, P0.04 +
#define SOC_GPIO_PIN_EVK_BUTTON_AUX     PIN_D14        // D14, P2.09 +, EVK, NO PULLUP
#define SOC_GPIO_PIN_EVK_D15            PIN_D15        // D15, P2.06 +

#else

/* Peripherals */
#define SOC_GPIO_PIN_CONS_EVK_RX        _PINNUM(1,  8) // D19, P1.08 +
#define SOC_GPIO_PIN_CONS_EVK_TX        _PINNUM(1,  9) // D18, P1.09 +

#define SOC_GPIO_PIN_GNSS_EVK_RX        _PINNUM(2,  8) // D7,  P2.08 +
#define SOC_GPIO_PIN_GNSS_EVK_TX        _PINNUM(2,  7) // D6,  P2.07 +
#define SOC_GPIO_PIN_GNSS_EVK_PPS       _PINNUM(2, 10) // D13, P2.10 +

/* SPI */
#define SOC_GPIO_PIN_EVK_MOSI           _PINNUM(2,  2) // D10, P2.02 +
#define SOC_GPIO_PIN_EVK_MISO           _PINNUM(2,  4) // D9,  P2.04 +
#define SOC_GPIO_PIN_EVK_SCK            _PINNUM(2,  6) // D8,  P2.06 +
#define SOC_GPIO_PIN_EVK_SS             _PINNUM(1,  7) // D3,  P1.07 +

/* LR2021 */
#define SOC_GPIO_PIN_EVK_RST            _PINNUM(1,  6) // D2,  P1.06 +
#define SOC_GPIO_PIN_EVK_DIO7           _PINNUM(2,  7) // D6,  P2.07 +
#define SOC_GPIO_PIN_EVK_DIO8           _PINNUM(1,  4) // D0,  P1.04 +
#define SOC_GPIO_PIN_EVK_DIO11          _PINNUM(2,  8) // D7,  P2.08 +
#define SOC_GPIO_PIN_EVK_BUSY           _PINNUM(1,  5) // D1,  P1.05 +

/* I2C */
#define SOC_GPIO_PIN_EVK_SDA            _PINNUM(1, 10) // D4,  P1.10 +
#define SOC_GPIO_PIN_EVK_SCL            _PINNUM(1, 11) // D5,  P1.11 +

/* NFC */
#define SOC_GPIO_PIN_NFC_ANT1           _PINNUM(1,  2) // P1.02 +
#define SOC_GPIO_PIN_NFC_ANT2           _PINNUM(1,  3) // P1.03 +

/* 32K XTAL */
#define SOC_GPIO_PIN_32K_XL1            _PINNUM(1,  0) // P1.00 -
#define SOC_GPIO_PIN_32K_XL2            _PINNUM(1,  1) // P1.01 -

/* antenna switch */
#define SOC_GPIO_PIN_EVK_ANT_SW         _PINNUM(2,  5) // P2.05 +
#define SOC_GPIO_PIN_EVK_ANT_PWR        _PINNUM(2,  3) // P2.03 +

#define SOC_GPIO_PIN_EVK_STATUS         _PINNUM(2,  0) // D16, P2.00 +
#define SOC_GPIO_PIN_EVK_BUTTON         _PINNUM(0,  0) // D17, P0.00 +, XIAO
#define SOC_GPIO_PIN_EVK_BUZZER         SOC_UNUSED_PIN
#define SOC_GPIO_PIN_EVK_BATTERY        _PINNUM(1, 14) // A7,  P1.14 + (AIN7)
#define SOC_GPIO_PIN_EVK_VBAT_EN        _PINNUM(1, 15) //      P1.15 -

#define SOC_GPIO_PIN_EVK_D11            _PINNUM(0,  3) // D11, P0.03 +
#define SOC_GPIO_PIN_EVK_D12            _PINNUM(0,  4) // D12, P0.04 +
#define SOC_GPIO_PIN_EVK_BUTTON_AUX     _PINNUM(2,  9) // D14, P2.09 +, EVK, NO PULLUP
#define SOC_GPIO_PIN_EVK_D15            _PINNUM(2,  6) // D15, P2.06 +
#endif /* ARDUINO_XIAO_NRF54L15 */

#define SOC_ADC_EVK_VOLTAGE_DIV         (2.0F)         // 10K + 10K voltage divider on VBAT
