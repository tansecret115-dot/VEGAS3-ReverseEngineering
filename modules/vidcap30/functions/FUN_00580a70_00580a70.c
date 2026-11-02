/* Module: vidcap30.exe
   Function: FUN_00580a70
   Address: 00580a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580a70(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


