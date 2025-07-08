/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef BUS_SCAN_H
#define BUS_SCAN_H

#include <stdint.h> // Für uint8_t
#include <stdbool.h> // Für bool

// Deklariert die Funktion, die prüft, ob eine I2C-Adresse reserviert ist.
// Diese Funktion ist in bus_scan.c definiert.
bool reserved_addr(uint8_t addr);

#endif // BUS_SCAN_H
