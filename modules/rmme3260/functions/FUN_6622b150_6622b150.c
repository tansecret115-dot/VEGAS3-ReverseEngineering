/* Module: rmme3260.dll
   Function: FUN_6622b150
   Address: 6622b150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622b150(void *this,int param_1)

{
  if (*(int *)((int)this + 400) == 5) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x1bc) = 0;
      FUN_66217480(*(void **)((int)this + 0x180),param_1);
      return 0;
    }
    if (*(int *)((int)this + 0x1bc) == 0xe) {
      *(undefined4 *)((int)this + 0x1bc) = 0xf;
    }
    FUN_6622c480(this);
  }
  return 0;
}


