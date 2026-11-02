/* Module: rmme3260.dll
   Function: FUN_6623c040
   Address: 6623c040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c040(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    return 0x80040009;
  }
  *(int **)(param_1 + 0x90) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(**(int **)(param_1 + 0x90) + 0xc))(*(int **)(param_1 + 0x90),param_1);
  }
  return 0;
}


