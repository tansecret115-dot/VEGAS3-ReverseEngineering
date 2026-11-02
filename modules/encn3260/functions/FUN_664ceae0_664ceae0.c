/* Module: encn3260.dll
   Function: FUN_664ceae0
   Address: 664ceae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ceae0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  FUN_664ceb60((int)param_1);
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_664bdbe0(piVar1);
    operator_delete(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    thunk_FUN_664bdbe0(piVar1);
    operator_delete(piVar1);
    param_1[2] = 0;
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    FUN_66494490();
    operator_delete(pvVar2);
  }
  return;
}


