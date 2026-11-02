/* Module: sfpagepeel.dll
   Function: FUN_00410770
   Address: 00410770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410770(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x70);
  return 0;
}


