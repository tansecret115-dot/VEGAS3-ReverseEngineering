/* Module: sfxpfx2.dll
   Function: FUN_5c897ec0
   Address: 5c897ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c897ec0(void *this,int param_1,undefined4 param_2,int param_3)

{
  FUN_5c8cc0fc(this,0,param_1,*(undefined4 *)(&DAT_5c8dcb90 + param_3 * 8),
               *(undefined4 *)(&DAT_5c8dcb94 + param_3 * 8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined ***)this = &PTR_LAB_5c8dcc28;
  *(undefined ***)((int)this + 4) = &PTR_FUN_5c8dcc18;
  return this;
}


