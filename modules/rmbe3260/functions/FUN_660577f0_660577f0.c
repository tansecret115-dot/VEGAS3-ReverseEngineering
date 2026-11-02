/* Module: rmbe3260.dll
   Function: FUN_660577f0
   Address: 660577f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660577f0(void *this,int param_1)

{
  if (param_1 != 0) {
    *(int *)((int)this + 0x18) = param_1;
    return 0;
  }
  return 0x80004005;
}


