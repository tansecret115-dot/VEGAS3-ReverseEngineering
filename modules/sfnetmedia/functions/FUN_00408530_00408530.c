/* Module: sfnetmedia.dll
   Function: FUN_00408530
   Address: 00408530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408530(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


