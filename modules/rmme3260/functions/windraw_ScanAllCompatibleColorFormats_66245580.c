/* Module: rmme3260.dll
   Function: windraw_ScanAllCompatibleColorFormats
   Address: 66245580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_ScanAllCompatibleColorFormats,12 */

undefined4
windraw_ScanAllCompatibleColorFormats(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x45580  24  _windraw_ScanAllCompatibleColorFormats@12 */
  if (DAT_6627d080 != (void *)0x0) {
    uVar1 = FUN_66246090(DAT_6627d080,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


