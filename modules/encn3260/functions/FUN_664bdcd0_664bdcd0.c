/* Module: encn3260.dll
   Function: FUN_664bdcd0
   Address: 664bdcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bdcd0(void *this,undefined4 *param_1)

{
  thunk_FUN_664bb280(param_1 + 2);
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


