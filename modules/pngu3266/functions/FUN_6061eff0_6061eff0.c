/* Module: pngu3266.dll
   Function: FUN_6061eff0
   Address: 6061eff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6061eff0(void *this,int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)((int)this + 0x40) = 1;
    *(int *)((int)this + 0x44) = param_1;
    *(int *)((int)this + 0x48) = param_2;
    return;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return;
}


