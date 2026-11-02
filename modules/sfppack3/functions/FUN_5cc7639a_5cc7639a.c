/* Module: sfppack3.dll
   Function: FUN_5cc7639a
   Address: 5cc7639a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cc7639a(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cc75a32(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc8ed98;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc8ed50;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc8ed38;
  return this;
}


