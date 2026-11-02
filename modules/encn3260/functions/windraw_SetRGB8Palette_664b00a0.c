/* Module: encn3260.dll
   Function: windraw_SetRGB8Palette
   Address: 664b00a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_SetRGB8Palette,12 */

undefined4 windraw_SetRGB8Palette(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x300a0  21  _windraw_SetRGB8Palette@12 */
  if (DAT_664f0878 != (void *)0x0) {
    uVar1 = FUN_664b0a90(DAT_664f0878,param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


