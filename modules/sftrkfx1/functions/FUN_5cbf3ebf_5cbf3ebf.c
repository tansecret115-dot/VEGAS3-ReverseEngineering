/* Module: sftrkfx1.dll
   Function: FUN_5cbf3ebf
   Address: 5cbf3ebf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cbf3ebf(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cbf34c2(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc0aba0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc0ab58;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc0ab40;
  return this;
}


