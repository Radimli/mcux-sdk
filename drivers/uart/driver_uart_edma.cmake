#Description: UART EDMA Driver; user_visible: True
include_guard(GLOBAL)
message("driver_uart_edma component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_uart_edma.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)

#OR Logic component
if(${MCUX_DEVICE} STREQUAL "MKV11Z7")
    include(driver_edma_MKV11Z7)
endif()
if(${MCUX_DEVICE} STREQUAL "MKV31F51212")
    include(driver_edma_MKV31F51212)
endif()
if(${MCUX_DEVICE} STREQUAL "MK22F51212")
    include(driver_edma_MK22F51212)
endif()
if(${MCUX_DEVICE} STREQUAL "MK64F12")
    include(driver_edma_MK64F12)
endif()
if(${MCUX_DEVICE} STREQUAL "MK66F18")
    include(driver_edma_MK66F18)
endif()

include(driver_uart)
