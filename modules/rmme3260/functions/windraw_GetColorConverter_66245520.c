/* Module: rmme3260.dll
   Function: windraw_GetColorConverter
   Address: 66245520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_GetColorConverter,8 */

undefined4 windraw_GetColorConverter(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x45520  22  _windraw_GetColorConverter@8 */
  if (DAT_6627d080 != (void *)0x0) {
    uVar1 = FUN_66246030(DAT_6627d080,param_1,param_2);
    return uVar1;
  }
  return 0;
}


