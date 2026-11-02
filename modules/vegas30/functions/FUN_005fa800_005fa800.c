/* Module: vegas30.exe
   Function: FUN_005fa800
   Address: 005fa800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa800(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),1);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10));
  *param_2 = iVar1;
  param_2[1] = iVar1 >> 0x1f;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  return 0;
}


