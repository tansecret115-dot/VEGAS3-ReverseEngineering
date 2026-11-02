/* Module: vegas30k.dll
   Function: FUN_011b46b0
   Address: 011b46b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b46b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_LAB_011eb528;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x89];
  param_1[4] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((void *)param_1[0x95] != (void *)0x0) {
    free((void *)param_1[0x95]);
  }
  return;
}


