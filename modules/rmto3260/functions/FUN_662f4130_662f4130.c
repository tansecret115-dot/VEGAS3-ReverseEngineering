/* Module: rmto3260.dll
   Function: FUN_662f4130
   Address: 662f4130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f4130(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66307e70;
  if (*(void **)((int)param_1 + 0x1e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x1e));
  }
  return;
}


