/* Module: sfppack2.dll
   Function: FUN_5cd414f5
   Address: 5cd414f5
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cd414f5(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cd3ec59(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5cd5a620;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd5a5d8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5a5c0;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cd5a598;
  return this;
}


