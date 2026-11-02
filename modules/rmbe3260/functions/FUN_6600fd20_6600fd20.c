/* Module: rmbe3260.dll
   Function: FUN_6600fd20
   Address: 6600fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall FUN_6600fd20(void *this,ulong param_1,int param_2,CPNTimer **param_3)

{
  CPNTimer::CPNTimer(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_6605b650((undefined4 *)((int)this + 0x42));
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined ***)this = &PTR_LAB_660649f8;
  *(undefined ***)((int)this + 4) = &PTR_FUN_660649f0;
  XPNTimer::AddRef();
  return this;
}


