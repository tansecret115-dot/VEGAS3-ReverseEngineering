/* Module: vidpcore.dll
   Function: FUN_5de871d0
   Address: 5de871d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de871d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  HGLOBAL pvVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  SIZE_T dwBytes;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  float10 extraout_ST0;
  int local_184;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined4 local_150;
  undefined4 *local_14c;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_11c;
  double local_118 [3];
  double local_100 [3];
  undefined4 local_e8 [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_c8;
  int local_c4;
  double local_c0;
  undefined4 local_90;
  undefined4 local_8c;
  
  iVar6 = FUN_5debbf10(&local_164,&local_17c,&local_134,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar6) {
    local_178 = local_134;
    local_138 = FUN_5de86c00(local_17c);
    if (0x1ff < local_138) {
      local_138 = 0x200;
    }
    local_130 = (int)(local_138 - local_17c) / 2;
    local_174 = ftol();
    if (local_174 == 0) {
      local_174 = 1;
    }
    iVar6 = ftol();
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    local_12c = (((local_138 - 2) - iVar6) - local_174) + 1;
    local_16c = ((local_138 - 2) - local_174) + 1;
    local_170 = local_138 - 1;
    puVar12 = local_e8;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    pdVar10 = local_118;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pdVar10 = 0;
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    dwBytes = (local_138 + 1) * 0x10;
    pdVar10 = local_118;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pdVar10 = 0;
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    pvVar7 = GlobalAlloc(2,dwBytes);
    local_14c = GlobalLock(pvVar7);
    puVar12 = local_14c;
    for (iVar8 = (local_17c + 1U & 0xfffffff) << 2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    local_150 = 0;
    ppuVar11 = &local_c8;
    for (iVar8 = 0x30; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppuVar11 = (undefined4 *)0x0;
      ppuVar11 = ppuVar11 + 1;
    }
    pvVar7 = GlobalAlloc(2,dwBytes);
    local_c8 = GlobalLock(pvVar7);
    local_178 = local_178 + 0x14;
    puVar12 = local_c8;
    for (iVar8 = (local_17c + 1U & 0xfffffff) << 2; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_184 = 5;
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    local_c4 = iVar6 + local_174;
    local_90 = 0;
    local_8c = 0;
    iVar6 = local_164;
    if (5 < local_164 + -5) {
      do {
        if (param_5 == 4) {
          local_168 = local_178;
          local_150 = FUN_5ded42b0(local_150,0,local_138,0);
          iVar6 = local_130;
          iVar8 = -local_130;
          if (iVar8 < local_130 + local_17c) {
            puVar12 = local_14c + local_130 * -2;
            iVar9 = local_17c;
            do {
              if ((-1 < iVar8) && (iVar8 < iVar9)) {
                if (iVar8 < (int)(local_138 - 1)) {
                  FUN_5ded1830(local_e8,local_168);
                  *puVar12 = local_d8;
                  puVar12[1] = local_d4;
                  iVar9 = local_17c;
                }
                local_168 = local_168 + param_3;
              }
              iVar8 = iVar8 + 1;
              puVar12 = puVar12 + 2;
            } while (iVar8 < iVar6 + iVar9);
          }
          puVar12 = local_14c;
          FUN_5ded43d0();
          iVar6 = local_170;
          iVar8 = 0;
          pdVar10 = local_100;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)pdVar10 = 0;
            pdVar10 = (double *)((int)pdVar10 + 4);
          }
          if (0 < local_c4) {
            pdVar10 = (double *)(puVar12 + local_170 * 2);
            do {
              iVar8 = iVar8 + 1;
              *(double *)(local_c8 + iVar8 * 2 + -2) = ABS(*pdVar10);
              pdVar10 = pdVar10 + -1;
            } while (iVar8 < local_c4);
          }
          FUN_5de86ee0(&local_c8);
          if (local_16c < iVar6) {
            pdVar10 = (double *)(puVar12 + local_16c * 2);
            iVar6 = iVar6 - local_16c;
            do {
              dVar1 = *pdVar10;
              pdVar10 = pdVar10 + 1;
              iVar6 = iVar6 + -1;
              local_100[0] = ABS(dVar1) + local_100[0];
            } while (iVar6 != 0);
          }
          local_100[0] = local_100[0] / (double)local_174;
          iVar8 = (local_16c - local_174) + -1;
          local_118[0] = (local_c0 - _DAT_5df1eec0) * local_100[0] * local_100[0] + local_118[0];
          iVar6 = local_164;
          if (iVar8 < (int)local_138) {
            pbVar13 = (byte *)(local_178 + 2);
            do {
              iVar6 = local_16c;
              bVar4 = ftol();
              dVar1 = _DAT_5df1eec0;
              if ((iVar8 < iVar6) || (bVar3 = true, local_170 <= iVar8)) {
                bVar3 = false;
              }
              if ((iVar8 < local_12c) || (iVar6 <= iVar8)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              bVar5 = bVar4;
              if (((bVar2) || (bVar3)) && (local_c0 <= _DAT_5df1eec0)) {
                bVar5 = 0;
              }
              pbVar13[-2] = bVar5;
              bVar5 = bVar4;
              if (bVar2) {
                if (bVar4 < 0x33) {
                  bVar5 = 0x32;
                }
              }
              else if (bVar3) {
                bVar5 = 0;
              }
              else if (dVar1 < local_c0) {
                bVar5 = 0;
              }
              pbVar13[-1] = bVar5;
              if (bVar3) {
                if (bVar4 < 0x33) {
                  bVar4 = 0x32;
                }
              }
              else if (bVar2) {
                bVar4 = 0;
              }
              else if (dVar1 < local_c0) {
                bVar4 = 0;
              }
              *pbVar13 = bVar4;
              pbVar13[1] = 0xff;
              pbVar13 = pbVar13 + param_3;
              iVar8 = iVar8 + 1;
              iVar6 = local_164;
            } while (iVar8 < (int)local_138);
          }
        }
        local_178 = local_178 + 4;
        local_184 = local_184 + 1;
      } while (local_184 < iVar6 + -5);
    }
    local_11c = local_17c;
    local_128 = 0;
    local_124 = 0;
    local_118[0] = local_118[0] - (double)local_164 * (double)local_17c * _DAT_5df2b508;
    local_160 = 0x163;
    local_158 = 0x16d;
    local_15c = local_17c + -0x23;
    local_154 = local_17c + -5;
    FUN_5debb890(param_1,&local_128,param_3,&local_160,4,0,0x3ff00000,0,0x3ff00000,0,0x3ff00000,0,
                 0x3ff00000);
    iVar6 = ftol();
    if (iVar6 == 0) {
      local_160 = 0x163;
      local_158 = 0x16d;
    }
    else {
      if (iVar6 < -0xfa) {
        iVar6 = -0xfa;
      }
      else if (0xfa < iVar6) {
        iVar6 = 0xfa;
      }
      local_158 = iVar6 + 0x16f;
      local_160 = 0x16e;
      if (local_158 < 0x16f) {
        local_160 = iVar6 + 0x163;
        local_158 = 0x164;
      }
    }
    local_180 = (uint)((float10)_DAT_5df18838 < extraout_ST0);
    local_15c = local_17c + -0x23;
    local_154 = local_17c + -5;
    FUN_5debb890(param_1,&local_128,param_3,&local_160,4,(double)local_180,
                 (double)(extraout_ST0 <= (float10)_DAT_5df18838),0,0,0,0x3ff00000);
    FUN_5ded4290(local_150);
    puVar12 = local_14c;
    pvVar7 = GlobalHandle(local_14c);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(puVar12);
    GlobalFree(pvVar7);
    ppuVar11 = &local_c8;
    local_184 = 3;
    do {
      if (*ppuVar11 != (undefined4 *)0x0) {
        pvVar7 = GlobalHandle(*ppuVar11);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*ppuVar11);
        GlobalFree(pvVar7);
      }
      ppuVar11 = ppuVar11 + 0x10;
      local_184 = local_184 + -1;
    } while (local_184 != 0);
    iVar6 = 0;
  }
  return iVar6;
}


