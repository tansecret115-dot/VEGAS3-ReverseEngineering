/* Module: sfmarket2.dll
   Function: FUN_0040a5d0
   Address: 0040a5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a5d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


