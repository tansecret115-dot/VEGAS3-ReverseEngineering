/* Module: rmme3260.dll
   Function: FUN_66252800
   Address: 66252800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66252800(void *this,undefined4 *param_1)

{
  thunk_FUN_662500b0(param_1 + 2);
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


