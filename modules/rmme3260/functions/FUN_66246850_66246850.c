/* Module: rmme3260.dll
   Function: FUN_66246850
   Address: 66246850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66246850(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_6626c880;
  param_1[1] = &PTR_LAB_6626c848;
  FUN_66247ee0((int)param_1);
  pvVar2 = DAT_6627d0d8;
  DAT_6627d0dc = DAT_6627d0dc + -1;
  if ((DAT_6627d0dc == 0) && (DAT_6627d0d8 != (void *)0x0)) {
    FUN_66245e10((int)DAT_6627d0d8);
    operator_delete(pvVar2);
    DAT_6627d0d8 = (void *)0x0;
  }
  FUN_662468c0((int)param_1);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  FUN_66250a40((int *)((int)param_1 + 0x4fa));
  return;
}


