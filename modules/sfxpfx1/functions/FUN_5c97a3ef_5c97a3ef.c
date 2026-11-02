/* Module: sfxpfx1.dll
   Function: FUN_5c97a3ef
   Address: 5c97a3ef
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5c97a3ef(void *this,undefined4 param_1,int param_2,undefined4 param_3,short *param_4)

{
  FUN_5c9799f2(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 0xa8) = param_2;
  *(undefined ***)this = &PTR_FUN_5c992070;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5c992028;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5c992010;
  return this;
}


