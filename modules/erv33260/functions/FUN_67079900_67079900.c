/* Module: erv33260.dll
   Function: FUN_67079900
   Address: 67079900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67079900(void *this,uint param_1)

{
  if (6 < param_1) {
    return 10;
  }
  *(uint *)((int)this + 4) = param_1;
  *(undefined **)this = &DAT_67090250 + param_1 * 0x20;
  return 0;
}


