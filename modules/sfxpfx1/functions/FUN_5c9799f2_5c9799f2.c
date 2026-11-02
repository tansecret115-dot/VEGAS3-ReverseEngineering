/* Module: sfxpfx1.dll
   Function: FUN_5c9799f2
   Address: 5c9799f2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c9799f2(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(int *)((int)this + 0xa0) = param_2;
  *(undefined ***)this = &PTR_FUN_5c991ee8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c991ea0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c991e88;
  return this;
}


