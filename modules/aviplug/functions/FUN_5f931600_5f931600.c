/* Module: aviplug.dll
   Function: FUN_5f931600
   Address: 5f931600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f931600(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f9d76a8;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}


