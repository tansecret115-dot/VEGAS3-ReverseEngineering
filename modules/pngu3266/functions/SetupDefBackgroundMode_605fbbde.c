/* Module: pngu3266.dll
   Function: SetupDefBackgroundMode
   Address: 605fbbde
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetupDefBackgroundMode(long &) */

void __thiscall CPNDC::SetupDefBackgroundMode(CPNDC *this,long *param_1)

{
  int iVar1;
  
                    /* 0xbbde  2048  ?SetupDefBackgroundMode@CPNDC@@UAEXAAJ@Z */
  iVar1 = GetBkMode(*(HDC *)(this + 0x1cf));
  *param_1 = iVar1;
  return;
}


