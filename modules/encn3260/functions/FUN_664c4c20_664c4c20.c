/* Module: encn3260.dll
   Function: FUN_664c4c20
   Address: 664c4c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c4c20(int *param_1)

{
  *param_1 = (int)&PTR_LAB_664df9f8;
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x26));
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  if (param_1 != (int *)0x0) {
    FUN_664c5070(param_1);
  }
  return;
}


