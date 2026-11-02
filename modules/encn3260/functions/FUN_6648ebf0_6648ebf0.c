/* Module: encn3260.dll
   Function: FUN_6648ebf0
   Address: 6648ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648ebf0(void *this,undefined4 param_1)

{
  FUN_6648e1e0(this,param_1);
  *(undefined ***)this = &PTR_FUN_664de3c8;
  *(undefined4 *)((int)this + 0x95) = 0;
  *(undefined4 *)((int)this + 0x99) = 0;
  *(undefined2 *)((int)this + 0x9d) = 0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de3b0;
  return this;
}


