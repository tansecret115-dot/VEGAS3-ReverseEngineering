/* Module: rmbe3260.dll
   Function: FUN_6603dc90
   Address: 6603dc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603dc90(void *this,int param_1)

{
  if (param_1 != 0) {
    if (*(void **)((int)this + 0x20) != (void *)0x0) {
      FUN_6602f7b0(*(void **)((int)this + 0x20),1);
    }
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      FUN_6602f7b0(*(void **)((int)this + 0x18),1);
    }
  }
  return 0;
}


