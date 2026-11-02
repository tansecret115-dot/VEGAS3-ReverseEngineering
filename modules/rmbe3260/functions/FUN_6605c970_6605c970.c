/* Module: rmbe3260.dll
   Function: FUN_6605c970
   Address: 6605c970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6605c970(void *this,undefined4 *param_1)

{
  thunk_FUN_6605b610(param_1 + 2);
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


