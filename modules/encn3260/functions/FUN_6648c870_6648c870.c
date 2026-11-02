/* Module: encn3260.dll
   Function: FUN_6648c870
   Address: 6648c870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648c870(void *this,byte param_1)

{
  FUN_664bb3e0((int *)((int)this + 0x40));
  FUN_664bb3e0((int *)((int)this + 0x34));
  FUN_664bd5d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


