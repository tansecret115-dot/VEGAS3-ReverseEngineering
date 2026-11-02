/* Module: sfppack2.dll
   Function: FUN_5ccf2d50
   Address: 5ccf2d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5ccf2d50(void *this,int param_1,undefined4 param_2,int *param_3,double *param_4,uint *param_5)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0 [52];
  
  *(uint *)((int)this + 0x130) = (uint)(param_1 == 2);
  if (param_3 == (int *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    local_dc = 0;
  }
  else {
    local_dc = *param_5;
  }
  iVar7 = FUN_5ccea300(this,local_d0);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0x120) == 0)) ||
      ((param_1 == 0 && ((*(int *)((int)this + 0xf4) != 0 && (*(int *)((int)this + 0x130) == 0))))))
     && (iVar7 = FUN_5ccf26e0(this,(int)local_d0,param_1), iVar7 < 0)) {
    return iVar7;
  }
  *(undefined4 *)((int)this + 0xf4) = 1;
  local_d4 = FUN_5ccf3ef0(this,param_2,&local_d8,param_4,&local_dc);
  uVar8 = local_dc;
  if (DAT_5cd679f8 != 0) goto LAB_5ccf31ce;
  piVar1 = (int *)((int)this + 0x49c);
  uVar10 = *(uint *)(*(int *)((int)this + 0x118) + 4);
  if (*(int *)((int)this + 0x4b0) == 0) {
    iVar7 = *piVar1;
    *piVar1 = iVar7 - local_dc;
    if ((int)(iVar7 - local_dc) < 1) {
      uVar9 = rand();
      *piVar1 = (uVar9 & 3) * (uVar10 >> 4) + uVar10 * 3;
      uVar9 = rand();
      *(uint *)((int)this + 0x4a8) = (uVar9 & 0x1f) + 1;
      uVar9 = rand();
      *(uint *)((int)this + 0x4ac) = (uVar9 & 0x1f) + 1;
      *(uint *)((int)this + 0x4b0) = uVar10 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5ccf2e9e;
    }
    uVar8 = 0;
  }
  else {
LAB_5ccf2e9e:
    uVar10 = *(uint *)((int)this + 0x4b0);
    if (uVar10 <= uVar8) {
      uVar8 = uVar10;
    }
    *(uint *)((int)this + 0x4b0) = uVar10 - uVar8;
  }
  psVar4 = *(short **)((int)this + 0x118);
  if (*psVar4 == 1) {
    sVar2 = psVar4[7];
    if (sVar2 == 8) {
      uVar3 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        DAT_5cd7651c = DAT_5cd7651c + *(int *)((int)this + 0x4a8);
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
        if (1 < uVar3) {
          DAT_5cd76520 = DAT_5cd76520 + 1 + *(int *)((int)this + 0x4ac);
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
        param_4 = (double *)((int)param_4 + (uint)uVar3);
      }
    }
    else if (sVar2 == 0x10) {
      uVar3 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        DAT_5cd7650c = DAT_5cd7650c + *(int *)((int)this + 0x4a8);
        iVar7 = ftol();
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        *(short *)param_4 = *(short *)param_4 + (short)iVar7;
        if (1 < uVar3) {
          DAT_5cd76510 = DAT_5cd76510 + 1 + *(int *)((int)this + 0x4ac);
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *(short *)((int)param_4 + 2) = *(short *)((int)param_4 + 2) + (short)iVar7;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar3 * 2);
      }
    }
    else {
      if (sVar2 != 0x20) {
        return -0x7fffbffb;
      }
      uVar3 = psVar4[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        fVar5 = *(float *)(*(int *)((int)this + 0x4a4) +
                          (DAT_5cd76504 % *(uint *)((int)this + 0x4a0)) * 4) * (float)_DAT_5cd51758;
        DAT_5cd76504 = DAT_5cd76504 + *(int *)((int)this + 0x4a8);
        if ((float)_DAT_5cd51750 <= fVar5) {
          if (fVar5 <= (float)_DAT_5cd51748) {
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
        if (1 < uVar3) {
          uVar10 = DAT_5cd76508 % *(uint *)((int)this + 0x4a0);
          DAT_5cd76508 = DAT_5cd76508 + 1 + *(int *)((int)this + 0x4ac);
          iVar7 = FUN_5ccf4680((double)*(float *)(*(int *)((int)this + 0x4a4) + uVar10 * 4));
          *(int *)((int)param_4 + 4) = *(int *)((int)param_4 + 4) + iVar7;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar3 * 4);
      }
    }
  }
  else if (psVar4[7] == 0x20) {
    uVar3 = psVar4[1];
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar10 = DAT_5cd764fc % *(uint *)((int)this + 0x4a0);
      DAT_5cd764fc = DAT_5cd764fc + *(int *)((int)this + 0x4a8);
      *(float *)param_4 = *(float *)(*(int *)((int)this + 0x4a4) + uVar10 * 4) + *(float *)param_4;
      if (1 < uVar3) {
        uVar10 = DAT_5cd76500 % *(uint *)((int)this + 0x4a0);
        DAT_5cd76500 = DAT_5cd76500 + 1 + *(int *)((int)this + 0x4ac);
        *(float *)((int)param_4 + 4) =
             *(float *)(*(int *)((int)this + 0x4a4) + uVar10 * 4) + *(float *)((int)param_4 + 4);
      }
      param_4 = (double *)((int)param_4 + (uint)uVar3 * 4);
    }
  }
  else {
    if (psVar4[7] != 0x40) {
      return -0x7fffbffb;
    }
    FUN_5ccf4600(param_4,uVar8,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),(int)piVar1);
  }
LAB_5ccf31ce:
  if (param_3 != (int *)0x0) {
    *param_3 = local_d8;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_dc;
  }
  return local_d4;
}


