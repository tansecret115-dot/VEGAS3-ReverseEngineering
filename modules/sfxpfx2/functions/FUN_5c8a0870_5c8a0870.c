/* Module: sfxpfx2.dll
   Function: FUN_5c8a0870
   Address: 5c8a0870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c8a0870(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c8cc0fc(this,0,param_1,*(undefined4 *)(&DAT_5c8dd410 + param_3 * 8),
               *(undefined4 *)(&DAT_5c8dd414 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c8dd4a0;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c8dd490;
  return this;
}


