add_executable(ssd1306_i2c
        ssd1306_i2c.c
)

target_link_libraries(ssd1306_i2c pico_stdlib hardware_i2c freertos)
pico_add_extra_outputs(ssd1306_i2c)
