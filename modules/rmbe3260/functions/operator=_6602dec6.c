/* Module: rmbe3260.dll
   Function: operator=
   Address: 6602dec6
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNRegion * __thiscall CPNRegion::operator=(CPNRegion *this,CPNRegion *param_1)

{
  CPNRegion *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x6602dec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


