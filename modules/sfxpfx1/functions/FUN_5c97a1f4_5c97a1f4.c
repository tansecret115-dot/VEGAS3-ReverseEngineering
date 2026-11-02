/* Module: sfxpfx1.dll
   Function: FUN_5c97a1f4
   Address: 5c97a1f4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c97a1f4(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5c979729(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5c991fd0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c991f88;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c991f70;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5c991f48;
  return this;
}


