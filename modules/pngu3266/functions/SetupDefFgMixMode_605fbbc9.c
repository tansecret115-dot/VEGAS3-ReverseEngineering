/* Module: pngu3266.dll
   Function: SetupDefFgMixMode
   Address: 605fbbc9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefFgMixMode(long &) */

void __thiscall CPNDC::SetupDefFgMixMode(CPNDC *this,long *param_1)

{
  int iVar1;
  
                    /* 0xbbc9  2051  ?SetupDefFgMixMode@CPNDC@@UAEXAAJ@Z */
  iVar1 = GetROP2(*(HDC *)(this + 0x1cf));
  *param_1 = iVar1;
  return;
}


