/* Module: vegas30.exe
   Function: FUN_005fa7c0
   Address: 005fa7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fa7c0(int param_1,double *param_2)

{
  float10 fVar1;
  
  if (param_2 == (double *)0x0) {
    return 0x80070057;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),1);
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10));
  *param_2 = (double)fVar1;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0);
  return 0;
}


