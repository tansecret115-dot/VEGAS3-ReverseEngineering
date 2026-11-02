/* Module: sfppack1.dll
   Function: FUN_5ce02675
   Address: 5ce02675
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5ce02675(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cdffdd9(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5ce1a8f8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5ce1a8b0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce1a898;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5ce1a870;
  return this;
}


