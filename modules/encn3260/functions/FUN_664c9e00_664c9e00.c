/* Module: encn3260.dll
   Function: FUN_664c9e00
   Address: 664c9e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c9e00(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 6) = param_1;
  *(undefined ***)this = &PTR_LAB_664de148;
  *(undefined2 *)((int)this + 4) = param_2;
  FUN_664bb2c0((undefined4 *)((int)this + 10));
  *(undefined ***)this = &PTR_FUN_664dfce0;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  return this;
}


