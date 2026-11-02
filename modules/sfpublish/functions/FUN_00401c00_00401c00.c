/* Module: sfpublish.dll
   Function: FUN_00401c00
   Address: 00401c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401c00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


