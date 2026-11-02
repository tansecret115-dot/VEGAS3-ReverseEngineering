/* Module: erv33260.dll
   Function: FUN_67074500
   Address: 67074500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67074500(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x34) = 1;
    *(undefined4 *)((int)this + 0x38) = 1;
  }
  *(int *)((int)this + 0x2c) = param_1;
  return;
}


