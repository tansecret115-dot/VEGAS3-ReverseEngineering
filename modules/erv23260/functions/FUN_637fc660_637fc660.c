/* Module: erv23260.dll
   Function: FUN_637fc660
   Address: 637fc660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637fc660(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  undefined3 extraout_var;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar4;
  bool bVar5;
  
  if ((*(int *)((int)this + 0x5c) == 0x15) || (*(int *)((int)this + 0x5c) == 0x16)) {
    if (param_1 == 0) {
      bVar5 = *(int *)((int)this + 0xa8) == -1;
      if (bVar5) {
        uVar3 = FUN_637fd3d0(this,2);
        *(uint *)((int)this + 0x9c) = uVar3;
      }
      else {
        uVar3 = FUN_637fd3d0(this,2);
        if (uVar3 != *(uint *)((int)this + 0x9c)) {
          return 0;
        }
      }
      FUN_637fd5c0((int)this);
      uVar3 = FUN_637fd3d0(this,5);
      *(char *)((int)this + 0xb0) = (char)uVar3;
      if ((char)uVar3 == '\0') {
        return 0;
      }
      if (*(int *)((int)this + 0x5c) == 0x16) {
        uVar3 = FUN_637fd3d0(this,1);
        *(uint *)((int)this + 0xa4) = (uint)(uVar3 != 0);
      }
      else {
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      iVar4 = (-(uint)(*(int *)((int)this + 0x5c) != 0x15) & 5) + 8;
      if (bVar5) {
        uVar3 = FUN_637fd3d0(this,iVar4);
        *(uint *)((int)this + 0xac) = uVar3;
      }
      else {
        uVar3 = FUN_637fd3d0(this,iVar4);
        if (uVar3 != *(uint *)((int)this + 0xac)) {
          return 0;
        }
      }
      iVar4 = *(int *)((int)this + 0xc0);
      if (iVar4 != 0) {
        if (bVar5) {
          uVar3 = FUN_637fd3d0(this,iVar4);
          *(char *)((int)this + 0xb3) = (char)uVar3;
          if (*(int *)((int)this + 200) == 0) {
            return 0;
          }
          piVar1 = (int *)(*(int *)((int)this + 200) + (uVar3 & 0xff) * 8);
          FUN_637fc920(param_5,*piVar1,piVar1[1]);
          FUN_637fca20(this,param_5);
        }
        else {
          uVar3 = FUN_637fd3d0(this,iVar4);
          if (uVar3 != *(byte *)((int)this + 0xb3)) {
            return 0;
          }
        }
      }
      uVar3 = FUN_637fd3d0(this,*(int *)((int)this + 0x74));
      *(uint *)((int)this + 0xa8) = uVar3;
      if (bVar5) {
        uVar3 = FUN_637fd3d0(this,1);
        *(uint *)((int)this + 0xa0) = uVar3;
      }
      else {
        uVar3 = FUN_637fd3d0(this,1);
        if (uVar3 != *(uint *)((int)this + 0xa0)) {
          return 0;
        }
      }
      if ((*(int *)((int)this + 0x5c) == 0x15) && (*(int *)((int)this + 0x9c) == 3)) {
        if (bVar5) {
          uVar3 = FUN_637fd3d0(this,3);
          *(char *)((int)this + 0xb1) = (char)uVar3;
          uVar3 = FUN_637fd3d0(this,2);
          *(char *)((int)this + 0xb2) = (char)uVar3;
        }
        else {
          uVar3 = FUN_637fd3d0(this,3);
          if ((char)uVar3 != *(char *)((int)this + 0xb1)) {
            return 0;
          }
          uVar3 = FUN_637fd3d0(this,2);
          if ((char)uVar3 != *(char *)((int)this + 0xb2)) {
            return 0;
          }
        }
      }
    }
    *param_2 = *(uint *)((int)this + 0xa8);
    *param_4 = (uint)*(byte *)((int)this + 0xb0);
    *param_3 = 0;
    return 1;
  }
  bVar2 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var,bVar2) != 1) {
    return 0;
  }
  uVar3 = FUN_637fd3d0(this,*(int *)((int)this + 0x74));
  *param_2 = uVar3;
  if (param_1 != 0) {
    if (uVar3 != 0) {
      param_1 = 0;
    }
    if (param_1 != 0) goto LAB_637fc6e5;
  }
  if ((0xb < *(uint *)((int)this + 0x74)) &&
     (bVar2 = FUN_637fd5c0((int)this), CONCAT31(extraout_var_00,bVar2) != 1)) {
    return 0;
  }
  uVar3 = FUN_637fd3d0(this,5);
  *param_4 = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_637fc6e5:
  bVar2 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var_01,bVar2) != 1) {
    return 0;
  }
  if (param_1 != 0) {
    return 1;
  }
  uVar3 = FUN_637fd3d0(this,2);
  *param_3 = uVar3;
  return 1;
}


