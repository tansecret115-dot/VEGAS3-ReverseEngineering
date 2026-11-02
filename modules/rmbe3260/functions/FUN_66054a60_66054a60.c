/* Module: rmbe3260.dll
   Function: FUN_66054a60
   Address: 66054a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054a60(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x14) != 0) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 8) != 2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  return 0;
}


