/* Module: rmme3260.dll
   Function: FUN_66262b80
   Address: 66262b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66262b80(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  FUN_66262c00((int)param_1);
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
    param_1[2] = 0;
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    FUN_66268160();
    operator_delete(pvVar2);
  }
  return;
}


