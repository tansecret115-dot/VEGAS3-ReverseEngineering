/* Module: encn3260.dll
   Function: FUN_664a0950
   Address: 664a0950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a0950(uint param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    return 0x80040009;
  }
  *(int **)(param_1 + 0x54) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)(**(int **)(param_1 + 0x54) + 0xc))
              (*(int **)(param_1 + 0x54),-(uint)(param_1 != 4) & param_1);
  }
  return 0;
}


