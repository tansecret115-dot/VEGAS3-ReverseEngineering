/* Module: rmbe3260.dll
   Function: FUN_66008fc0
   Address: 66008fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66008fc0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66063e58;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


