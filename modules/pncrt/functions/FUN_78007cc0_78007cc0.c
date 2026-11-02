/* Module: pncrt.dll
   Function: FUN_78007cc0
   Address: 78007cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78007cc0(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x78007ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


