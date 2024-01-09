list(APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_LIST_DIR}/.
    ${CMAKE_CURRENT_LIST_DIR}/../../CMSIS/Core/Include
    ${CMAKE_CURRENT_LIST_DIR}/../../CMSIS/Driver/Include
    ${CMAKE_CURRENT_LIST_DIR}/../../cmsis_drivers/i2c
    ${CMAKE_CURRENT_LIST_DIR}/../../cmsis_drivers/spi
    ${CMAKE_CURRENT_LIST_DIR}/../../cmsis_drivers/uart
    ${CMAKE_CURRENT_LIST_DIR}/../../components/lists
    ${CMAKE_CURRENT_LIST_DIR}/../../components/serial_manager
    ${CMAKE_CURRENT_LIST_DIR}/../../components/uart
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/acmp_1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/adc_5v12b_ll18_015
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/common
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/flash_ftmr
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/ftm
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/gpio_1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/i2c
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/irq
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/kbi
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/pit
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/rtc_1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/spi
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/tpm
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/uart
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/wdog8
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/assert
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/misc_utilities
    ${CMAKE_CURRENT_LIST_DIR}/drivers
)


# Copy the cmake components into projects
#    include(driver_wdog8)
#    include(driver_uart)
#    include(utility_assert)
#    include(driver_acmp_1)
#    include(CMSIS_Driver_Include_I2C)
#    include(driver_flash_ftmr)
#    include(driver_kbi)
#    include(component_serial_manager_uart)
#    include(component_lists)
#    include(utility_debug_console_lite)
#    include(CMSIS_Driver_Include_Common)
#    include(driver_gpio_1)
#    include(utility_debug_console)
#    include(driver_cmsis_uart)
#    include(driver_rtc_1)
#    include(driver_pit)
#    include(device_system)
#    include(utility_assert_lite)
#    include(utilities_misc_utilities_MKE02Z4)
#    include(device_startup)
#    include(driver_tpm)
#    include(CMSIS_Driver_Include_SPI)
#    include(driver_clock)
#    include(driver_adc_5v12b_ll18_015)
#    include(component_uart_adapter)
#    include(device_CMSIS)
#    include(driver_cmsis_spi)
#    include(driver_irq)
#    include(CMSIS_Driver_Include_USART)
#    include(driver_spi)
#    include(driver_i2c)
#    include(driver_common)
#    include(driver_cmsis_i2c)
#    include(CMSIS_Include_core_cm)
#    include(driver_ftm)
#    include(component_serial_manager)
#    include(driver_port_ke02)
