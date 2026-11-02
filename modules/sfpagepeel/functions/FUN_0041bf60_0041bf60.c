/* Module: sfpagepeel.dll
   Function: FUN_0041bf60
   Address: 0041bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041bf60(byte *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x44)) {
    if ((*param_1 & 0x80) != 0) {
      param_2 = FUN_0041bfe0((int)param_1,param_2);
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


