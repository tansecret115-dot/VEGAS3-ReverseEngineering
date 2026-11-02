/* Module: sftrans1.dll
   Function: FUN_00479390
   Address: 00479390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00479390(int param_1,int param_2,int param_3,int param_4,double param_5)

{
  byte bVar1;
  byte *pMem;
  double dVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  float *pfVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float *local_134;
  int local_130;
  undefined4 uStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int *local_d8 [53];
  
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_3 + 0xac);
  puVar6 = (undefined4 *)(param_3 + 0x18);
  puVar12 = (undefined4 *)(param_2 + 0x18);
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_3 + 0x15c);
  uVar8 = *(uint *)(param_3 + 0x160) & 1;
  *(uint *)(param_2 + 0x160) = uVar8;
  dVar2 = _DAT_00555910;
  if ((*(byte *)(param_4 + 0x160) & 1) == 0) {
    if ((*(byte *)(param_3 + 0x160) & 1) == 0) {
      *(uint *)(param_2 + 0x160) = *(uint *)(param_2 + 0x160) & 0xfffffff9;
      if (((param_5 <= dVar2) || (_DAT_00555908 <= param_5)) ||
         ((*(int *)(param_3 + 0x1a0) == *(int *)(param_4 + 0x1a0) &&
          (*(int *)(param_3 + 0x1a4) == *(int *)(param_4 + 0x1a4))))) {
        *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
        uVar5 = *(undefined4 *)(param_3 + 0x1a4);
      }
      else {
        uVar5 = 0;
        *(undefined4 *)(param_2 + 0x1a0) = 0;
      }
      bVar15 = _DAT_00555910 <= param_5;
      *(undefined4 *)(param_2 + 0x1a4) = uVar5;
      dVar2 = _DAT_00555910;
      if ((bVar15) && (dVar2 = param_5, _DAT_00555908 < param_5)) {
        dVar2 = _DAT_00555908;
      }
      *(double *)(param_2 + 0x1b8) =
           (*(double *)(param_4 + 0x1b8) - *(double *)(param_3 + 0x1b8)) * dVar2 +
           *(double *)(param_3 + 0x1b8);
      dVar2 = _DAT_00555910;
      if ((_DAT_00555910 <= param_5) && (dVar2 = param_5, _DAT_00555908 < param_5)) {
        dVar2 = _DAT_00555908;
      }
      *(double *)(param_2 + 0x1c0) =
           (*(double *)(param_4 + 0x1c0) - *(double *)(param_3 + 0x1c0)) * dVar2 +
           *(double *)(param_3 + 0x1c0);
    }
    else {
      *(uint *)(param_2 + 0x160) = *(uint *)(param_2 + 0x160) | 4;
      *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_4 + 0x1b8);
      *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_4 + 0x1bc);
      *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_4 + 0x1c0);
      uVar5 = *(undefined4 *)(param_4 + 0x1c4);
      *(double *)(param_2 + 0x168) = param_5;
      *(undefined4 *)(param_2 + 0x18c) = uVar5;
      *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
      *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_3 + 0x1a4);
    }
  }
  else {
    *(uint *)(param_2 + 0x160) = uVar8 | 2;
    if (*(int *)(param_1 + 0x7d4) == 0) {
      pvVar3 = GlobalAlloc(0x40,0x170);
      pvVar4 = GlobalLock(pvVar3);
      if (pvVar4 == (LPVOID)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0053af90();
      }
      *(int *)(param_1 + 0x7d4) = iVar7;
      if (iVar7 != 0) {
        return 0x8007000e;
      }
    }
    local_130 = *(int *)(param_4 + 0x1cc);
    uStack_12c = *(undefined4 *)(param_4 + 0x1c8);
    local_d8[0] = &local_130;
    FUN_00479210(param_4,local_d8);
    iVar7 = FUN_0053f9e0(local_d8,&local_e8,0,0,0);
    if (iVar7 < 0) {
      local_dc = 0;
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
    }
    *(int *)(param_2 + 0x178) = local_e0 - local_e8;
    *(int *)(param_2 + 0x17c) = local_dc - local_e4;
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_4 + 0x1a0);
    *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_4 + 0x1a4);
    *(double *)(param_2 + 0x168) = param_5;
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    *(undefined4 *)(param_2 + 0x1bc) = *(undefined4 *)(param_3 + 0x1bc);
    *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_3 + 0x1c0);
    *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_3 + 0x1c4);
  }
  fVar16 = (float10)param_5;
  *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_3 + 0x1b0);
  *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a8);
  fVar17 = (float10)_DAT_00555910;
  *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_3 + 0x1ac);
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x80) =
       (float)(((float10)*(float *)(param_4 + 0x80) - (float10)*(float *)(param_3 + 0x80)) * fVar17
              + (float10)*(float *)(param_3 + 0x80));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x7c) =
       (float)(((float10)*(float *)(param_4 + 0x7c) - (float10)*(float *)(param_3 + 0x7c)) * fVar17
              + (float10)*(float *)(param_3 + 0x7c));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x78) =
       (float)(((float10)*(float *)(param_4 + 0x78) - (float10)*(float *)(param_3 + 0x78)) * fVar17
              + (float10)*(float *)(param_3 + 0x78));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x84) =
       (float)(((float10)*(float *)(param_4 + 0x84) - (float10)*(float *)(param_3 + 0x84)) * fVar17
              + (float10)*(float *)(param_3 + 0x84));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x198) =
       (float)(((float10)*(float *)(param_4 + 0x198) - (float10)*(float *)(param_3 + 0x198)) *
               fVar17 + (float10)*(float *)(param_3 + 0x198));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x194) =
       (float)(((float10)*(float *)(param_4 + 0x194) - (float10)*(float *)(param_3 + 0x194)) *
               fVar17 + (float10)*(float *)(param_3 + 0x194));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 400) =
       (float)(((float10)*(float *)(param_4 + 400) - (float10)*(float *)(param_3 + 400)) * fVar17 +
              (float10)*(float *)(param_3 + 400));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(float *)(param_2 + 0x19c) =
       (float)(((float10)*(float *)(param_4 + 0x19c) - (float10)*(float *)(param_3 + 0x19c)) *
               fVar17 + (float10)*(float *)(param_3 + 0x19c));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(double *)(param_2 + 0xa0) =
       (double)(((float10)*(double *)(param_4 + 0xa0) - (float10)*(double *)(param_3 + 0xa0)) *
                fVar17 + (float10)*(double *)(param_3 + 0xa0));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(double *)(param_2 + 0x88) =
       (double)(((float10)*(double *)(param_4 + 0x88) - (float10)*(double *)(param_3 + 0x88)) *
                fVar17 + (float10)*(double *)(param_3 + 0x88));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(double *)(param_2 + 0x98) =
       (double)(((float10)*(double *)(param_4 + 0x98) - (float10)*(double *)(param_3 + 0x98)) *
                fVar17 + (float10)*(double *)(param_3 + 0x98));
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  *(double *)(param_2 + 0x90) =
       (double)(((float10)*(double *)(param_4 + 0x90) - (float10)*(double *)(param_3 + 0x90)) *
                fVar17 + (float10)*(double *)(param_3 + 0x90));
  uStack_12c = *(undefined4 *)(param_3 + 0x6c);
  if ((float10)_DAT_00555910 <= fVar16) {
    fVar17 = fVar16;
    if ((float10)_DAT_00555908 < fVar16) {
      fVar17 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar17 = (float10)_DAT_00555910;
  }
  local_134 = (float *)(param_3 + 0xe4);
  pfVar13 = (float *)(param_4 + 0xec);
  local_ec = param_3 - param_2;
  piVar9 = (int *)(param_2 + 0xb0);
  local_130 = param_3 - param_4;
  local_104 = 2;
  *(double *)(param_2 + 0x68) =
       (double)(((float10)*(double *)(param_4 + 0x68) - (float10)*(double *)(param_3 + 0x68)) *
                fVar17 + (float10)*(double *)(param_3 + 0x68));
  do {
    iVar7 = *(int *)((int)piVar9 + local_ec);
    *piVar9 = iVar7;
    if (iVar7 != 0) {
      local_108 = *(float *)((int)pfVar13 + local_130);
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0xf] = (int)(float)(((float10)*pfVar13 - (float10)local_108) * fVar17 +
                                (float10)local_108);
      local_f4 = local_134[1];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0xe] = (int)(float)(((float10)pfVar13[-1] - (float10)local_f4) * fVar17 +
                                (float10)local_f4);
      local_120 = *local_134;
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0xd] = (int)(float)(((float10)pfVar13[-2] - (float10)local_120) * fVar17 +
                                (float10)local_120);
      local_100 = local_134[3];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0x10] = (int)(float)(((float10)pfVar13[1] - (float10)local_100) * fVar17 +
                                 (float10)local_100);
      local_118 = local_134[-2];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0xb] = (int)(float)(((float10)pfVar13[-4] - (float10)local_118) * fVar17 +
                                (float10)local_118);
      local_f8 = local_134[-1];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0xc] = (int)(float)(((float10)pfVar13[-3] - (float10)local_f8) * fVar17 +
                                (float10)local_f8);
      local_110 = local_134[4];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0x11] = (int)(float)(((float10)pfVar13[2] - (float10)local_110) * fVar17 +
                                 (float10)local_110);
      local_f0 = local_134[5];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[0x12] = (int)(float)(((float10)pfVar13[3] - (float10)local_f0) * fVar17 +
                                 (float10)local_f0);
      local_128 = local_134[-8];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[5] = (int)(float)(((float10)pfVar13[-10] - (float10)local_128) * fVar17 +
                              (float10)local_128);
      local_fc = local_134[-9];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[4] = (int)(float)(((float10)pfVar13[-0xb] - (float10)local_fc) * fVar17 +
                              (float10)local_fc);
      local_124 = local_134[-10];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[3] = (int)(float)(((float10)pfVar13[-0xc] - (float10)local_124) * fVar17 +
                              (float10)local_124);
      local_11c = local_134[-7];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[6] = (int)(float)(((float10)pfVar13[-9] - (float10)local_11c) * fVar17 +
                              (float10)local_11c);
      local_114 = local_134[-6];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[7] = (int)(float)(((float10)pfVar13[-8] - (float10)local_114) * fVar17 +
                              (float10)local_114);
      local_10c = local_134[-5];
      if ((float10)_DAT_00555910 <= fVar16) {
        fVar17 = fVar16;
        if ((float10)_DAT_00555908 < fVar16) {
          fVar17 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar17 = (float10)_DAT_00555910;
      }
      piVar9[8] = (int)(float)(((float10)pfVar13[-7] - (float10)local_10c) * fVar17 +
                              (float10)local_10c);
    }
    local_134 = local_134 + 0x15;
    pfVar13 = pfVar13 + 0x15;
    piVar9 = piVar9 + 0x15;
    local_104 = local_104 + -1;
  } while (local_104 != 0);
  pbVar14 = *(byte **)(param_3 + 0x1cc);
  if (pbVar14 != (byte *)0x0) {
    pMem = *(byte **)(param_2 + 0x1cc);
    pbVar11 = pMem;
    if (pMem == (byte *)0x0) {
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
      pvVar3 = GlobalAlloc(2,*(SIZE_T *)(param_3 + 0x1c8));
      puVar6 = GlobalLock(pvVar3);
      *(undefined4 **)(param_2 + 0x1cc) = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    else {
      do {
        bVar1 = *pbVar11;
        bVar15 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_0047a077:
          iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_0047a07c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar15 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_0047a077;
        pbVar14 = pbVar14 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_0047a07c:
      if (iVar7 == 0) {
        return 0;
      }
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_2 + 0x1cc));
      GlobalFree(pvVar3);
      pvVar3 = GlobalAlloc(2,*(SIZE_T *)(param_3 + 0x1c8));
      puVar6 = GlobalLock(pvVar3);
      *(undefined4 **)(param_2 + 0x1cc) = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    uVar8 = *(uint *)(param_3 + 0x1c8);
    puVar12 = *(undefined4 **)(param_3 + 0x1cc);
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return 0;
}


