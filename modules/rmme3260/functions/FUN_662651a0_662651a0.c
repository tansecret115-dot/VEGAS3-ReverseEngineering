/* Module: rmme3260.dll
   Function: FUN_662651a0
   Address: 662651a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662651a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d470;
  if (*(void **)((int)param_1 + 0x1e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x1e));
  }
  return;
}


