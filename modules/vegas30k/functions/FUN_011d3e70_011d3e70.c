/* Module: vegas30k.dll
   Function: FUN_011d3e70
   Address: 011d3e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d3e70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x61];
  *param_1 = &PTR_LAB_011ec688;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x61] = 0;
  if ((void *)param_1[100] != (void *)0x0) {
    free((void *)param_1[100]);
  }
  param_1[100] = 0;
  param_1[0x65] = 0;
  return;
}


