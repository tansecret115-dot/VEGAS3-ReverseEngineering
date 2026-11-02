/* Module: encn3260.dll
   Function: windraw_GetColorConverter
   Address: 664b00d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_GetColorConverter,8 */

undefined4 windraw_GetColorConverter(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x300d0  17  _windraw_GetColorConverter@8 */
  if (DAT_664f0878 != (void *)0x0) {
    uVar1 = FUN_664b0bd0(DAT_664f0878,param_1,param_2);
    return uVar1;
  }
  return 0;
}


