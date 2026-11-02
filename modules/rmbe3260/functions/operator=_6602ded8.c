/* Module: rmbe3260.dll
   Function: operator=
   Address: 6602ded8
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNColor * __thiscall CPNColor::operator=(CPNColor *this,CPNColor *param_1)

{
  CPNColor *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


