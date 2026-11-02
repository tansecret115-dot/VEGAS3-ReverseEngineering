/* Module: encn3260.dll
   Function: FUN_6648ee10
   Address: 6648ee10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648ee10(void *this,undefined4 param_1)

{
  FUN_6648e1e0(this,param_1);
  *(undefined ***)this = &PTR_FUN_664de458;
  *(undefined4 *)((int)this + 0x95) = 0;
  *(undefined1 *)((int)this + 0x99) = 0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_664de440;
  *(undefined4 *)((int)this + 0x58) = 0x10000;
  return this;
}


