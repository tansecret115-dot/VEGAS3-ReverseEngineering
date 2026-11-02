/* Module: sftrans1.dll
   Function: FUN_004286b0
   Address: 004286b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004286b0(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = 2;
  return 0;
}


