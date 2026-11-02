/* Module: rmme3260.dll
   Function: FUN_662626e0
   Address: 662626e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662626e0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    thunk_FUN_66252710(piVar1);
    operator_delete(piVar1);
  }
  *param_1 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  pvVar2 = (void *)param_1[3];
  param_1[1] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_66268160();
    operator_delete(pvVar2);
  }
  param_1[3] = 0;
  return;
}


