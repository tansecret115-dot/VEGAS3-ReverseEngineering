/* Module: rmme3260.dll
   Function: FUN_6622c410
   Address: 6622c410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622c410(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x13e) == 0) {
    return 0x80040009;
  }
  if (*(int *)((int)this + 400) != 0) {
    *(undefined4 *)((int)this + 0x1c0) = 0;
    *(undefined4 *)((int)this + 0x1c4) = param_1;
    FUN_6622c480(this);
    return 0;
  }
  if (*(int *)((int)this + 0x1bc) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)((int)this + 400) = 5;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = param_1;
  FUN_6622c480(this);
  return 0;
}


