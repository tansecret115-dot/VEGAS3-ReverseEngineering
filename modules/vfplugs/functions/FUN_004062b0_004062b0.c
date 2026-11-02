/* Module: vfplugs.dll
   Function: FUN_004062b0
   Address: 004062b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004062b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


