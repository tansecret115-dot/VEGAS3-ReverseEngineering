/* Module: sfxpfx2.dll
   Function: FUN_5c893ff0
   Address: 5c893ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c893ff0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c8cc0fc(this,0,param_1,*(undefined4 *)(&DAT_5c8dc6a8 + param_3 * 8),
               *(undefined4 *)(&DAT_5c8dc6ac + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c8dc720;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c8dc710;
  return this;
}


