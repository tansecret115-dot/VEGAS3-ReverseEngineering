/* Module: encn3260.dll
   Function: FUN_6649ac90
   Address: 6649ac90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6649ac90(void *this,int param_1)

{
  byte bVar1;
  
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | 0x10;
  if ((*(byte *)((int)this + 0x6d) & 0x80) == 0) {
    (**(code **)(*(int *)this + 4))(this);
  }
  if (param_1 == 1) {
    *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) | 0x40;
    (**(code **)(**(int **)((int)this + 0x1c) + 0x28))(*(int **)((int)this + 0x1c),(int)this + 0x30)
    ;
  }
  else {
    *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) & 0xbf;
  }
  bVar1 = *(byte *)((int)this + 0x6c);
  if (((bVar1 & 0x20) != 0) && ((*(byte *)((int)this + 0x6d) & 1) != 0)) {
    *(byte *)((int)this + 0x6d) = *(byte *)((int)this + 0x6d) & 0xfe;
    if (((bVar1 & 0x80) == 0) || ((bVar1 & 0x40) == 0)) {
      (**(code **)(**(int **)((int)this + 0x14) + 0xc))(*(int **)((int)this + 0x14),0x80040044);
    }
    else {
      *(byte *)((int)this + 0x6c) = bVar1 | 8;
      (**(code **)(**(int **)((int)this + 0x91) + 4))();
      FUN_6649b610(this,0,0);
      FUN_6649aab0(this);
      FUN_6649b7d0((int)this);
      FUN_6649a960((int)this);
      (**(code **)(**(int **)((int)this + 0x91) + 8))();
      (**(code **)(**(int **)((int)this + 0x14) + 0xc))(*(int **)((int)this + 0x14),0);
    }
  }
  if ((*(byte *)((int)this + 0x6d) & 0x80) == 0) {
    (**(code **)(*(int *)this + 8))(this);
  }
  return;
}


