/* Module: vegas30.exe
   Function: Evaluate
   Address: 005fe6ce
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall
CSfXSpline::Evaluate
          (CSfXSpline *this,double param_1,tSFXSPLINEPOINT *param_2,tSFXSPLINEPOINT *param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x005fe6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Evaluate(this,param_1,param_2,param_3);
  return lVar1;
}


