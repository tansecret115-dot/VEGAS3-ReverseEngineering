/* Module: sfmarket2.dll
   Function: FUN_0040a570
   Address: 0040a570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a570(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


