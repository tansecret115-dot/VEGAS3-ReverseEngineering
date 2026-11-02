/* Module: enlv3260.dll
   Function: FUN_661d3270
   Address: 661d3270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d3270(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


