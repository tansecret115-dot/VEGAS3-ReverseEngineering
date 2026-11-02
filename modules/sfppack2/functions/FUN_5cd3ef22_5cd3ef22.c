/* Module: sfppack2.dll
   Function: FUN_5cd3ef22
   Address: 5cd3ef22
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cd3ef22(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(int *)((int)this + 0xa0) = param_2;
  *(undefined ***)this = &PTR_FUN_5cd5a4a8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd5a460;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5a448;
  return this;
}


