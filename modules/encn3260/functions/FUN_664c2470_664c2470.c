/* Module: encn3260.dll
   Function: FUN_664c2470
   Address: 664c2470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c2470(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_664df8a0;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


