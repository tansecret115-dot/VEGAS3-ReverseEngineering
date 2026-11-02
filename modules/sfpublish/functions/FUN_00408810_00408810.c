/* Module: sfpublish.dll
   Function: FUN_00408810
   Address: 00408810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408810(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


