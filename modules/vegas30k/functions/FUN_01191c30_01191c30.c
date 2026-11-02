/* Module: vegas30k.dll
   Function: FUN_01191c30
   Address: 01191c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01191c30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_LAB_011ea874;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[4] = 0;
  return;
}


