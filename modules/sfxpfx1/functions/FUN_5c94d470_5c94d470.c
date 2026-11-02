/* Module: sfxpfx1.dll
   Function: FUN_5c94d470
   Address: 5c94d470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c94d470(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c97a7cc(this,0,param_1,*(undefined4 *)(&DAT_5c98c110 + param_3 * 8),
               *(undefined4 *)(&DAT_5c98c114 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c98c190;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c98c180;
  return this;
}


