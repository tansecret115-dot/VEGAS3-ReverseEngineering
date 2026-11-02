/* Module: sftrans1.dll
   Function: FUN_00545d50
   Address: 00545d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00545d50(int *param_1,int param_2)

{
  if ((1 < *(int *)(*param_1 + -0xc)) || (*(int *)(*param_1 + -4) < param_2)) {
    FUN_00545c60();
    FUN_00545c10(param_2);
  }
  return;
}


