/* Module: pncrt.dll
   Function: FUN_78007d00
   Address: 78007d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78007d00(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x78007d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


