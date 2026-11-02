/* Module: sfxpfx1.dll
   Function: FUN_5c9508f0
   Address: 5c9508f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c9508f0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c97a7cc(this,0,param_1,*(undefined4 *)(&DAT_5c98c4c8 + param_3 * 8),
               *(undefined4 *)(&DAT_5c98c4cc + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c98c548;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c98c538;
  return this;
}


