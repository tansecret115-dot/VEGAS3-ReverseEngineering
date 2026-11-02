/* Module: espr3260.dll
   Function: FUN_632f3cd0
   Address: 632f3cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f3cd0(void *this,float *param_1,float *param_2,float *param_3,int param_4,float *param_5,
            int *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  float local_c;
  float *local_8;
  
  iVar11 = 0x50;
  pfVar9 = param_2;
  fVar3 = _DAT_632fa32c;
  do {
    fVar1 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    iVar11 = iVar11 + -1;
    fVar3 = fVar1 * fVar1 + fVar3;
  } while (iVar11 != 0);
  iVar11 = 0x50;
  pfVar9 = param_1;
  fVar1 = _DAT_632fa32c;
  do {
    fVar2 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    iVar11 = iVar11 + -1;
    fVar1 = fVar2 * fVar2 + fVar1;
  } while (iVar11 != 0);
  local_18 = (float *)((int)this + 0x4080);
  local_10 = (float *)0x0;
  local_14 = param_1;
  do {
    if ((int)local_10 < 0x50) {
      piVar15 = (int *)(local_18 + -0x71e);
      pfVar19 = local_14;
      pfVar23 = local_10;
      pfVar9 = (float *)_DAT_632fa328;
      do {
        fVar2 = *pfVar19;
        local_8 = (float *)(fVar2 + fVar2 +
                           *(float *)(((int)param_2 - (int)param_1) + (int)pfVar19) *
                           SQRT(fVar1 / fVar3));
        if ((float)local_8 < _DAT_632fa31c) {
          fVar2 = -fVar2;
          local_8 = (float *)-(float)local_8;
          piVar15[-0x50] = -0x40800000;
          *piVar15 = 0x3f800000;
        }
        else {
          piVar15[-0x50] = 0x3f800000;
          *piVar15 = -0x40800000;
        }
        *pfVar19 = fVar2;
        piVar15[-0xa0] = (int)local_8;
        if ((float)pfVar9 < (float)local_8) {
          local_1c = pfVar23;
          pfVar9 = local_8;
        }
        pfVar23 = (float *)((int)pfVar23 + 5);
        piVar15 = piVar15 + 5;
        pfVar19 = pfVar19 + 5;
      } while ((int)pfVar23 < 0x50);
    }
    *local_18 = (float)local_1c;
    local_10 = (float *)((int)local_10 + 1);
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
  } while ((int)local_10 < 5);
  local_18 = (float *)((int)this + 0x2188);
  pfVar19 = (float *)0x0;
  pfVar9 = param_1;
  do {
    local_20 = 8;
    do {
      param_2 = (float *)0xbf800000;
      pfVar7 = local_18;
      for (pfVar23 = pfVar19; (int)pfVar23 < 0x50; pfVar23 = (float *)((int)pfVar23 + 5)) {
        if ((float)param_2 < *pfVar7) {
          param_2 = (float *)*pfVar7;
          pfVar9 = pfVar23;
        }
        pfVar7 = pfVar7 + 5;
      }
      *(undefined4 *)((int)this + (int)pfVar9 * 4 + 0x2188) = 0xbf800000;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    pfVar19 = (float *)((int)pfVar19 + 1);
    local_18 = local_18 + 1;
  } while ((int)pfVar19 < 5);
  puVar12 = (undefined4 *)((int)this + 0x2848);
  iVar11 = 0x50;
  local_8 = (float *)((int)this + 0x25c8);
  do {
    pfVar9 = local_8;
    *pfVar9 = 0.0;
    *puVar12 = 0;
    local_8 = pfVar9 + 1;
    puVar12 = puVar12 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  iVar11 = 0x50;
  pfVar19 = local_8;
  do {
    fVar3 = *(float *)(((int)param_3 - (int)local_8) + (int)pfVar19);
    *pfVar19 = fVar3;
    *(float *)(((int)puVar12 - (int)local_8) + (int)pfVar19) = -fVar3;
    pfVar19 = pfVar19 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  pfVar19 = (float *)((int)this + 0x2b44);
  param_3 = (float *)0x10;
  pfVar23 = local_8;
  pfVar7 = pfVar19;
  pfVar6 = (float *)((int)this + 0x2c04);
  pfVar14 = (float *)((int)this + 0x2b04);
  fVar3 = _DAT_632fa31c;
  do {
    fVar3 = *pfVar23 * *pfVar23 + fVar3;
    pfVar5 = pfVar7 + -1;
    *pfVar6 = fVar3 * _DAT_632fa334;
    fVar3 = pfVar23[1] * pfVar23[1] + fVar3;
    *(float *)((int)this + (0x2bc8 - (int)pfVar19) + (int)pfVar5) = fVar3 * _DAT_632fa334;
    fVar3 = pfVar23[2] * pfVar23[2] + fVar3;
    *(float *)((int)this + (0x2b88 - (int)pfVar19) + (int)pfVar5) = fVar3 * _DAT_632fa334;
    param_3 = (float *)((int)param_3 + -1);
    fVar3 = pfVar23[3] * pfVar23[3] + fVar3;
    *pfVar7 = fVar3 * _DAT_632fa334;
    fVar3 = pfVar23[4] * pfVar23[4] + fVar3;
    *pfVar14 = fVar3 * _DAT_632fa334;
    pfVar23 = pfVar23 + 5;
    pfVar7 = pfVar5;
    pfVar6 = pfVar6 + -1;
    pfVar14 = pfVar14 + -1;
  } while (param_3 != (float *)0x0);
  param_3 = pfVar9 + 2;
  pfVar19 = (float *)((int)this + 0x3404);
  local_2c = 1;
  do {
    local_18 = pfVar19 + 0x100;
    pfVar23 = pfVar19 + 0x200;
    pfVar7 = local_8;
    pfVar6 = param_3;
    pfVar14 = pfVar23;
    local_14 = pfVar19;
    local_10 = pfVar19 + -0x100;
    fVar3 = _DAT_632fa31c;
    if (local_2c < 0x10) {
      local_24 = (float)(0x10 - local_2c);
      pfVar5 = local_8;
      pfVar13 = param_3;
      pfVar24 = local_18;
      do {
        fVar3 = *pfVar5 * *pfVar13 + fVar3;
        pfVar20 = local_14 + -0x11;
        *pfVar14 = fVar3;
        local_18 = pfVar24 + -0x11;
        fVar3 = pfVar5[1] * pfVar13[1] + fVar3;
        pfVar7 = pfVar5 + 5;
        pfVar6 = pfVar13 + 5;
        pfVar14 = pfVar14 + -0x11;
        *pfVar24 = fVar3;
        fVar3 = pfVar5[2] * pfVar13[2] + fVar3;
        *local_14 = fVar3;
        pfVar21 = local_10 + -0x11;
        fVar3 = pfVar5[3] * pfVar13[3] + fVar3;
        *local_10 = fVar3;
        fVar3 = pfVar5[4] * pfVar13[4] + fVar3;
        *(float *)((int)pfVar19 + (0xc04 - (int)pfVar23) + (int)pfVar14) = fVar3;
        local_24 = (float)((int)local_24 + -1);
        pfVar5 = pfVar7;
        pfVar13 = pfVar6;
        pfVar24 = local_18;
        local_14 = pfVar20;
        local_10 = pfVar21;
      } while (local_24 != 0.0);
    }
    param_3 = param_3 + 5;
    fVar3 = *pfVar7 * *pfVar6 + fVar3;
    pfVar19 = pfVar19 + -0x10;
    *pfVar14 = fVar3;
    fVar3 = pfVar7[1] * pfVar6[1] + fVar3;
    *local_18 = fVar3;
    fVar3 = pfVar7[2] * pfVar6[2] + fVar3;
    *local_14 = fVar3;
    *local_10 = pfVar6[3] * pfVar7[3] + fVar3;
    bVar4 = local_2c < 0x10;
    local_2c = local_2c + 1;
  } while (bVar4);
  local_18 = (float *)((int)this + 0x4004);
  local_2c = 1;
  do {
    pfVar9 = pfVar9 + 5;
    pfVar19 = local_8;
    pfVar23 = pfVar9;
    pfVar7 = local_18;
    fVar3 = _DAT_632fa31c;
    if (local_2c < 0x10) {
      iVar11 = 0x10 - local_2c;
      pfVar6 = local_8;
      pfVar14 = pfVar9;
      pfVar5 = local_18;
      do {
        fVar3 = *pfVar6 * *pfVar14 + fVar3;
        *pfVar5 = fVar3;
        pfVar19 = pfVar6 + 5;
        pfVar23 = pfVar14 + 5;
        pfVar7 = pfVar5 + -0x11;
        fVar3 = pfVar6[1] * pfVar14[1] + fVar3;
        iVar11 = iVar11 + -1;
        pfVar5[-0x101] = fVar3;
        fVar3 = pfVar6[2] * pfVar14[2] + fVar3;
        pfVar5[-0x201] = fVar3;
        fVar3 = pfVar6[3] * pfVar14[3] + fVar3;
        pfVar5[-0x301] = fVar3;
        fVar3 = pfVar6[4] * pfVar14[4] + fVar3;
        pfVar5[-0x401] = fVar3;
        pfVar6 = pfVar19;
        pfVar14 = pfVar23;
        pfVar5 = pfVar7;
      } while (iVar11 != 0);
    }
    local_18 = local_18 + -1;
    *pfVar7 = *pfVar19 * *pfVar23 + fVar3;
    bVar4 = local_2c < 0x10;
    local_2c = local_2c + 1;
  } while (bVar4);
  pfVar9 = (float *)((int)this + 0x2c08);
  local_18 = (float *)0x0;
  do {
    if ((int)local_18 < 0x50) {
      iVar11 = ((int)local_18 + 1) % 5;
      param_3 = (float *)((int)local_18 << 2);
      do {
        iVar17 = (int)this + 0x22c8;
        if (*(float *)((int)param_3 + iVar17) < (float)_DAT_632fa320) {
          iVar17 = (int)this + 0x2408;
        }
        if (iVar11 < 0x50) {
          pfVar19 = (float *)(iVar17 + iVar11 * 4);
          uVar16 = (0x54U - iVar11) / 5;
          pfVar23 = pfVar9;
          do {
            fVar3 = *pfVar19;
            pfVar9 = pfVar23 + 1;
            pfVar19 = pfVar19 + 5;
            uVar16 = uVar16 - 1;
            *pfVar23 = fVar3 * *pfVar23;
            pfVar23 = pfVar9;
          } while (uVar16 != 0);
        }
        param_3 = param_3 + 5;
      } while ((int)param_3 < 0x140);
    }
    local_18 = (float *)((int)local_18 + 1);
  } while ((int)local_18 < 5);
  iVar11 = 0;
  piVar15 = &DAT_632fa2bc;
  fVar3 = _DAT_632fa328;
  do {
    if (fVar3 < param_1[*(int *)((int)this + *piVar15 * 4 + 0x4080)] +
                param_1[*(int *)((int)this + piVar15[-1] * 4 + 0x4080)]) {
      local_1c = (float *)iVar11;
      fVar3 = param_1[*(int *)((int)this + *piVar15 * 4 + 0x4080)] +
              param_1[*(int *)((int)this + piVar15[-1] * 4 + 0x4080)];
    }
    piVar15 = piVar15 + 1;
    iVar11 = iVar11 + 1;
  } while ((int)piVar15 < 0x632fa2d0);
  local_24 = -1.0;
  local_1c = (float *)(&DAT_632fa2b8 + (int)local_1c);
  local_18 = (float *)0x3f800000;
  local_14 = (float *)0x2;
  do {
    local_28 = 4;
    iVar11 = *(int *)((int)this + (int)*local_1c * 4 + 0x4080);
    *(int *)((int)this + 0x4030) = iVar11;
    iVar17 = *(int *)((int)this + (int)local_1c[1] * 4 + 0x4080);
    *(int *)((int)this + 0x4034) = iVar17;
    param_2 = (float *)(param_1[iVar17] + param_1[iVar11]);
    iVar17 = iVar11 / 5 + (int)*local_1c * 0x10;
    iVar11 = *(int *)((int)this + 0x4034) / 5;
    local_c = *(float *)((int)this + (iVar17 * 0x10 + iVar11) * 4 + 0x2c08) +
              *(float *)((int)this + ((int)local_1c[1] * 0x10 + iVar11) * 4 + 0x2ac8) +
              *(float *)((int)this + iVar17 * 4 + 0x2ac8);
    puVar8 = (undefined4 *)((int)this + 0x2408);
    for (iVar11 = 0x50; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pfVar19 = (float *)((int)this + 0x4034);
    pfVar9 = local_1c;
    do {
      pfVar23 = pfVar9 + 2;
      fVar3 = pfVar19[-1];
      if ((float)_DAT_632fa320 <= *(float *)((int)this + (int)fVar3 * 4 + 0x22c8)) {
        param_3 = local_8 + -(int)fVar3;
      }
      else {
        param_3 = (float *)(puVar12 + -(int)fVar3);
      }
      fVar3 = *pfVar19;
      if ((float)_DAT_632fa320 <= *(float *)((int)this + (int)fVar3 * 4 + 0x22c8)) {
        pfVar7 = local_8 + -(int)fVar3;
      }
      else {
        pfVar7 = (float *)(puVar12 + -(int)fVar3);
      }
      local_2c = 0x50;
      pfVar6 = (float *)((int)this + 0x2408);
      do {
        fVar3 = *param_3;
        param_3 = param_3 + 1;
        local_2c = local_2c + -1;
        *pfVar6 = *pfVar6 + fVar3 + *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
      } while (local_2c != 0);
      FUN_632f38f0(local_8,(int)this + 0x2408,(float *)*pfVar23,(int)pfVar9[3],
                   (float *)((int)this + 0x22c8),(float *)((int)this + 0x2ac8),(int)this + 0x2548,
                   (float *)((int)this + 0x2588));
      param_3 = pfVar19 + 2;
      FUN_632f3b80(this,*pfVar23,(int)pfVar9[3],(float *)&param_2,&local_c,(int *)(pfVar19 + 1),
                   (int *)param_3,(int)param_1,(float *)((int)this + 0x2548),
                   (float *)((int)this + 0x2588),(int)this + 0x2c08);
      local_28 = local_28 + -1;
      pfVar19 = param_3;
      pfVar9 = pfVar23;
    } while (local_28 != 0);
    if ((float)_DAT_632fa320 <
        (float)local_18 * (float)param_2 * (float)param_2 - local_c * local_24) {
      local_18 = (float *)local_c;
      puVar8 = (undefined4 *)((int)this + 0x4094);
      iVar11 = 10;
      do {
        *puVar8 = puVar8[-0x19];
        puVar8 = puVar8 + 1;
        iVar11 = iVar11 + -1;
        local_24 = (float)param_2 * (float)param_2;
      } while (iVar11 != 0);
    }
    local_1c = local_1c + 1;
    local_14 = (float *)((int)local_14 + -1);
  } while (local_14 != (float *)0x0);
  iVar11 = 0x50;
  pfVar9 = param_5;
  do {
    *(undefined4 *)((param_4 - (int)param_5) + (int)pfVar9) = 0;
    *pfVar9 = 0.0;
    pfVar9 = pfVar9 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  piVar15 = (int *)((int)this + 0x4094);
  puVar8 = (undefined4 *)((int)this + 0x4030);
  for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  param_3 = (float *)0xa;
  do {
    iVar11 = *piVar15;
    iVar17 = iVar11 / 5;
    iVar18 = iVar11 % 5;
    if (*(float *)((int)this + iVar11 * 4 + 0x22c8) <= _DAT_632fa31c) {
      iVar17 = iVar17 + 0x10;
      *(float *)(param_4 + iVar11 * 4) = *(float *)(param_4 + iVar11 * 4) - _DAT_632fa32c;
    }
    else {
      *(float *)(param_4 + iVar11 * 4) = *(float *)(param_4 + iVar11 * 4) - _DAT_632fa328;
      *piVar15 = *piVar15 + 0xa0;
    }
    iVar11 = iVar18 * 4;
    iVar10 = iVar11;
    if ((((*(int *)((int)this + iVar18 * 0x10 + 0x4030) < 0) ||
         (iVar10 = iVar11 + 1, *(int *)((int)this + iVar18 * 0x10 + 0x4034) < 0)) ||
        (iVar18 = iVar10 * 4, iVar10 = iVar11 + 2, *(int *)((int)this + iVar18 + 0x4034) < 0)) ||
       (iVar18 = iVar10 * 4, iVar10 = iVar11 + 3, *(int *)((int)this + iVar18 + 0x4034) < 0)) {
      *(int *)((int)this + iVar10 * 4 + 0x4030) = iVar17;
    }
    pfVar19 = (float *)(puVar12 + -*piVar15);
    iVar11 = 0x50;
    pfVar9 = param_5;
    do {
      fVar3 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      iVar11 = iVar11 + -1;
      *pfVar9 = *pfVar9 + fVar3;
      pfVar9 = pfVar9 + 1;
    } while (iVar11 != 0);
    piVar15 = piVar15 + 1;
    param_3 = (float *)((int)param_3 + -1);
  } while (param_3 != (float *)0x0);
  piVar15 = (int *)((int)this + 0x4030);
  param_1 = (float *)0x0;
  do {
    pfVar9 = param_1;
    if (*piVar15 < 0) {
      pfVar9 = param_1 + 1;
    }
    if (*(int *)((int)(pfVar9 + 0x100c) + (int)this) < 0) {
      pfVar9 = pfVar9 + 1;
    }
    pfVar19 = pfVar9 + 1;
    if ((*(int *)((int)(pfVar9 + 0x100d) + (int)this) < 0) &&
       (pfVar19 = pfVar9 + 2, *(int *)((int)(pfVar9 + 0x100e) + (int)this) < 0)) {
      pfVar19 = pfVar9 + 3;
    }
    if (((*(uint *)((int)(pfVar19 + 0x100c) + (int)this) ^
         *(uint *)((int)(pfVar9 + 0x100c) + (int)this)) & 0x10) == 0) {
      if (*(int *)((int)(pfVar9 + 0x100c) + (int)this) ==
          *(int *)((int)(pfVar19 + 0x100c) + (int)this) ||
          *(int *)((int)(pfVar9 + 0x100c) + (int)this) -
          *(int *)((int)(pfVar19 + 0x100c) + (int)this) < 0) {
        *param_6 = (*(uint *)((int)(pfVar19 + 0x100c) + (int)this) & 0xf) +
                   *(int *)((int)(pfVar9 + 0x100c) + (int)this) * 0x10;
      }
      else {
        *param_6 = (*(uint *)((int)(pfVar9 + 0x100c) + (int)this) & 0xf) +
                   *(int *)((int)(pfVar19 + 0x100c) + (int)this) * 0x10;
      }
    }
    else {
      uVar16 = *(uint *)((int)(pfVar19 + 0x100c) + (int)this) & 0xf;
      uVar22 = *(uint *)((int)(pfVar9 + 0x100c) + (int)this) & 0xf;
      if (uVar22 == uVar16 || (int)(uVar22 - uVar16) < 0) {
        *param_6 = (*(uint *)((int)(pfVar9 + 0x100c) + (int)this) & 0xf) +
                   *(int *)((int)(pfVar19 + 0x100c) + (int)this) * 0x10;
      }
      else {
        *param_6 = (*(uint *)((int)(pfVar19 + 0x100c) + (int)this) & 0xf) +
                   *(int *)((int)(pfVar9 + 0x100c) + (int)this) * 0x10;
      }
    }
    param_1 = param_1 + 4;
    piVar15 = piVar15 + 4;
    param_6 = param_6 + 1;
  } while ((int)param_1 < 0x50);
  return;
}


