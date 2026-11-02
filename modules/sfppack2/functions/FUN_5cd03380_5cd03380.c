/* Module: sfppack2.dll
   Function: FUN_5cd03380
   Address: 5cd03380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5cd03380(void *this,uint param_1,uint param_2,int *param_3,double *param_4,uint *param_5)

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
  double *pdVar10;
  bool bVar11;
  int local_14;
  int local_10;
  undefined4 local_c [3];
  
  uVar9 = param_1;
  *(uint *)((int)this + 0x54) = (uint)(param_1 == 2);
  bVar11 = param_1 == 0;
  if (param_3 == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_5;
  }
  iVar7 = FUN_5cd004d0(this,local_c);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0x4c) == 0)) ||
      ((bVar11 && ((*(int *)((int)this + 0x30) != 0 && (*(int *)((int)this + 0x54) == 0)))))) &&
     (iVar7 = FUN_5cd01e40(this,(int)local_c,uVar9), iVar7 < 0)) {
    return iVar7;
  }
  pdVar10 = param_4;
  *(undefined4 *)((int)this + 0x30) = 1;
  local_10 = FUN_5cd037a0(this,param_2,&local_14,param_4,&param_1);
  if (DAT_5cd679f8 != 0) goto LAB_5cd03776;
  piVar1 = (int *)((int)this + 0x148);
  param_2 = param_1;
  uVar9 = *(uint *)(*(int *)((int)this + 0x44) + 4);
  if (*(int *)((int)this + 0x15c) == 0) {
    iVar7 = *piVar1;
    *piVar1 = iVar7 - param_1;
    if ((int)(iVar7 - param_1) < 1) {
      uVar8 = rand();
      *piVar1 = (uVar8 & 3) * (uVar9 >> 4) + uVar9 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x154) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x158) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x15c) = uVar9 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      pdVar10 = param_4;
      goto LAB_5cd034a7;
    }
    uVar9 = 0;
  }
  else {
LAB_5cd034a7:
    uVar9 = *(uint *)((int)this + 0x15c);
    if (uVar9 <= param_2) {
      param_2 = uVar9;
    }
    *(uint *)((int)this + 0x15c) = uVar9 - param_2;
    uVar9 = param_2;
  }
  psVar4 = *(short **)((int)this + 0x44);
  if (*psVar4 == 1) {
    sVar2 = psVar4[7];
    if (sVar2 == 8) {
      uVar3 = psVar4[1];
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        DAT_5cd7651c = DAT_5cd7651c + *(int *)((int)this + 0x154);
        param_4 = (double *)(int)(char)(*(byte *)pdVar10 ^ 0x80);
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
        *(byte *)pdVar10 = bVar6;
        if (1 < uVar3) {
          DAT_5cd76520 = DAT_5cd76520 + 1 + *(int *)((int)this + 0x158);
          param_4 = (double *)(int)(char)(*(byte *)((int)pdVar10 + 1) ^ 0x80);
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
          *(byte *)((int)pdVar10 + 1) = bVar6;
        }
        pdVar10 = (double *)((int)pdVar10 + (uint)uVar3);
      }
    }
    else if (sVar2 == 0x10) {
      uVar3 = psVar4[1];
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        DAT_5cd7650c = DAT_5cd7650c + *(int *)((int)this + 0x154);
        iVar7 = ftol();
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        *(short *)pdVar10 = *(short *)pdVar10 + (short)iVar7;
        if (1 < uVar3) {
          DAT_5cd76510 = DAT_5cd76510 + 1 + *(int *)((int)this + 0x158);
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *(short *)((int)pdVar10 + 2) = *(short *)((int)pdVar10 + 2) + (short)iVar7;
        }
        pdVar10 = (double *)((int)pdVar10 + (uint)uVar3 * 2);
      }
    }
    else {
      if (sVar2 != 0x20) {
        return -0x7fffbffb;
      }
      uVar3 = psVar4[1];
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        fVar5 = *(float *)(*(int *)((int)this + 0x150) +
                          (DAT_5cd76504 % *(uint *)((int)this + 0x14c)) * 4) * (float)_DAT_5cd51758;
        DAT_5cd76504 = DAT_5cd76504 + *(int *)((int)this + 0x154);
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
        *(int *)pdVar10 = *(int *)pdVar10 + iVar7;
        if (1 < uVar3) {
          uVar8 = DAT_5cd76508 % *(uint *)((int)this + 0x14c);
          DAT_5cd76508 = DAT_5cd76508 + 1 + *(int *)((int)this + 0x158);
          iVar7 = FUN_5ccf4680((double)*(float *)(*(int *)((int)this + 0x150) + uVar8 * 4));
          *(int *)((int)pdVar10 + 4) = *(int *)((int)pdVar10 + 4) + iVar7;
        }
        pdVar10 = (double *)((int)pdVar10 + (uint)uVar3 * 4);
      }
    }
  }
  else if (psVar4[7] == 0x20) {
    FUN_5ccfeb80((float *)pdVar10,uVar9,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),
                 (int)piVar1);
  }
  else {
    if (psVar4[7] != 0x40) {
      return -0x7fffbffb;
    }
    FUN_5ccf4600(pdVar10,uVar9,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),(int)piVar1);
  }
LAB_5cd03776:
  if (param_3 != (int *)0x0) {
    *param_3 = local_14;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
  }
  return local_10;
}


