/* Module: pngu3266.dll
   Function: GetTextLength
   Address: 605f3401
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNControl::GetTextLength(void)const  */

long __thiscall CPNControl::GetTextLength(CPNControl *this)

{
  long lVar1;
  
                    /* 0x3401  1391  ?GetTextLength@CPNControl@@UBEJXZ */
                    /* WARNING: Could not recover jumptable at 0x605f3403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(int *)this + 0x28))();
  return lVar1;
}


