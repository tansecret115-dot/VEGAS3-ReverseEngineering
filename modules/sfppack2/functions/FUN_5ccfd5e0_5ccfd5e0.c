/* Module: sfppack2.dll
   Function: FUN_5ccfd5e0
   Address: 5ccfd5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_5ccfd5e0(void *this,int param_1,undefined4 param_2,int *param_3,double *param_4,uint *param_5)

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
  uint local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0 [40];
  
  *(uint *)((int)this + 0xe8) = (uint)(param_1 == 2);
  if (param_3 == (int *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *param_3;
  }
  if (param_5 == (uint *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = *param_5;
  }
  iVar7 = FUN_5ccfa4d0(this,local_a0);
  if ((((iVar7 != 0) || (*(int *)((int)this + 0xe0) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0xc4) != 0)))) &&
     (iVar7 = FUN_5ccfcfa0(this,(int)local_a0,param_1), iVar7 < 0)) {
    return iVar7;
  }
  *(undefined4 *)((int)this + 0xc4) = 1;
  local_a4 = FUN_5ccfe910(this,param_2,&local_a8,param_4,&local_ac);
  uVar9 = local_ac;
  if (DAT_5cd679f8 != 0) goto LAB_5ccfd9fe;
  piVar1 = (int *)((int)this + 0x170);
  uVar10 = *(uint *)(*(int *)((int)this + 0xd8) + 4);
  if (*(int *)((int)this + 0x184) == 0) {
    iVar7 = *piVar1;
    *piVar1 = iVar7 - local_ac;
    if ((int)(iVar7 - local_ac) < 1) {
      uVar8 = rand();
      *piVar1 = (uVar8 & 3) * (uVar10 >> 4) + uVar10 * 3;
      uVar8 = rand();
      *(uint *)((int)this + 0x17c) = (uVar8 & 0x1f) + 1;
      uVar8 = rand();
      *(uint *)((int)this + 0x180) = (uVar8 & 0x1f) + 1;
      *(uint *)((int)this + 0x184) = uVar10 >> 3;
      _DAT_5cd76514 = 0;
      _DAT_5cd76518 = 0;
      goto LAB_5ccfd726;
    }
    uVar9 = 0;
  }
  else {
LAB_5ccfd726:
    uVar10 = *(uint *)((int)this + 0x184);
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    *(uint *)((int)this + 0x184) = uVar10 - uVar9;
  }
  psVar4 = *(short **)((int)this + 0xd8);
  if (*psVar4 == 1) {
    sVar2 = psVar4[7];
    if (sVar2 == 8) {
      uVar3 = psVar4[1];
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        DAT_5cd7651c = DAT_5cd7651c + *(int *)((int)this + 0x17c);
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
          DAT_5cd76520 = DAT_5cd76520 + 1 + *(int *)((int)this + 0x180);
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
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        DAT_5cd7650c = DAT_5cd7650c + *(int *)((int)this + 0x17c);
        iVar7 = ftol();
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        *(short *)param_4 = *(short *)param_4 + (short)iVar7;
        if (1 < uVar3) {
          DAT_5cd76510 = DAT_5cd76510 + 1 + *(int *)((int)this + 0x180);
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
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        fVar5 = *(float *)(*(int *)((int)this + 0x178) +
                          (DAT_5cd76504 % *(uint *)((int)this + 0x174)) * 4) * (float)_DAT_5cd51758;
        DAT_5cd76504 = DAT_5cd76504 + *(int *)((int)this + 0x17c);
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
          uVar10 = DAT_5cd76508 % *(uint *)((int)this + 0x174);
          DAT_5cd76508 = DAT_5cd76508 + 1 + *(int *)((int)this + 0x180);
          iVar7 = FUN_5ccf4680((double)*(float *)(*(int *)((int)this + 0x178) + uVar10 * 4));
          *(int *)((int)param_4 + 4) = *(int *)((int)param_4 + 4) + iVar7;
        }
        param_4 = (double *)((int)param_4 + (uint)uVar3 * 4);
      }
    }
  }
  else if (psVar4[7] == 0x20) {
    FUN_5ccfeb80((float *)param_4,uVar9,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),
                 (int)piVar1);
  }
  else {
    if (psVar4[7] != 0x40) {
      return -0x7fffbffb;
    }
    FUN_5ccf4600(param_4,uVar9,(uint)(ushort)psVar4[1],*(undefined4 *)(psVar4 + 2),(int)piVar1);
  }
LAB_5ccfd9fe:
  if (param_3 != (int *)0x0) {
    *param_3 = local_a8;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_ac;
  }
  return local_a4;
}


