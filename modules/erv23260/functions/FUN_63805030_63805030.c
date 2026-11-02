/* Module: erv23260.dll
   Function: FUN_63805030
   Address: 63805030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63805030(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    *(undefined4 *)((int)this + 0x38) = 1;
  }
  *(int *)((int)this + 0x2c) = param_1;
  return;
}


