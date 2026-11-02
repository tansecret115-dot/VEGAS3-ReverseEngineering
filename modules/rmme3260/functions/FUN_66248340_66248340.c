/* Module: rmme3260.dll
   Function: FUN_66248340
   Address: 66248340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66248340(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_6626c8a8;
  pvVar2 = DAT_6627d0f0;
  DAT_6627d0f4 = DAT_6627d0f4 + -1;
  if ((DAT_6627d0f4 == 0) && (DAT_6627d0f0 != (void *)0x0)) {
    FUN_66245e10((int)DAT_6627d0f0);
    operator_delete(pvVar2);
    DAT_6627d0f0 = (void *)0x0;
  }
  if (param_1[0x465] != 0) {
    FUN_66249db0(param_1 + 0x58f);
    FUN_6624ad70(param_1 + 0x12);
    param_1[0x465] = 0;
  }
  FUN_66248dc0((int)param_1);
  FUN_66248f30((int)param_1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  FUN_66245470();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  DeleteObject((HGDIOBJ)param_1[0x589]);
  DeleteObject((HGDIOBJ)param_1[0x58a]);
  FUN_66250a40((int *)((int)param_1 + 0x1682));
  FUN_66249d20(param_1 + 0x58f);
  FUN_66250210(param_1 + 0x584);
  return;
}


