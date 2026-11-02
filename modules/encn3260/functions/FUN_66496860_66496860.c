/* Module: encn3260.dll
   Function: FUN_66496860
   Address: 66496860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496860(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  UINT_PTR *pUVar3;
  
  *param_1 = &PTR_FUN_664de800;
  FUN_66497100((int)param_1);
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
    thunk_FUN_6649db30(piVar2);
    operator_delete(piVar2);
    param_1[0x13] = 0;
  }
  pUVar3 = (UINT_PTR *)param_1[0x15];
  if (pUVar3 != (UINT_PTR *)0x0) {
    FUN_6649d720(pUVar3);
    operator_delete(pUVar3);
    param_1[0x15] = 0;
  }
  return;
}


