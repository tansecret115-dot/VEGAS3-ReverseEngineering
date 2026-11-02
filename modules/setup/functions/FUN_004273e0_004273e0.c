/* Module: Setup.exe
   Function: FUN_004273e0
   Address: 004273e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_004273e0(void *this,int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  uint local_14;
  int local_10;
  int local_c;
  HKEY__ local_8;
  uint local_4;
  
  iVar5 = 0;
  iVar4 = -0x7fffbffb;
  if (*(int *)this == 0) {
    uVar2 = 0x8004e12d;
  }
  else {
    iVar3 = FUN_0042e1b0((int *)&local_14);
    if (iVar3 < 0) {
      uVar2 = 0x8004e12f;
    }
    else {
      FUN_0042e120(&local_c,0x7d1,0xb,0x1e);
      iVar5 = local_c - local_14;
      uVar2 = FUN_004277a0(this,&local_8);
      if ((int)uVar2 < 0) {
        uVar2 = 0x8004e12f;
        iVar5 = 0;
      }
      else if (local_14 < (uint)local_8.unused) {
        uVar2 = 0x8004e130;
        iVar5 = 0;
      }
      else {
        FUN_00427740(this);
        if ((iVar5 < 0) || (0x3fe < iVar5)) {
          iVar4 = *(int *)(*(int *)this + 4);
        }
        else {
          iVar3 = FUN_00427e00(this);
          if (iVar3 == 0) {
            uVar2 = 0x4e12d;
            goto LAB_0042757e;
          }
          iVar3 = FUN_00427df0(this);
          if (iVar3 != 0) {
            bVar1 = FUN_0042b8b0(this,(char *)((int)this + 4));
            uVar2 = (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0x7ffffff6) + 0x8004e136;
            goto LAB_0042757e;
          }
          if (*(int *)(*(int *)this + 4) == 0) {
            iVar4 = FUN_0042b0a0(this,(HKEY)((int)this + 4),&local_4);
            if (iVar4 < 0) {
              uVar2 = 0x8004e12e;
              iVar5 = 0;
              goto LAB_0042757e;
            }
            iVar4 = FUN_004272f0(this,&local_10,*(int *)this);
            if (iVar4 < 0) {
              uVar2 = 0x8004e12e;
              iVar5 = 0;
              goto LAB_0042757e;
            }
          }
          else {
            local_10 = FUN_0042f580(*(int *)this);
            if (local_10 < 0) {
              iVar5 = -1;
              uVar2 = 0;
              goto LAB_0042757e;
            }
            local_4 = *(uint *)(*(int *)this + 0x10);
          }
          if (local_14 < local_4 - 1) {
            uVar2 = 0x8004e131;
            iVar5 = 0;
            goto LAB_0042757e;
          }
          iVar5 = (local_4 + local_10) - local_14;
          if ((0 < iVar5) && (iVar5 < 0x3ff)) {
            uVar2 = (iVar4 != 0x4e135) - 1 & 0x4e135;
            goto LAB_0042757e;
          }
          iVar4 = *(int *)(*(int *)this + 4);
        }
        iVar5 = 0;
        uVar2 = 0x8004e135 - (iVar4 != 0);
      }
    }
  }
LAB_0042757e:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar5;
  }
  return uVar2;
}


