/* Module: sftrans1.dll
   Function: FUN_00441240
   Address: 00441240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441240(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = 0;
  return 0;
}


