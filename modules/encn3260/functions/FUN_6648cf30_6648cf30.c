/* Module: encn3260.dll
   Function: FUN_6648cf30
   Address: 6648cf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648cf30(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x16);
  *param_1 = &PTR_FUN_664de204;
  if (piVar1 != (int *)0x0) {
    FUN_66494a80(piVar1);
    operator_delete(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0x1a);
  if (piVar1 != (int *)0x0) {
    FUN_66494610(piVar1);
    operator_delete(piVar1);
  }
  pvVar2 = *(void **)((int)param_1 + 0x1e);
  if (pvVar2 != (void *)0x0) {
    FUN_664d1b90((int)pvVar2);
    operator_delete(pvVar2);
  }
  return;
}


