/* Module: erv13260.dll
   Function: FUN_635f1f70
   Address: 635f1f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_635f1f70(int param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x635f1f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}


