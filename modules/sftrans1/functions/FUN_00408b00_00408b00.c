/* Module: sftrans1.dll
   Function: FUN_00408b00
   Address: 00408b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408b00(int *param_1)

{
  param_1 = (int *)*param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


