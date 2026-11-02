/* Module: pngu3266.dll
   Function: SetLogicalFunction
   Address: 605fb3b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetLogicalFunction(long) */

void __thiscall CPNDC::SetLogicalFunction(CPNDC *this,long param_1)

{
                    /* 0xb3b4  1944  ?SetLogicalFunction@CPNDC@@UAEXJ@Z */
  *(long *)(this + 0x193) = param_1;
  CPNRadioGroup::AddRadio((CPNRadioGroup *)this,*(CPNRadioBtn **)(this + 0x1cf));
  return;
}


