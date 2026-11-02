/* Module: sfpublish.dll
   Function: FUN_00415450
   Address: 00415450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00415450(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined ***)this = &PTR_LAB_004366a8;
  FUN_00420460(param_2);
  *(int *)((int)this + 0x20) = param_2;
  return this;
}


