/* Module: rmbe3260.dll
   Function: FUN_66055cd0
   Address: 66055cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66055cd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068a30;
  if (*(void **)((int)param_1 + 0x1e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x1e));
  }
  return;
}


