/* Module: vidpcore.dll
   Function: FUN_5de080a0
   Address: 5de080a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de080a0(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


