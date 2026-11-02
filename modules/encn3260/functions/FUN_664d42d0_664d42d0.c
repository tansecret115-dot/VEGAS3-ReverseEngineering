/* Module: encn3260.dll
   Function: FUN_664d42d0
   Address: 664d42d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d42d0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x14) != 0) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 8) != 3) {
    *(undefined4 *)((int)this + 0x18) = 0;
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  return 0;
}


