/* Module: rmto3260.dll
   Function: FUN_662c1130
   Address: 662c1130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662c1130(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_66306210;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


