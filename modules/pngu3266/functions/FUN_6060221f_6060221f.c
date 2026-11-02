/* Module: pngu3266.dll
   Function: FUN_6060221f
   Address: 6060221f
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall
FUN_6060221f(void *this,undefined4 param_1,undefined4 param_2,CPNTimer **param_3)

{
  CPNTimer::CPNTimer(this,0x1e,1,param_3);
  *(undefined ***)this = &PTR_QueryInterface_60629578;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined ***)((int)this + 4) = &PTR_FUN_60629570;
  return this;
}


