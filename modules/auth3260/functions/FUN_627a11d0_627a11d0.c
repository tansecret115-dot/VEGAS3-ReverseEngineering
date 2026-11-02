/* Module: auth3260.dll
   Function: FUN_627a11d0
   Address: 627a11d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a11d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_627a78d8;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


