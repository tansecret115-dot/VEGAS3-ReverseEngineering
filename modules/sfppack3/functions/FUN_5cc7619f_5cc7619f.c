/* Module: sfppack3.dll
   Function: FUN_5cc7619f
   Address: 5cc7619f
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5cc7619f(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5cc75769(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(int *)((int)this + 0xe0) = param_2;
  *(undefined ***)this = &PTR_FUN_5cc8ecf8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5cc8ecb0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5cc8ec98;
  *(undefined ***)((int)this + 0x98) = &PTR_LAB_5cc8ec70;
  return this;
}


