/* Module: rmbe3260.dll
   Function: FUN_6603dcc0
   Address: 6603dcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603dcc0(void *this,int param_1)

{
  if (param_1 != 0) {
    if (*(void **)((int)this + 0x20) != (void *)0x0) {
      FUN_6602f7b0(*(void **)((int)this + 0x20),2);
    }
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      FUN_6602f7b0(*(void **)((int)this + 0x18),2);
    }
  }
  return 0;
}


