/* Module: sfnetmedia.dll
   Function: FUN_00408510
   Address: 00408510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408510(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


