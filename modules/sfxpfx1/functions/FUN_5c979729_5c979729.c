/* Module: sfxpfx1.dll
   Function: FUN_5c979729
   Address: 5c979729
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c979729(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5c977e80(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_5c991e48;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c991e00;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c991de8;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5c991dc0;
  return this;
}


