/* Module: sfppack2.dll
   Function: FUN_5cd416f0
   Address: 5cd416f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cd416f0(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cd3ef22(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cd5a6c0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd5a678;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5a660;
  return this;
}


