/* Module: rmme3260.dll
   Function: FUN_6622d2d0
   Address: 6622d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6622d2d0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  UINT_PTR *pUVar3;
  
  *param_1 = &PTR_FUN_6626bd60;
  FUN_6622d620((int)param_1);
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    operator_delete(*(void **)((int)pvVar1 + 0x10));
    operator_delete(pvVar1);
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[0x13];
  if (piVar2 != (int *)0x0) {
    thunk_FUN_662338f0(piVar2);
    operator_delete(piVar2);
    param_1[0x13] = 0;
  }
  pUVar3 = (UINT_PTR *)param_1[0x15];
  if (pUVar3 != (UINT_PTR *)0x0) {
    FUN_66233780(pUVar3);
    operator_delete(pUVar3);
    param_1[0x15] = 0;
  }
  return;
}


