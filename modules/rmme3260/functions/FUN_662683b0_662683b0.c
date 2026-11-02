/* Module: rmme3260.dll
   Function: FUN_662683b0
   Address: 662683b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662683b0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  return 1;
}


