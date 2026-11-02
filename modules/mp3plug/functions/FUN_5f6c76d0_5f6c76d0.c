/* Module: mp3plug.dll
   Function: FUN_5f6c76d0
   Address: 5f6c76d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c76d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  *(char *)(*(int *)(param_1 + 8) + iVar1) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


