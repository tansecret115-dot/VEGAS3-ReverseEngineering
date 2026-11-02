/* Module: sfpublish.dll
   Function: FUN_0040e200
   Address: 0040e200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040e200(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x13];
  *param_1 = &PTR_LAB_004360fc;
  param_1[7] = &PTR_LAB_004360dc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x13] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    free((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  return;
}


