/* Module: encn3260.dll
   Function: FUN_664b09f0
   Address: 664b09f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b09f0(int param_1)

{
  if (*(code **)(param_1 + 0x108) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x664b09fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x108))();
    return;
  }
  return;
}


