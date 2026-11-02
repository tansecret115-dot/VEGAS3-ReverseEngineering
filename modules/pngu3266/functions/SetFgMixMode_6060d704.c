/* Module: pngu3266.dll
   Function: SetFgMixMode
   Address: 6060d704
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNDC::SetFgMixMode(long) */

long __thiscall XPNDC::SetFgMixMode(XPNDC *this,long param_1)

{
  long lVar1;
  
                    /* 0x1d704  1903  ?SetFgMixMode@XPNDC@@QAEJJ@Z */
  lVar1 = *(long *)(this + 0x24);
  *(long *)(this + 0x24) = param_1;
  (**(code **)(*(int *)this + 0xd8))(param_1);
  return lVar1;
}


