/* Module: encn3260.dll
   Function: FUN_664d8f10
   Address: 664d8f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8f10(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  return 1;
}


