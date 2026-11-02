/* Module: rmme3260.dll
   Function: FUN_66245e50
   Address: 66245e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66245e50(int param_1)

{
  if (*(code **)(param_1 + 0x108) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x66245e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x108))();
    return;
  }
  return;
}


