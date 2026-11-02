/* Module: sfppack3.dll
   Function: FUN_5cc79b20
   Address: 5cc79b20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5cc79b20(void *this,int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  int local_c;
  uint local_8;
  HKEY__ local_4;
  
  iVar6 = 0;
  iVar5 = -0x7fffbffb;
  if (*(int *)this == 0) {
    uVar2 = 0x8004e12d;
  }
  else {
    FUN_5cc80660((int *)&local_10);
    iVar3 = FUN_5cc7a550(this);
    if ((iVar3 == 0) && (iVar3 = FUN_5cc79e00(this), iVar3 == 0)) {
      iVar6 = -1;
      uVar2 = 0x4e12d;
    }
    else {
      iVar3 = FUN_5cc7a540(this);
      if (iVar3 == 0) {
        FUN_5cc80660((int *)&local_10);
        if (*(int *)(*(int *)this + 4) == 0) {
          iVar5 = FUN_5cc7d7f0(this,(HKEY)((int)this + 4),&local_8);
          if (iVar5 < 0) {
            uVar2 = 0x8004e12e;
            iVar6 = 0;
            goto LAB_5cc79c97;
          }
          iVar5 = FUN_5cc79a30(this,&local_c,*(int *)this);
          uVar2 = local_8;
          if (iVar5 < 0) {
            uVar2 = 0x8004e12e;
            iVar6 = 0;
            goto LAB_5cc79c97;
          }
        }
        else {
          local_c = FUN_5cc81a30(*(int *)this);
          if (local_c < 0) {
            iVar6 = -1;
            uVar2 = 0;
            goto LAB_5cc79c97;
          }
          uVar2 = *(uint *)(*(int *)this + 0x10);
        }
        uVar4 = FUN_5cc79ef0(this,&local_4);
        if ((int)uVar4 < 0) {
          uVar2 = 0x8004e12f;
          iVar6 = 0;
        }
        else if (local_10 < (uint)local_4.unused) {
          uVar2 = 0x8004e130;
          iVar6 = 0;
        }
        else {
          FUN_5cc79e90(this);
          uVar4 = uVar2;
          if ((local_10 < uVar2) && (uVar4 = local_10, uVar2 - local_10 != 1)) {
            uVar2 = 0x8004e131;
            iVar6 = 0;
          }
          else {
            iVar6 = (local_c - local_10) + uVar4;
            if ((iVar6 < 1) || (0x3fe < iVar6)) {
              iVar6 = 0;
              uVar2 = 0x8004e135 - (*(int *)(*(int *)this + 4) != 0);
            }
            else {
              uVar2 = (iVar5 != 0x4e135) - 1 & 0x4e135;
            }
          }
        }
      }
      else {
        bVar1 = FUN_5cc7e000(this,(char *)((int)this + 4));
        if (CONCAT31(extraout_var,bVar1) == 0) {
          uVar2 = 0x8004e136;
        }
        else {
          iVar6 = -1;
          uVar2 = 0x4e12c;
        }
      }
    }
  }
LAB_5cc79c97:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar6;
  }
  return uVar2;
}


