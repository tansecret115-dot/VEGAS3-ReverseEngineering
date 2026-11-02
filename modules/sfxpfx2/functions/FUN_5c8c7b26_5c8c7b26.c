/* Module: sfxpfx2.dll
   Function: FUN_5c8c7b26
   Address: 5c8c7b26
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c8c7b26(void *this,undefined4 param_1)

{
  FUN_5c8cbf49((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_5c8e2f80;
  return this;
}


