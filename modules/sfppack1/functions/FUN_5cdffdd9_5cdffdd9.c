/* Module: sfppack1.dll
   Function: FUN_5cdffdd9
   Address: 5cdffdd9
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5cdffdd9(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cdfe530(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_5ce1a6e0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5ce1a698;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce1a680;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5ce1a658;
  return this;
}


