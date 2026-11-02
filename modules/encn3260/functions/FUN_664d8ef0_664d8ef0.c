/* Module: encn3260.dll
   Function: FUN_664d8ef0
   Address: 664d8ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8ef0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x20) = param_1;
  return 1;
}


