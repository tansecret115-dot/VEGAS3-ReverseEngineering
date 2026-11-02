/* Module: rmme3260.dll
   Function: windraw_SetRGB8Palette
   Address: 662454f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_SetRGB8Palette,12 */

undefined4 windraw_SetRGB8Palette(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x454f0  26  _windraw_SetRGB8Palette@12 */
  if (DAT_6627d080 != (void *)0x0) {
    uVar1 = FUN_66245ef0(DAT_6627d080,param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


