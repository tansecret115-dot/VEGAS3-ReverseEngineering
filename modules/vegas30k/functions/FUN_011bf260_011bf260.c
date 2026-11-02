/* Module: vegas30k.dll
   Function: FUN_011bf260
   Address: 011bf260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011bf260(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_LAB_011ebcb4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[6] = 0;
  return;
}


