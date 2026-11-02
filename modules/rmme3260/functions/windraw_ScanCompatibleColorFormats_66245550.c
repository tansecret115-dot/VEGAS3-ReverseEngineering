/* Module: rmme3260.dll
   Function: windraw_ScanCompatibleColorFormats
   Address: 66245550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_ScanCompatibleColorFormats,16 */

undefined4
windraw_ScanCompatibleColorFormats
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* 0x45550  25  _windraw_ScanCompatibleColorFormats@16 */
  if (DAT_6627d080 != (void *)0x0) {
    uVar1 = FUN_66246060(DAT_6627d080,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


