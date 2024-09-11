/*
 * Copyright (C) 2017 - 2018 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef vrc6_h_
#define vrc6_h_

void vrc6init(uint8_t *prgROM, uint32_t prgROMsize, 
			uint8_t *prgRAM, uint32_t prgRAMsize,
			uint8_t *chrROM, uint32_t chrROMsize);
void vrc6initGet8(uint16_t addr);
void m24_initSet8(uint16_t ori_addr);
void m26_initSet8(uint16_t ori_addr);
void vrc6initPPUGet8(uint16_t addr);
void vrc6initPPUSet8(uint16_t addr);
void vrc6cycle();

#endif
