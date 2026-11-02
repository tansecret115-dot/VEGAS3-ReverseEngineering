/* Module: vegas30.exe
   Function: FUN_00409100
   Address: 00409100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00409100(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


