/* Module: rmto3260.dll
   Function: FUN_66305520
   Address: 66305520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66305520(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x20) = param_1;
  return 1;
}


