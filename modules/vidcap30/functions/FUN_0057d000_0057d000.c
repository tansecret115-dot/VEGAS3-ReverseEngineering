/* Module: vidcap30.exe
   Function: FUN_0057d000
   Address: 0057d000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057d000(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  if (iVar1 != *(int *)(param_1 + 0x10)) {
    return 0x80040203;
  }
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    return 1;
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
  return 0;
}


