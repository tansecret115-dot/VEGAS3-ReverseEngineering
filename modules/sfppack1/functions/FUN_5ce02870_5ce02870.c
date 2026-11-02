/* Module: sfppack1.dll
   Function: FUN_5ce02870
   Address: 5ce02870
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall
FUN_5ce02870(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5ce000a2(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5ce1a998;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5ce1a950;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce1a938;
  return this;
}


