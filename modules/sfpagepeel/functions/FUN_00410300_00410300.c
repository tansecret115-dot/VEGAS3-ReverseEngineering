/* Module: sfpagepeel.dll
   Function: FUN_00410300
   Address: 00410300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410300(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  return 0;
}


