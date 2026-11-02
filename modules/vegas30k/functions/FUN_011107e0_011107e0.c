/* Module: vegas30k.dll
   Function: FUN_011107e0
   Address: 011107e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011107e0(byte *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x44)) {
    if ((*param_1 & 0x80) != 0) {
      param_2 = FUN_01110860(param_1,param_2);
    }
    iVar1 = (int)(((longlong)(param_2 - *(int *)(param_1 + 0x44)) *
                  (longlong)*(int *)(param_1 + 0xa8)) /
                 (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)));
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar1 = *(int *)(param_1 + 0xa8) - iVar1;
    }
    return iVar1;
  }
  return 0;
}


