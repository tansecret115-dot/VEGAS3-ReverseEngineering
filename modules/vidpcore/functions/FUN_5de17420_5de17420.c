/* Module: vidpcore.dll
   Function: FUN_5de17420
   Address: 5de17420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de17420(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = 2;
  return 0;
}


