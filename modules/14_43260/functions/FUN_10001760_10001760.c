/* Module: 14_43260.dll
   Function: FUN_10001760
   Address: 10001760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10001760(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10007090;
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x26));
  }
  return;
}


