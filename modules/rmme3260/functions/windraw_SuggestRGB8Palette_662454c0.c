/* Module: rmme3260.dll
   Function: windraw_SuggestRGB8Palette
   Address: 662454c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_SuggestRGB8Palette,8 */

undefined4 windraw_SuggestRGB8Palette(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x454c0  27  _windraw_SuggestRGB8Palette@8 */
  if (DAT_6627d080 != (void *)0x0) {
    uVar1 = FUN_66245ec0(DAT_6627d080,param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}


