/* Module: vegas30k.dll
   Function: FUN_01134a20
   Address: 01134a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01134a20(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_011e68d8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[3] = 0;
  return;
}


