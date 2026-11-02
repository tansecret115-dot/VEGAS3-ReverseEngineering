/* Module: sftrkfx1.dll
   Function: FUN_5cbf31f9
   Address: 5cbf31f9
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cbf31f9(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cbf1950(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc0a978;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc0a930;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc0a918;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cc0a8f0;
  return this;
}


