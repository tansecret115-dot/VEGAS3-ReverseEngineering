/* Module: encn3260.dll
   Function: FUN_66490ac0
   Address: 66490ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66490ac0(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 0x7c) = param_1;
  *(undefined2 *)((int)this + 0x80) = param_2;
  FUN_66490b30((int)this);
  return;
}


