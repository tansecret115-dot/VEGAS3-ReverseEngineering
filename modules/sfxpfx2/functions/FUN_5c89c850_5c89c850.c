/* Module: sfxpfx2.dll
   Function: FUN_5c89c850
   Address: 5c89c850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c89c850(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c8cc0fc(this,0,param_1,*(undefined4 *)(&DAT_5c8dd040 + param_3 * 8),
               *(undefined4 *)(&DAT_5c8dd044 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c8dd0b8;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c8dd0a8;
  return this;
}


