/* Module: pngu3266.dll
   Function: FUN_6060c41d
   Address: 6060c41d
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNTimer * __thiscall
FUN_6060c41d(void *this,undefined4 param_1,ulong param_2,int param_3,CPNTimer **param_4)

{
  CPNTimer::CPNTimer(this,param_2,1,param_4);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(int *)((int)this + 0x2c) = param_3 * 2;
  CPNColor::CPNColor((CPNColor *)((int)this + 0x34));
  CPNColor::CPNColor((CPNColor *)((int)this + 0x53));
  *(undefined ***)this = &PTR_QueryInterface_6062b6c0;
  *(undefined ***)((int)this + 4) = &PTR_FUN_6062b6b8;
  CPNColor::operator=((CPNColor *)((int)this + 0x34),(CPNColor *)(*(int *)((int)this + 0x28) + 0xd0)
                     );
  CPNColor::operator=((CPNColor *)((int)this + 0x53),(CPNColor *)(*(int *)((int)this + 0x28) + 0xef)
                     );
  return this;
}


