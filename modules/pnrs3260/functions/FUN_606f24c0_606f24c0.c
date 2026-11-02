/* Module: pnrs3260.dll
   Function: FUN_606f24c0
   Address: 606f24c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_606f24c0(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
    *(undefined4 **)((int)this + 0xc) = param_1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  }
  return;
}


