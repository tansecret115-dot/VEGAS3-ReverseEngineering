/* Module: sftrans1.dll
   Function: FUN_0042b7f0
   Address: 0042b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b7f0(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = 2;
  return 0;
}


