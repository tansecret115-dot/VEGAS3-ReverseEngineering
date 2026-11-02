/* Module: mpgvout.003
   Function: time
   Address: 10032a7c
   Source: Ghidra pseudocode (Stage 10 batch) */


time_t __cdecl time(time_t *_Time)

{
  time_t tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10032a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tVar1 = time(_Time);
  return tVar1;
}


