/* Module: sfnetmedia.dll
   Function: FUN_0040f1b0
   Address: 0040f1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040f1b0(void *this,int param_1)

{
  if (param_1 != 0) {
    *(int *)((int)this + 0x1c) = param_1;
    return 0;
  }
  return 0x80070057;
}


