list(APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_LIST_DIR}/.
    ${CMAKE_CURRENT_LIST_DIR}/../../CMSIS/Core/Include
    ${CMAKE_CURRENT_LIST_DIR}/../../CMSIS/Driver/Include
    ${CMAKE_CURRENT_LIST_DIR}/../../cmsis_drivers/flexcomm
    ${CMAKE_CURRENT_LIST_DIR}/../../components/audio
    ${CMAKE_CURRENT_LIST_DIR}/../../components/codec
    ${CMAKE_CURRENT_LIST_DIR}/../../components/codec/i2c
    ${CMAKE_CURRENT_LIST_DIR}/../../components/codec/wm8904
    ${CMAKE_CURRENT_LIST_DIR}/../../components/flash/mflash
    ${CMAKE_CURRENT_LIST_DIR}/../../components/flash/mflash/lpc55xxx
    ${CMAKE_CURRENT_LIST_DIR}/../../components/flash/nor
    ${CMAKE_CURRENT_LIST_DIR}/../../components/ft6x06
    ${CMAKE_CURRENT_LIST_DIR}/../../components/gpio
    ${CMAKE_CURRENT_LIST_DIR}/../../components/i2c
    ${CMAKE_CURRENT_LIST_DIR}/../../components/ili9341
    ${CMAKE_CURRENT_LIST_DIR}/../../components/lists
    ${CMAKE_CURRENT_LIST_DIR}/../../components/log
    ${CMAKE_CURRENT_LIST_DIR}/../../components/osa
    ${CMAKE_CURRENT_LIST_DIR}/../../components/panic
    ${CMAKE_CURRENT_LIST_DIR}/../../components/rtt
    ${CMAKE_CURRENT_LIST_DIR}/../../components/serial_manager
    ${CMAKE_CURRENT_LIST_DIR}/../../components/timer
    ${CMAKE_CURRENT_LIST_DIR}/../../components/uart
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/anactrl
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/casper
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/cmp_1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/common
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/ctimer
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/flexcomm
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/gint
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/hashcrypt
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/iap1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/inputmux
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpadc
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_crc
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_dma
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_gpio
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_iocon
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/lpc_rtc
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/mrt
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/ostimer
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/pint
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/prince
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/puf
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/rng_1
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/sctimer
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/sdif
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/sysctl
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/utick
    ${CMAKE_CURRENT_LIST_DIR}/../../drivers/wwdt
    ${CMAKE_CURRENT_LIST_DIR}/../../../middleware
    ${CMAKE_CURRENT_LIST_DIR}/../../../middleware/fatfs
    ${CMAKE_CURRENT_LIST_DIR}/../../../middleware/mbedtls
    ${CMAKE_CURRENT_LIST_DIR}/../../../middleware/sdmmc
    ${CMAKE_CURRENT_LIST_DIR}/../../../middleware/usb
    ${CMAKE_CURRENT_LIST_DIR}/../../../rtos/azure-rtos
    ${CMAKE_CURRENT_LIST_DIR}/../../../rtos/freertos/freertos-kernel
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/assert
    ${CMAKE_CURRENT_LIST_DIR}/../../utilities/misc_utilities
    ${CMAKE_CURRENT_LIST_DIR}/drivers
    ${CMAKE_CURRENT_LIST_DIR}/utilities
)


# Copy the cmake components into projects
#    include(utility_shell)
#    include(driver_flexcomm_i2c_freertos)
#    include(driver_codec)
#    include(component_osa_bm)
#    include(middleware_usb_host_stack_LPC55S28)
#    include(driver_ili9341)
#    include(component_osa_free_rtos_LPC55S28)
#    include(driver_lpc_rtc)
#    include(driver_flexcomm_spi)
#    include(CMSIS_Driver_Include_I2C)
#    include(middleware_usb_host_hid)
#    include(middleware_freertos-kernel_cm33_nonsecure_port)
#    include(middleware_sdmmc_osa_azurertos)
#    include(middleware_sdmmc_host_sdif_azurertos)
#    include(middleware_usb_host_ip3516hs_LPC55S28)
#    include(driver_sctimer)
#    include(driver_ctimer)
#    include(driver_lpadc)
#    include(driver_reset)
#    include(driver_clock)
#    include(middleware_sdmmc_host_sdif_polling)
#    include(middleware_fatfs_sd)
#    include(component_log)
#    include(middleware_azure_rtos_ux_template_LPC55S28)
#    include(middleware_usb_device_stack_external)
#    include(driver_flexcomm_usart_dma)
#    include(driver_flexcomm_spi_dma)
#    include(CMSIS_Driver_Include_USART)
#    include(driver_common)
#    include(component_mflash_common)
#    include(driver_flexcomm_i2c_dma)
#    include(middleware_azure_rtos_ux_sp)
#    include(middleware_sdmmc_host_sdif_interrupt)
#    include(driver_lpc_iocon)
#    include(middleware_freertos-kernel_extension)
#    include(driver_power)
#    include(component_usart_adapter)
#    include(driver_iap1)
#    include(component_log_backend_debugconsole_LPC55S28)
#    include(component_serial_manager_uart)
#    include(driver_flexcomm_usart)
#    include(component_log_backend_ringbuffer)
#    include(component_panic)
#    include(middleware_fatfs_LPC55S28)
#    include(driver_lpc_crc)
#    include(device_startup)
#    include(driver_anactrl)
#    include(middleware_sdmmc_osa_bm)
#    include(CMSIS_Driver_Include_SPI)
#    include(driver_lpc_dma)
#    include(driver_wwdt)
#    include(device_CMSIS)
#    include(middleware_fatfs_usb)
#    include(middleware_usb_host_common_header)
#    include(driver_casper)
#    include(middleware_sdmmc_common)
#    include(driver_flexcomm_i2s)
#    include(component_serial_manager_swo)
#    include(component_mflash_file_LPC55S28)
#    include(middleware_usb_device_common_header)
#    include(middleware_sdmmc_sd)
#    include(driver_cmsis_flexcomm_i2c)
#    include(driver_flexcomm_i2c)
#    include(driver_cmsis_flexcomm_spi)
#    include(middleware_azure_rtos_nxd_template_LPC55S28)
#    include(component_serial_manager_usb_cdc)
#    include(driver_rng_1)
#    include(utility_assert)
#    include(component_serial_manager)
#    include(middleware_sdmmc_host_sdif)
#    include(driver_ft6x06)
#    include(middleware_mbedtls_port_ksdk)
#    include(middleware_usb_host_video)
#    include(middleware_azure_rtos_fx_template_LPC55S28)
#    include(component_lists)
#    include(middleware_usb_host_msd)
#    include(utility_debug_console)
#    include(component_mflash_lpc55xxx)
#    include(component_wm8904_adapter)
#    include(driver_gint)
#    include(driver_rtt_LPC55S28)
#    include(middleware_freertos-kernel_heap_4)
#    include(middleware_usb_device_controller_driver_LPC55S28)
#    include(middleware_usb_phy)
#    include(middleware_usb_device_ip3511hs_LPC55S28)
#    include(driver_wm8904)
#    include(driver_flexcomm)
#    include(driver_cmp_1)
#    include(driver_sysctl)
#    include(driver_flexcomm_spi_freertos)
#    include(driver_mrt)
#    include(middleware_azure_rtos_lx)
#    include(component_codec_i2c_LPC55S28)
#    include(middleware_usb_device_cdc_external)
#    include(component_osa)
#    include(utilities_misc_utilities_LPC55S28)
#    include(CMSIS_Include_core_cm)
#    include(driver_lpc_gpio)
#    include(driver_flexcomm_usart_freertos)
#    include(middleware_usb_host_printer)
#    include(middleware_usb_device_ip3511fs)
#    include(driver_utick)
#    include(driver_hashcrypt)
#    include(middleware_azure_rtos_nxd_sp)
#    include(middleware_azure_rtos_tx_sp)
#    include(driver_cmsis_flexcomm_usart)
#    include(component_lpc_gpio_adapter)
#    include(component_osa_thread)
#    include(middleware_baremetal)
#    include(utility_debug_console_lite)
#    include(CMSIS_Driver_Include_Common)
#    include(component_mrt_adapter)
#    include(middleware_sdmmc_osa_freertos)
#    include(middleware_usb_host_audio)
#    include(middleware_usb_host_cdc)
#    include(driver_pint)
#    include(middleware_mbedtls_lpc1)
#    include(driver_nor_flash-common)
#    include(device_system)
#    include(utility_assert_lite)
#    include(middleware_usb_host_phdc)
#    include(component_flexcomm_i2c_adapter)
#    include(middleware_azure_rtos_tx_template_LPC55S28)
#    include(middleware_usb_host_ohci)
#    include(middleware_azure_rtos_fx_sp)
#    include(driver_sdif)
#    include(middleware_mbedtls_LPC55S28)
#    include(middleware_azure_rtos_azure_iot)
#    include(driver_flexcomm_i2s_dma)
#    include(component_audio_flexcomm_i2s_dma_adapter)
#    include(driver_inputmux_connections)
#    include(component_gint_adapter)
#    include(middleware_freertos-kernel_LPC55S28)
#    include(driver_ostimer)
#    include(middleware_usb_common_header)
#    include(middleware_sdmmc_host_sdif_freertos)
#    include(driver_puf)
#    include(driver_prince)
#    include(driver_inputmux)
