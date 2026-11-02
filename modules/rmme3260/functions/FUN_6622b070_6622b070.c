/* Module: rmme3260.dll
   Function: FUN_6622b070
   Address: 6622b070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622b070(void *this,int param_1)

{
  if (*(int *)((int)this + 400) == 5) {
    if (param_1 < 0) {
      *(undefined4 *)((int)this + 0x1bc) = 0;
      FUN_66217480(*(void **)((int)this + 0x180),param_1);
      return 0;
    }
    switch(*(undefined4 *)((int)this + 0x1bc)) {
    case 2:
      *(undefined4 *)((int)this + 0x1bc) = 3;
      FUN_6622c480(this);
      return 0;
    case 4:
      *(undefined4 *)((int)this + 0x1bc) = 5;
      FUN_6622c480(this);
      return 0;
    case 7:
      *(undefined4 *)((int)this + 0x1bc) = 8;
      FUN_6622c480(this);
      return 0;
    case 10:
      *(undefined4 *)((int)this + 0x1bc) = 0xb;
      FUN_6622c480(this);
      return 0;
    case 0xc:
      *(undefined4 *)((int)this + 0x1bc) = 0xd;
    }
    FUN_6622c480(this);
  }
  return 0;
}


