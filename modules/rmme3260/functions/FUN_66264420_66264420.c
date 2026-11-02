/* Module: rmme3260.dll
   Function: FUN_66264420
   Address: 66264420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66264420(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626d410;
  param_1[1] = &PTR_LAB_6626d3f0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[7] = 0;
  }
  return;
}


