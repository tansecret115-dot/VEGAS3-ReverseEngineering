/* Module: aviplug.dll
   Function: FUN_5f94d1c0
   Address: 5f94d1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94d1c0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (0 < param_2) {
      do {
        *param_3 = *param_3 + *(int *)(*(int *)(param_1 + 4) + iVar1 * 4);
        iVar1 = (iVar1 + 1) % *(int *)(param_1 + 8);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return 0;
  }
  return 0x8000ffff;
}


