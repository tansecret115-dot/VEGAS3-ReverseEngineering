/* Module: encn3260.dll
   Function: windraw_ScanCompatibleColorFormats
   Address: 664b0100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall windraw_ScanCompatibleColorFormats,16 */

undefined4
windraw_ScanCompatibleColorFormats
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* 0x30100  20  _windraw_ScanCompatibleColorFormats@16 */
  if (DAT_664f0878 != (void *)0x0) {
    uVar1 = FUN_664b0c00(DAT_664f0878,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


