/* Module: encn3260.dll
   Function: FUN_664c1c50
   Address: 664c1c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c1c50(void *this,int param_1)

{
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_FUN_664df7e8;
  FUN_664c1ad0(param_1);
  return this;
}


