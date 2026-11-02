/* Module: rmbe3260.dll
   Function: FUN_6603c1e0
   Address: 6603c1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603c1e0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x14) == 0) {
    *(undefined4 *)((int)this + 0x14) = 1;
    *(undefined4 *)((int)this + 0x18) = param_1;
    return 0;
  }
  return 0x80004005;
}


