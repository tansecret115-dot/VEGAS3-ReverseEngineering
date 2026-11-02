/* Module: encn3260.dll
   Function: FUN_664c8550
   Address: 664c8550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c8550(int param_1)

{
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x664c8559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x50) + 4))();
    return;
  }
  return;
}


