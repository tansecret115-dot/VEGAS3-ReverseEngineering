/* Module: erv23260.dll
   Function: FUN_637fa8b0
   Address: 637fa8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fa8b0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_8;
  
  if ((*(int *)((int)this + 0x5c) != 0x15) && (*(int *)((int)this + 0x5c) != 0x16)) {
    local_8 = this;
    if (*(int *)((int)this + 0x60) != 0) {
      local_8 = (void *)FUN_637fd230((int)this);
    }
    FUN_637fabc0(this);
    FUN_637fabe0(this,*param_1);
    FUN_637fac10(this,param_1[2],param_1[3],param_1[4],param_1[1]);
    if (param_1[1] == 7) {
      FUN_637fad10(this,(uint)*(byte *)(param_1 + 10));
      if ((char)param_1[10] != '\0') {
        FUN_637fad30(this,param_1[0xb],param_1[0xc],param_1[6],param_1[7],param_1[8],param_1[0xd],
                     param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                     param_1[0x13]);
      }
      FUN_637fadf0(this,(int)param_1);
      FUN_637fb1e0(this,(uint)*(byte *)((int)param_1 + 0x91));
      if ((char)param_1[10] != '\0') {
        if (param_1[0xb] == 6) {
          FUN_637fae50(this,(byte *)(param_1 + 0x1f));
        }
        if ((char)param_1[10] != '\0') {
          if (param_1[6] != 0) {
            FUN_637fb150(this,(char)param_1[0x22]);
          }
          if (((char)param_1[10] != '\0') && (param_1[0xf] != 0)) {
            FUN_637faea0(this,0,0);
          }
        }
      }
      iVar1 = param_1[5];
      if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) {
        FUN_637faed0(this,*(byte *)((int)param_1 + 0x8d) + 1);
      }
      if (((char)param_1[10] != '\0') &&
         (((iVar1 = param_1[5], iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 5)))) {
        FUN_637faf00(this,*(byte *)((int)param_1 + 0x8e) + 1);
      }
      if (param_1[0x14] != 0) {
        FUN_637faf30(this,param_1[5],param_1 + 0x15);
      }
    }
    else {
      FUN_637fac70(this,param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    }
    FUN_637fb130(this,(uint)*(byte *)(param_1 + 0x24));
    if (param_1[1] != 7) {
      FUN_637fb1e0(this,(uint)*(byte *)((int)param_1 + 0x91));
    }
    if (param_2 != 0) {
      FUN_637fb180(this,(uint)*(byte *)((int)param_1 + 0x92));
      FUN_637fb1b0(this,(uint)*(byte *)((int)param_1 + 0x93));
    }
    FUN_637fb1e0(this,(uint)*(byte *)(param_1 + 0x25));
    if ((char)param_1[0x25] != '\0') {
      FUN_637fb200(this,(uint)*(byte *)((int)param_1 + 0x95),(byte *)((int)param_1 + 0x96));
    }
    if (*(int *)((int)this + 0x60) != 0) {
      iVar1 = FUN_637fd230((int)this);
      *(char *)((int)this + 0x59) = (char)iVar1 - (char)local_8;
      if (*(int *)((int)this + 0xc) == 0) {
        *(undefined1 *)((int)this + 0x5a) = 0;
        FUN_637fca20(this,(int)param_1);
        return;
      }
      *(char *)((int)this + 0x5a) = '\b' - (char)*(int *)((int)this + 0xc);
    }
    FUN_637fca20(this,(int)param_1);
    return;
  }
  iVar1 = param_1[5];
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x9c) = (uint)(*(int *)((int)this + 0x68) != 0);
  }
  else if (iVar1 == 1) {
    *(undefined4 *)((int)this + 0x9c) = 2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)((int)this + 0x9c) = 3;
  }
  *(int *)((int)this + 0xa0) = param_1[0x1d];
  *(int *)((int)this + 0xa4) = param_1[0x1e];
  *(char *)((int)this + 0xb0) = (char)param_1[0x24];
  *(int *)((int)this + 0xac) = *param_1;
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)((int)param_1 + 0x92);
  *(undefined1 *)((int)this + 0xb2) = *(undefined1 *)((int)param_1 + 0x93);
  *(undefined4 *)((int)this + 0xa8) = 0xffffffff;
  FUN_637fca20(this,(int)param_1);
  FUN_637fc550(this,(uint)param_1,(byte *)((int)this + 0xb3));
  FUN_637fb2d0(this,0,(uint)*(byte *)(param_1 + 0x24));
  return;
}


