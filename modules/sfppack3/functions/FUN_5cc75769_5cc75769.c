/* Module: sfppack3.dll
   Function: FUN_5cc75769
   Address: 5cc75769
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cc75769(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cc73ec0(this,param_1,param_2,param_2 + 0x5c,param_3,param_4);
  *(int *)((int)this + 0xd8) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc8eb70;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc8eb28;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc8eb10;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cc8eae8;
  return this;
}


