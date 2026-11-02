/* Module: encn3260.dll
   Function: FUN_664d1f30
   Address: 664d1f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d1f30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664dfe50;
  if (*(void **)((int)param_1 + 0x1e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x1e));
  }
  return;
}


