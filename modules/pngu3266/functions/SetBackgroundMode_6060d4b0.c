/* Module: pngu3266.dll
   Function: SetBackgroundMode
   Address: 6060d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNDC::SetBackgroundMode(long) */

long __thiscall XPNDC::SetBackgroundMode(XPNDC *this,long param_1)

{
  long lVar1;
  
                    /* 0x1d4b0  1831  ?SetBackgroundMode@XPNDC@@QAEJJ@Z */
  lVar1 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = param_1;
  (**(code **)(*(int *)this + 0xdc))(param_1);
  return lVar1;
}


