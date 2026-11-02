/* Module: stl2plg.dll
   Function: FUN_00402860
   Address: 00402860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402860(int param_1)

{
  if (*(int *)(param_1 + 400) != 0) {
    FUN_004020c0(*(int *)(param_1 + 400));
    if (*(int **)(param_1 + 400) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 400) + 0x58))(1);
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}


