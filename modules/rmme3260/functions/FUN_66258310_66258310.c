/* Module: rmme3260.dll
   Function: FUN_66258310
   Address: 66258310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66258310(int *param_1)

{
  *param_1 = (int)&PTR_LAB_6626cf98;
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x26));
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  if (param_1 != (int *)0x0) {
    FUN_66258740(param_1);
  }
  return;
}


