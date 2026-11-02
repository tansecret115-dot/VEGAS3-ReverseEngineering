/* Module: rmme3260.dll
   Function: FUN_66204530
   Address: 66204530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66204530(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_6626b2b8;
  if (*(int **)((int)this + 8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 8) + 0xc))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


