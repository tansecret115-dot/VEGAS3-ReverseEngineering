/* Module: pncrt.dll
   Function: FUN_78006ea0
   Address: 78006ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_78006ea0(void *this,undefined1 param_1)

{
  FUN_78006e00(this);
  *(undefined ***)this = &PTR_LAB_780369b8;
  *(undefined1 *)((int)this + 8) = param_1;
  return this;
}


