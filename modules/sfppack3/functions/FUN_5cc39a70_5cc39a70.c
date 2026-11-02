/* Module: sfppack3.dll
   Function: FUN_5cc39a70
   Address: 5cc39a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cc39a70(void *this,int param_1,undefined4 param_2,uint *param_3,double *param_4,uint *param_5)

{
  short sVar1;
  ushort uVar2;
  short *psVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10 [4];
  
  local_18 = *param_3;
  uVar7 = (uint)*(ushort *)(*(int *)((int)this + 0x48) + 2);
  local_1c = *param_5;
  local_14 = 0;
  iVar6 = FUN_5cc372d0(this,local_10);
  if ((((iVar6 != 0) || (*(int *)((int)this + 0x50) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x34) != 0)))) &&
     (local_14 = FUN_5cc39120(this,local_10,param_1), local_14 < 0)) {
    return local_14;
  }
  *(undefined4 *)((int)this + 0x34) = 1;
  if (*(int *)((int)this + 0x60) == 0) {
    FUN_5cc398f0(this,param_2,param_4,&local_18,&local_1c,uVar7);
  }
  else if (*(int *)((int)this + 0x60) == 1) {
    FUN_5cc397c0(this,param_2,param_4,&local_18,&local_1c,uVar7);
  }
  uVar7 = local_1c;
  if ((*(int *)((int)this + 0x6c) <= *(int *)((int)this + 0x70)) &&
     (*(int *)((int)this + 0x74) <= *(int *)((int)this + 0x78))) {
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  if (DAT_5cc982c0 != 0) goto LAB_5cc39fdb;
  uVar9 = *(uint *)(*(int *)((int)this + 0x48) + 4);
  if (*(int *)((int)this + 0xac) == 0) {
    iVar6 = *(int *)((int)this + 0x98) - local_1c;
    *(int *)((int)this + 0x98) = iVar6;
    if (iVar6 < 1) {
      uVar8 = rand();
      *(uint *)((int)this + 0x98) = (uVar8 & 3) * (uVar9 >> 4) + uVar9 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0xa4) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0xa8) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0xac) = uVar9 >> 3;
      _DAT_5cc9ebd4 = 0;
      _DAT_5cc9ebd8 = 0;
      goto LAB_5cc39bcd;
    }
    uVar7 = 0;
  }
  else {
LAB_5cc39bcd:
    uVar9 = *(uint *)((int)this + 0xac);
    if (uVar9 <= uVar7) {
      uVar7 = uVar9;
    }
    *(uint *)((int)this + 0xac) = uVar9 - uVar7;
  }
  psVar3 = *(short **)((int)this + 0x48);
  if (*psVar3 == 1) {
    sVar1 = psVar3[7];
    if (sVar1 == 8) {
      uVar2 = psVar3[1];
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        DAT_5cc9ebdc = DAT_5cc9ebdc + *(int *)((int)this + 0xa4);
        iVar6 = ftol();
        if (iVar6 < -0x80) {
          bVar5 = 0;
        }
        else if (iVar6 < 0x80) {
          bVar5 = (byte)iVar6 ^ 0x80;
        }
        else {
          bVar5 = 0xff;
        }
        *(byte *)param_4 = bVar5;
        if (1 < uVar2) {
          DAT_5cc9ebe0 = DAT_5cc9ebe0 + 1 + *(int *)((int)this + 0xa8);
          iVar6 = ftol();
          if (iVar6 < -0x80) {
            bVar5 = 0;
          }
          else if (iVar6 < 0x80) {
            bVar5 = (byte)iVar6 ^ 0x80;
          }
          else {
            bVar5 = 0xff;
          }
          *(byte *)((int)param_4 + 1) = bVar5;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2);
      }
    }
    else if (sVar1 == 0x10) {
      uVar2 = psVar3[1];
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        DAT_5cc9ebcc = DAT_5cc9ebcc + *(int *)((int)this + 0xa4);
        iVar6 = ftol();
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        *(short *)param_4 = *(short *)param_4 + (short)iVar6;
        if (1 < uVar2) {
          DAT_5cc9ebd0 = DAT_5cc9ebd0 + 1 + *(int *)((int)this + 0xa8);
          iVar6 = ftol();
          if (iVar6 < -0x8000) {
            iVar6 = -0x8000;
          }
          else if (0x7fff < iVar6) {
            iVar6 = 0x7fff;
          }
          *(short *)((int)param_4 + 2) = *(short *)((int)param_4 + 2) + (short)iVar6;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2 * 2);
      }
    }
    else {
      if (sVar1 != 0x20) {
        return -0x7fffbffb;
      }
      uVar2 = psVar3[1];
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar4 = *(float *)(*(int *)((int)this + 0xa0) +
                          (DAT_5cc9ebc4 % *(uint *)((int)this + 0x9c)) * 4) * (float)_DAT_5cc87d90;
        DAT_5cc9ebc4 = DAT_5cc9ebc4 + *(int *)((int)this + 0xa4);
        if ((float)_DAT_5cc87d88 <= fVar4) {
          if (fVar4 <= (float)_DAT_5cc87d80) {
            iVar6 = ftol();
          }
          else {
            iVar6 = 0x7fffffff;
          }
        }
        else {
          iVar6 = -0x80000000;
        }
        *(int *)param_4 = *(int *)param_4 + iVar6;
        if (1 < uVar2) {
          fVar4 = *(float *)(*(int *)((int)this + 0xa0) +
                            (DAT_5cc9ebc8 % *(uint *)((int)this + 0x9c)) * 4) * (float)_DAT_5cc87d90
          ;
          DAT_5cc9ebc8 = DAT_5cc9ebc8 + 1 + *(int *)((int)this + 0xa8);
          if ((float)_DAT_5cc87d88 <= fVar4) {
            if (fVar4 <= (float)_DAT_5cc87d80) {
              iVar6 = ftol();
            }
            else {
              iVar6 = 0x7fffffff;
            }
          }
          else {
            iVar6 = -0x80000000;
          }
          *(int *)((int)param_4 + 4) = *(int *)((int)param_4 + 4) + iVar6;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar2 * 4);
      }
    }
  }
  else if (psVar3[7] == 0x20) {
    uVar2 = psVar3[1];
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar9 = DAT_5cc9ebbc % *(uint *)((int)this + 0x9c);
      DAT_5cc9ebbc = DAT_5cc9ebbc + *(int *)((int)this + 0xa4);
      *(float *)param_4 = *(float *)(*(int *)((int)this + 0xa0) + uVar9 * 4) + *(float *)param_4;
      if (1 < uVar2) {
        uVar9 = DAT_5cc9ebc0 % *(uint *)((int)this + 0x9c);
        DAT_5cc9ebc0 = DAT_5cc9ebc0 + 1 + *(int *)((int)this + 0xa8);
        *(float *)((int)param_4 + 4) =
             *(float *)(*(int *)((int)this + 0xa0) + uVar9 * 4) + *(float *)((int)param_4 + 4);
      }
      param_4 = (double *)((int)param_4 + (uint)uVar2 * 4);
    }
  }
  else {
    if (psVar3[7] != 0x40) {
      return -0x7fffbffb;
    }
    uVar2 = psVar3[1];
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar9 = DAT_5cc9ebb4 % *(uint *)((int)this + 0x9c);
      DAT_5cc9ebb4 = DAT_5cc9ebb4 + *(int *)((int)this + 0xa4);
      *param_4 = (double)(*(float *)(*(int *)((int)this + 0xa0) + uVar9 * 4) + (float)*param_4);
      if (1 < uVar2) {
        uVar9 = DAT_5cc9ebb8 % *(uint *)((int)this + 0x9c);
        DAT_5cc9ebb8 = DAT_5cc9ebb8 + 1 + *(int *)((int)this + 0xa8);
        param_4[1] = (double)(*(float *)(*(int *)((int)this + 0xa0) + uVar9 * 4) + (float)param_4[1]
                             );
      }
      param_4 = param_4 + uVar2;
    }
  }
LAB_5cc39fdb:
  *param_3 = local_18;
  *param_5 = local_1c;
  return local_14;
}


