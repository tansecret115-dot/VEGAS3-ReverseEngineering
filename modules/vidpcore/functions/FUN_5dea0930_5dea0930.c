/* Module: vidpcore.dll
   Function: FUN_5dea0930
   Address: 5dea0930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea0930(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x9c);
  return 0;
}


