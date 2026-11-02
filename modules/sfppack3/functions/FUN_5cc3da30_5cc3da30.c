/* Module: sfppack3.dll
   Function: FUN_5cc3da30
   Address: 5cc3da30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cc3da30(void *this,int param_1,undefined4 param_2,uint *param_3,double *param_4,uint *param_5)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_120;
  uint local_11c;
  uint local_118;
  int local_114 [69];
  
  local_11c = (uint)(param_1 == 2);
  uVar2 = *(ushort *)(*(int *)((int)this + 0x14c) + 2);
  local_118 = 0;
  local_120 = 0;
  if (param_3 != (uint *)0x0) {
    local_118 = *param_3;
  }
  if (param_5 != (uint *)0x0) {
    local_120 = *param_5;
  }
  iVar7 = FUN_5cc3ae20(this,local_114);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0x154) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x138) != 0)))) &&
     (iVar7 = FUN_5cc3d060(this,local_114,param_1), iVar7 < 0)) {
    return iVar7;
  }
  *(undefined4 *)((int)this + 0x138) = 1;
  if (local_11c == 0) {
    local_11c = FUN_5cc3d760(this,param_2,&local_118,param_4,&local_120,(uint)uVar2);
  }
  else {
    local_120 = 0;
    local_11c = 1;
  }
  uVar8 = local_120;
  if (DAT_5cc982c0 != 0) goto LAB_5cc3defc;
  piVar1 = (int *)((int)this + 0x22ec);
  uVar10 = *(uint *)(*(int *)((int)this + 0x14c) + 4);
  if (*(int *)((int)this + 0x2300) == 0) {
    iVar7 = *piVar1;
    *piVar1 = iVar7 - local_120;
    if ((int)(iVar7 - local_120) < 1) {
      uVar9 = rand();
      *piVar1 = (uVar9 & 3) * (uVar10 >> 4) + uVar10 * 3;
      uVar9 = rand();
      *(uint *)((int)this + 0x22f8) = (uVar9 & 0x1f) + 1;
      uVar9 = rand();
      *(uint *)((int)this + 0x22fc) = (uVar9 & 0x1f) + 1;
      *(uint *)((int)this + 0x2300) = uVar10 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc3dba0;
    }
    uVar8 = 0;
  }
  else {
LAB_5cc3dba0:
    uVar10 = *(uint *)((int)this + 0x2300);
    if (uVar10 <= uVar8) {
      uVar8 = uVar10;
    }
    *(uint *)((int)this + 0x2300) = uVar10 - uVar8;
  }
  psVar4 = *(short **)((int)this + 0x14c);
  if (*psVar4 == 1) {
    sVar3 = psVar4[7];
    if (sVar3 == 8) {
      uVar2 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        DAT_5cc9ebdc = DAT_5cc9ebdc + *(int *)((int)this + 0x22f8);
        iVar7 = ftol();
        if (iVar7 < -0x80) {
          bVar6 = 0;
        }
        else if (iVar7 < 0x80) {
          bVar6 = (byte)iVar7 ^ 0x80;
        }
        else {
          bVar6 = 0xff;
        }
        *(byte *)param_4 = bVar6;
        if (1 < uVar2) {
          DAT_5cc9ebe0 = DAT_5cc9ebe0 + 1 + *(int *)((int)this + 0x22fc);
          iVar7 = ftol();
          if (iVar7 < -0x80) {
            bVar6 = 0;
          }
          else if (iVar7 < 0x80) {
            bVar6 = (byte)iVar7 ^ 0x80;
          }
          else {
            bVar6 = 0xff;
          }
          *(byte *)((int)param_4 + 1) = bVar6;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2);
      }
    }
    else if (sVar3 == 0x10) {
      uVar2 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        DAT_5cc9ebcc = DAT_5cc9ebcc + *(int *)((int)this + 0x22f8);
        iVar7 = ftol();
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        *(short *)param_4 = *(short *)param_4 + (short)iVar7;
        if (1 < uVar2) {
          DAT_5cc9ebd0 = DAT_5cc9ebd0 + 1 + *(int *)((int)this + 0x22fc);
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *(short *)((int)param_4 + 2) = *(short *)((int)param_4 + 2) + (short)iVar7;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2 * 2);
      }
    }
    else {
      if (sVar3 != 0x20) {
        return -0x7fffbffb;
      }
      uVar2 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        fVar5 = *(float *)(*(int *)((int)this + 0x22f4) +
                          (DAT_5cc9ebc4 % *(uint *)((int)this + 0x22f0)) * 4) * (float)_DAT_5cc87d90
        ;
        DAT_5cc9ebc4 = DAT_5cc9ebc4 + *(int *)((int)this + 0x22f8);
        if ((float)_DAT_5cc87d88 <= fVar5) {
          if (fVar5 <= (float)_DAT_5cc87d80) {
            iVar7 = ftol();
          }
          else {
            iVar7 = 0x7fffffff;
          }
        }
        else {
          iVar7 = -0x80000000;
        }
        *(int *)param_4 = *(int *)param_4 + iVar7;
        if (1 < uVar2) {
          fVar5 = *(float *)(*(int *)((int)this + 0x22f4) +
                            (DAT_5cc9ebc8 % *(uint *)((int)this + 0x22f0)) * 4) *
                  (float)_DAT_5cc87d90;
          DAT_5cc9ebc8 = DAT_5cc9ebc8 + 1 + *(int *)((int)this + 0x22fc);
          if ((float)_DAT_5cc87d88 <= fVar5) {
            if (fVar5 <= (float)_DAT_5cc87d80) {
              iVar7 = ftol();
            }
            else {
              iVar7 = 0x7fffffff;
            }
          }
          else {
            iVar7 = -0x80000000;
          }
          *(int *)((int)param_4 + 4) = *(int *)((int)param_4 + 4) + iVar7;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2 * 4);
      }
    }
  }
  else if (psVar4[7] == 0x20) {
    uVar2 = psVar4[1];
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar10 = DAT_5cc9ebbc % *(uint *)((int)this + 0x22f0);
      DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0x22f8);
      *(float *)param_4 = *(float *)(*(int *)((int)this + 0x22f4) + uVar10 * 4) + *(float *)param_4;
      if (1 < uVar2) {
        uVar10 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x22f0);
        DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0x22fc);
        *(float *)((int)param_4 + 4) =
             *(float *)(*(int *)((int)this + 0x22f4) + uVar10 * 4) + *(float *)((int)param_4 + 4);
      }
      param_4 = (double *)((int)param_4 + (uint)uVar2 * 4);
    }
  }
  else {
    if (psVar4[7] != 0x40) {
      return -0x7fffbffb;
    }
    FUN_5cc3df30(param_4,uVar8,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),(int)piVar1);
  }
LAB_5cc3defc:
  if (param_3 != (uint *)0x0) {
    *param_3 = local_118;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_120;
  }
  return local_11c;
}


