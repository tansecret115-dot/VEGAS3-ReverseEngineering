/* Module: vfplugs.dll
   Function: FUN_00415610
   Address: 00415610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415610(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  if ((*(uint *)(param_1 + 0x44) & 0x8000000) == 0) {
    return 0x80004001;
  }
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x70);
  return 0;
}


