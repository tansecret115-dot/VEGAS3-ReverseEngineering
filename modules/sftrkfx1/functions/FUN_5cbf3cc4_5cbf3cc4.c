/* Module: sftrkfx1.dll
   Function: FUN_5cbf3cc4
   Address: 5cbf3cc4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cbf3cc4(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cbf31f9(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc0ab00;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc0aab8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc0aaa0;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cc0aa78;
  return this;
}


