/* Module: encn3260.dll
   Function: FUN_66490320
   Address: 66490320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66490320(void *this,undefined4 param_1)

{
  FUN_6648f080(this,param_1);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0xff;
  *(undefined ***)this = &PTR_FUN_664de628;
  return this;
}


