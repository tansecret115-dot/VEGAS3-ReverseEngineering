/* Module: rn5a3260.dll
   Function: FUN_628a11d0
   Address: 628a11d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_628a11d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_628a67f8;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


