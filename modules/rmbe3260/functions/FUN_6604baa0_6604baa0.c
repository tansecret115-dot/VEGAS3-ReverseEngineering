/* Module: rmbe3260.dll
   Function: FUN_6604baa0
   Address: 6604baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604baa0(void *this,undefined2 param_1)

{
  FUN_6604b550(this);
  *(undefined ***)this = &PTR_FUN_66068688;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = param_1;
  return this;
}


