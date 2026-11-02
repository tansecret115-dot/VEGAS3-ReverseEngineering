/* Module: sfxpfx1.dll
   Function: FUN_5c9761f6
   Address: 5c9761f6
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c9761f6(void *this,undefined4 param_1)

{
  FUN_5c97a619((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_5c991c98;
  return this;
}


