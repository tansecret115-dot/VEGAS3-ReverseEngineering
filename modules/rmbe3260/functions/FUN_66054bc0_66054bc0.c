/* Module: rmbe3260.dll
   Function: FUN_66054bc0
   Address: 66054bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054bc0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 8) != 2) {
    *param_1 = 0;
    return 0x80004005;
  }
  *param_1 = *(undefined4 *)((int)this + 0x18);
  return 0;
}


