/* Module: 28_83260.dll
   Function: FUN_100018b0
   Address: 100018b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100018b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10007088;
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x26));
  }
  return;
}


