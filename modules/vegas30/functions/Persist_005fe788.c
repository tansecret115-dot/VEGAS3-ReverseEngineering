/* Module: vegas30.exe
   Function: Persist
   Address: 005fe788
   Source: Ghidra pseudocode (Stage 10 batch) */


long _summarylisttag::Persist(IStream *param_1,int param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x005fe788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Persist(param_1,param_2);
  return lVar1;
}


