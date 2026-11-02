/* Module: pncrt.dll
   Function: FUN_78007040
   Address: 78007040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78007040(void *this,int param_1)

{
  FUN_78006e00(this);
  *(int *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_780369d0;
  *(uint *)((int)this + 0xc) = (param_1 != 2) - 1 & 4;
  return this;
}


