/* Module: rmbe3260.dll
   Function: FUN_6602af20
   Address: 6602af20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602af20(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x10);
    param_2[1] = *(undefined4 *)(iVar1 + 0x14);
    return 0;
  }
  return 0x80004005;
}


