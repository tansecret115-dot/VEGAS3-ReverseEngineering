/* Module: sftrans1.dll
   Function: FUN_0045d7b0
   Address: 0045d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045d7b0(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_2,4);
  if (BVar1 != 0) {
    return 0x80004003;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x70);
  return 0;
}


