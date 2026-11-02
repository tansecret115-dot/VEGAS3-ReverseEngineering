/* Module: rmme3260.dll
   Function: FUN_6622ace0
   Address: 6622ace0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622ace0(void *this,int param_1)

{
  if (*(int *)((int)this + 400) == 1) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x1bc) = 0;
      FUN_66217370(*(void **)((int)this + 0x180),param_1);
      return 0;
    }
    if (*(int *)((int)this + 0x194) == 1) {
      *(undefined4 *)((int)this + 0x194) = 2;
    }
    FUN_6622aa50(this);
  }
  return 0;
}


