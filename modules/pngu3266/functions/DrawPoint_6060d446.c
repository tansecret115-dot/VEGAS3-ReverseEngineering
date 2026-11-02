/* Module: pngu3266.dll
   Function: DrawPoint
   Address: 6060d446
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNDC::DrawPoint(long,long) */

void __thiscall XPNDC::DrawPoint(XPNDC *this,long param_1,long param_2)

{
  long local_c;
  long local_8;
  
                    /* 0x1d446  1004  ?DrawPoint@XPNDC@@QAEXJJ@Z */
  local_c = param_1;
  local_8 = param_2;
  (**(code **)(*(int *)this + 8))(&local_c);
  return;
}


