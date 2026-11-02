/* Module: rmme3260.dll
   Function: FUN_6625c8a0
   Address: 6625c8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625c8a0(int param_1)

{
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x6625c8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x50) + 4))();
    return;
  }
  return;
}


