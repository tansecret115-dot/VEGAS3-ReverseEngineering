/* Module: mpgvout.004
   Function: time
   Address: 10032f6c
   Source: Ghidra pseudocode (Stage 10 batch) */


time_t __cdecl time(time_t *_Time)

{
  time_t tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tVar1 = time(_Time);
  return tVar1;
}


