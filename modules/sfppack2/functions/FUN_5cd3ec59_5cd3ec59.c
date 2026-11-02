/* Module: sfppack2.dll
   Function: FUN_5cd3ec59
   Address: 5cd3ec59
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cd3ec59(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cd3d3b0(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cd5a408;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cd5a3c0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cd5a3a8;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cd5a380;
  return this;
}


