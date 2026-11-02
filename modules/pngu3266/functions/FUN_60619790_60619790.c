/* Module: pngu3266.dll
   Function: FUN_60619790
   Address: 60619790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619790(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 **)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  return;
}


