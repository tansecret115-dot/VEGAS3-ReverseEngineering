/* Module: encn3260.dll
   Function: FUN_664d26a0
   Address: 664d26a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d26a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_664dfea8;
  param_1[1] = &PTR_LAB_664dfe88;
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


