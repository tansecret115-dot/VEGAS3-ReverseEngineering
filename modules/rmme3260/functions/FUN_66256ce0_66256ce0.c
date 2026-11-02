/* Module: rmme3260.dll
   Function: FUN_66256ce0
   Address: 66256ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66256ce0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


