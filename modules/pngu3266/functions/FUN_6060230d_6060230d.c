/* Module: pngu3266.dll
   Function: FUN_6060230d
   Address: 6060230d
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6060230d(void *this,undefined4 param_1,CPNTimer **param_2)

{
  CPNTimer::CPNTimer(this,0x1e,1,param_2);
  *(undefined ***)this = &PTR_QueryInterface_60629598;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined ***)((int)this + 4) = &PTR_FUN_60629590;
  return this;
}


