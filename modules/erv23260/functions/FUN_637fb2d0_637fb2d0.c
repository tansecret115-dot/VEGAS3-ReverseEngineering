/* Module: erv23260.dll
   Function: FUN_637fb2d0
   Address: 637fb2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb2d0(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x5c) != 0x15) && (*(int *)((int)this + 0x5c) != 0x16)) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 8);
      FUN_637fd360(this,1,1);
      FUN_637fd360(this,0,*(int *)((int)this + 0x74));
      iVar2 = 1;
      iVar1 = 1;
    }
    else {
      FUN_637fd710((int)this);
      *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 0x60) != 0) {
        iVar1 = FUN_637fd250((int)this);
        FUN_637ffa70((void *)((int)this + 0x18),param_1,iVar1);
      }
      FUN_637fabd0(this);
      FUN_637fd360(this,1,1);
      FUN_637fd360(this,param_1,*(int *)((int)this + 0x74));
      if (0xb < *(uint *)((int)this + 0x74)) {
        FUN_637fd360(this,1,1);
      }
      FUN_637fd360(this,param_2,5);
      FUN_637fd360(this,1,1);
      iVar2 = 2;
      iVar1 = 0;
    }
    FUN_637fd360(this,iVar1,iVar2);
    *(undefined4 *)(*(int *)((int)this + 0xb8) + *(int *)((int)this + 0xb4) * 8) = 1;
    *(int *)(*(int *)((int)this + 0xb8) + 4 + *(int *)((int)this + 0xb4) * 8) =
         *(int *)((int)this + 0xbc) - *(int *)((int)this + 8);
    *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 1;
    return;
  }
  if (*(int *)((int)this + 0xa8) < param_1) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 8);
    }
    else {
      FUN_637fd710((int)this);
      *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 4);
      if (*(int *)((int)this + 0x60) != 0) {
        iVar1 = FUN_637fd250((int)this);
        FUN_637ffa70((void *)((int)this + 0x18),param_1,iVar1);
      }
    }
    *(undefined4 *)(*(int *)((int)this + 0xb8) + *(int *)((int)this + 0xb4) * 8) = 1;
    *(int *)(*(int *)((int)this + 0xb8) + 4 + *(int *)((int)this + 0xb4) * 8) =
         *(int *)((int)this + 0xbc) - *(int *)((int)this + 8);
    *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + 1;
    FUN_637fd360(this,*(int *)((int)this + 0x9c),2);
    FUN_637fd360(this,0,1);
    *(char *)((int)this + 0xb0) = (char)param_2;
    FUN_637fd360(this,param_2 & 0xff,5);
    if (*(int *)((int)this + 0x5c) == 0x16) {
      if ((*(int *)((int)this + 0x9c) == 1) || (*(int *)((int)this + 0x9c) == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0xa4);
      }
      FUN_637fd360(this,iVar1,1);
    }
    if (*(int *)((int)this + 0x5c) == 0x15) {
      iVar1 = *(int *)((int)this + 0xac);
      iVar2 = 8;
    }
    else {
      iVar1 = *(int *)((int)this + 0xac);
      iVar2 = 0xd;
    }
    FUN_637fd360(this,iVar1,iVar2);
    if (*(int *)((int)this + 0xc4) != 0) {
      FUN_637fd360(this,(uint)*(byte *)((int)this + 0xb3),*(int *)((int)this + 0xc0));
    }
    *(int *)((int)this + 0xa8) = param_1;
    FUN_637fd360(this,param_1,*(int *)((int)this + 0x74));
    FUN_637fd360(this,*(int *)((int)this + 0xa0),1);
    if ((*(int *)((int)this + 0x5c) == 0x15) && (*(int *)((int)this + 0x9c) == 3)) {
      FUN_637fb180(this,(uint)*(byte *)((int)this + 0xb1));
      FUN_637fb1b0(this,(uint)*(byte *)((int)this + 0xb2));
    }
  }
  return;
}


