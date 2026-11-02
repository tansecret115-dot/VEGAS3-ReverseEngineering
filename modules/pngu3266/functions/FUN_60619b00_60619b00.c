/* Module: pngu3266.dll
   Function: FUN_60619b00
   Address: 60619b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619b00(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 **)((int)this + 0xc) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}


