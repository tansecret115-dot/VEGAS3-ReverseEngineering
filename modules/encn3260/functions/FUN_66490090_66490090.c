/* Module: encn3260.dll
   Function: FUN_66490090
   Address: 66490090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66490090(void *this,undefined4 param_1)

{
  FUN_6648f080(this,param_1);
  *(undefined ***)this = &PTR_FUN_664de5a8;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  return this;
}


