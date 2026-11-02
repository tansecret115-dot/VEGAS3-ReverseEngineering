/* Module: encn3260.dll
   Function: FUN_664d4460
   Address: 664d4460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4460(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 8) != 1) {
    *param_1 = 0;
    return 0x80004005;
  }
  *param_1 = *(undefined4 *)((int)this + 0x18);
  return 0;
}


