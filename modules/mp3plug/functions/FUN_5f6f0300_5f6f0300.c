/* Module: mp3plug.dll
   Function: FUN_5f6f0300
   Address: 5f6f0300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f6f0300(int *param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  float10 fVar24;
  float10 fVar25;
  uint local_2e8;
  uint uStack_2e4;
  uint local_2d8;
  uint uStack_2d4;
  uint local_2c8;
  uint uStack_2c4;
  uint local_2b8;
  uint uStack_2b4;
  uint local_2a8;
  uint uStack_2a4;
  uint local_298;
  uint uStack_294;
  uint local_288;
  uint uStack_284;
  uint local_278;
  uint uStack_274;
  uint local_268;
  uint uStack_264;
  uint local_258;
  uint uStack_254;
  uint local_248;
  uint uStack_244;
  uint local_238;
  uint uStack_234;
  uint local_228;
  uint uStack_224;
  uint local_218;
  uint uStack_214;
  uint local_208;
  uint uStack_204;
  uint local_1f8;
  uint uStack_1f4;
  uint local_1e8;
  uint uStack_1e4;
  uint local_1d8;
  uint uStack_1d4;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1a8;
  uint uStack_1a4;
  uint local_198;
  uint uStack_194;
  uint local_188;
  uint uStack_184;
  uint local_178;
  uint uStack_174;
  uint local_168;
  uint uStack_164;
  uint local_158;
  uint uStack_154;
  uint local_148;
  uint uStack_144;
  uint local_138;
  uint uStack_134;
  uint local_128;
  uint uStack_124;
  uint local_118;
  uint uStack_114;
  int *local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  uint local_ec;
  uint local_98;
  
  iVar21 = param_1[4];
  *param_1 = param_6;
  if (iVar21 == 0) {
    local_ec = 8;
  }
  else if ((iVar21 == 1) || (iVar21 == 2)) {
    local_ec = 6;
  }
  if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6))))
  {
    FUN_5f709b20(*(int **)param_1[3],*(int *)(*param_4 + 0x14),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 5));
    FUN_5f709b20(*(int **)param_1[3],*(int *)(param_4[1] + 0x14),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 0x1b));
    FUN_5f709b20(*(int **)param_1[3],*(int *)(param_2 + 0x24),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 0x7f));
    FUN_5f6d51f0(2.0,(uint)(param_1 + 0x7f),(uint)(param_1 + 0x7f),**(uint **)param_1[3]);
    piVar9 = *(int **)param_1[3];
    FUN_5f70ba10(*(int *)(*param_4 + 0x288),*param_5 + 8,*piVar9,piVar9[1],piVar9[2],
                 (int)(param_1 + 0x136));
    iVar21 = (*(int **)param_1[3])[1];
    FUN_5f70ba10(*(int *)(param_4[1] + 0x288),param_5[1] + 8,**(int **)param_1[3],iVar21,iVar21,
                 (int)(param_1 + 0x14c));
    if (*(int *)(param_2 + 4) != 0) {
      piVar9 = *(int **)param_1[3];
      FUN_5f70ba10(*(int *)(param_2 + 0xc0),*param_5 + 8,*piVar9,piVar9[1],piVar9[2],
                   (int)(param_1 + 0x1b0));
      piVar9 = *(int **)param_1[3];
      FUN_5f70ba10(*(int *)(param_2 + 0xc4),param_5[1] + 8,*piVar9,piVar9[1],piVar9[2],
                   (int)(param_1 + 0x1c6));
    }
  }
  else if (param_6 == 2) {
    local_108 = param_1 + 0x31;
    local_104 = param_1 + 0x58;
    local_10c = param_1 + 0x95;
    local_100 = param_1 + 0x162;
    local_fc = param_1 + 0x189;
    local_f8 = param_1 + 0x1dc;
    local_f4 = param_1 + 0x203;
    iVar21 = 0;
    iVar8 = -3;
    do {
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(iVar21 + 0x2c + *param_4),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_108);
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(iVar21 + 0x2c + param_4[1]),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_104);
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(param_2 + 0x3c + iVar21),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_10c);
      FUN_5f6d51f0(2.0,(uint)local_10c,(uint)local_10c,**(uint **)(param_1[3] + 4));
      FUN_5f70b920(*(int *)(*param_4 + 0x298 + iVar8 * 4),**(int **)(param_1[3] + 4),
                   (*(int **)(param_1[3] + 4))[1],(int)local_100);
      FUN_5f70b920(*(int *)(param_4[1] + 0x298 + iVar8 * 4),**(int **)(param_1[3] + 4),
                   (*(int **)(param_1[3] + 4))[1],(int)local_fc);
      if (*(int *)(param_2 + 4) != 0) {
        FUN_5f70b920(*(int *)(param_2 + 0xd4 + iVar8 * 4),**(int **)(param_1[3] + 4),
                     (*(int **)(param_1[3] + 4))[1],(int)local_f8);
        FUN_5f70b920(*(int *)(param_2 + 0xe0 + iVar8 * 4),**(int **)(param_1[3] + 4),
                     (*(int **)(param_1[3] + 4))[1],(int)local_f4);
      }
      local_108 = local_108 + 0xd;
      local_104 = local_104 + 0xd;
      local_10c = local_10c + 0xd;
      local_100 = local_100 + 0xd;
      local_fc = local_fc + 0xd;
      local_f8 = local_f8 + 0xd;
      local_f4 = local_f4 + 0xd;
      iVar21 = iVar21 + 0x18;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0);
  }
  else if (param_6 == 5) {
    FUN_5f709b20(*(int **)param_1[3],*(int *)(*param_4 + 0x14),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 5));
    FUN_5f709b20(*(int **)param_1[3],*(int *)(param_4[1] + 0x14),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 0x1b));
    FUN_5f709b20(*(int **)param_1[3],*(int *)(param_2 + 0x24),*(int *)param_1[1] + 0x14,
                 (int)(param_1 + 0x7f));
    FUN_5f6d51f0(2.0,(uint)(param_1 + 0x7f),(uint)(param_1 + 0x7f),local_ec);
    FUN_5f70ba10(*(int *)(*param_4 + 0x288),*param_5 + 8,local_ec,*(int *)(*(int *)param_1[3] + 4),
                 *(int *)(*(int *)param_1[3] + 8),(int)(param_1 + 0x136));
    FUN_5f70ba10(*(int *)(param_4[1] + 0x288),param_5[1] + 8,local_ec,
                 *(int *)(*(int *)param_1[3] + 4),*(int *)(*(int *)param_1[3] + 4),
                 (int)(param_1 + 0x14c));
    if (*(int *)(param_2 + 4) != 0) {
      FUN_5f70ba10(*(int *)(param_2 + 0xc0),*param_5 + 8,local_ec,*(int *)(*(int *)param_1[3] + 4),
                   *(int *)(*(int *)param_1[3] + 8),(int)(param_1 + 0x1b0));
      FUN_5f70ba10(*(int *)(param_2 + 0xc4),param_5[1] + 8,local_ec,*(int *)(*(int *)param_1[3] + 4)
                   ,*(int *)(*(int *)param_1[3] + 8),(int)(param_1 + 0x1c6));
    }
    local_f8 = param_1 + 0x31;
    local_fc = param_1 + 0x58;
    local_f4 = param_1 + 0x95;
    local_100 = param_1 + 0x162;
    local_104 = param_1 + 0x189;
    local_108 = param_1 + 0x1dc;
    local_10c = param_1 + 0x203;
    iVar21 = 0;
    iVar8 = -3;
    do {
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(iVar21 + 0x2c + *param_4),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_f8);
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(iVar21 + 0x2c + param_4[1]),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_fc);
      FUN_5f709b20(*(int **)(param_1[3] + 4),*(int *)(param_2 + 0x3c + iVar21),
                   *(int *)(param_1[1] + 4) + 0x14,(int)local_f4);
      FUN_5f6d51f0(2.0,(uint)local_f4,(uint)local_f4,**(uint **)(param_1[3] + 4));
      FUN_5f70b920(*(int *)(*param_4 + 0x298 + iVar8 * 4),**(int **)(param_1[3] + 4),
                   (*(int **)(param_1[3] + 4))[1],(int)local_100);
      FUN_5f70b920(*(int *)(param_4[1] + 0x298 + iVar8 * 4),**(int **)(param_1[3] + 4),
                   (*(int **)(param_1[3] + 4))[1],(int)local_104);
      if (*(int *)(param_2 + 4) != 0) {
        FUN_5f70b920(*(int *)(param_2 + 0xd4 + iVar8 * 4),**(int **)(param_1[3] + 4),
                     (*(int **)(param_1[3] + 4))[1],(int)local_108);
        FUN_5f70b920(*(int *)(param_2 + 0xe0 + iVar8 * 4),**(int **)(param_1[3] + 4),
                     (*(int **)(param_1[3] + 4))[1],(int)local_10c);
      }
      local_f8 = local_f8 + 0xd;
      local_fc = local_fc + 0xd;
      local_f4 = local_f4 + 0xd;
      local_100 = local_100 + 0xd;
      local_104 = local_104 + 0xd;
      local_108 = local_108 + 0xd;
      local_10c = local_10c + 0xd;
      iVar21 = iVar21 + 0x18;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0);
  }
  if (((param_6 == 0) || (param_6 == 1)) || ((param_6 == 3 || ((param_6 == 4 || (param_6 == 6))))))
  {
    FUN_5f6f4210(*(int *)(*param_4 + 0x288),(int)(param_1 + 0x1b));
    iVar21 = **(int **)param_1[3];
    if (0 < iVar21) {
      piVar9 = param_1;
      do {
        if ((float)piVar9[5] <= (float)piVar9[0x1b]) {
          piVar9[0x22a] = piVar9[0x14c];
        }
        else {
          piVar9[0x22a] = piVar9[0x136];
        }
        piVar9 = piVar9 + 1;
      } while ((int)piVar9 < (int)(param_1 + iVar21));
    }
  }
  else if (param_6 == 2) {
    piVar9 = param_1 + 0x58;
    local_f4 = param_1 + 0x162;
    iVar21 = -3;
    do {
      FUN_5f6f4210(*(int *)(*param_4 + 0x298 + iVar21 * 4),(int)piVar9);
      FUN_5f6f4270((int)local_f4,(int)piVar9);
      local_f4 = local_f4 + 0xd;
      piVar9 = piVar9 + 0xd;
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0);
  }
  else if (param_6 == 5) {
    FUN_5f6f4210(*(int *)(*param_4 + 0x288),(int)(param_1 + 0x1b));
    FUN_5f6f4270((int)(param_1 + 0x136),(int)(param_1 + 0x1b));
    piVar9 = param_1 + 0x58;
    local_f4 = param_1 + 0x162;
    iVar21 = -3;
    do {
      FUN_5f6f4210(*(int *)(*param_4 + 0x298 + iVar21 * 4),(int)piVar9);
      FUN_5f6f4270((int)local_f4,(int)piVar9);
      local_f4 = local_f4 + 0xd;
      piVar9 = piVar9 + 0xd;
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0);
  }
  if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6))))
  {
    if (param_1[4] == 0) {
      iVar21 = **(int **)param_1[3];
      if (0 < iVar21) {
        iVar8 = 0;
        do {
          fVar24 = (float10)_DAT_5f75dde0 * (float10)(float)param_1[iVar8 + 5];
          if (fVar24 < (float10)_DAT_5f75dde4) {
            fVar24 = (float10)_DAT_5f75dde8;
          }
          if (fVar24 < (float10)(float)param_1[iVar8 + 0x1b]) {
            fVar24 = (float10)(float)param_1[iVar8 + 0x1b];
          }
          fVar24 = SQRT((float10)(float)param_1[iVar8 + 5] / fVar24);
          fVar6 = (float)fVar24;
          fVar24 = (float10)fpatan(fVar24,(float10)1);
          dVar4 = (double)(fVar24 * (float10)_DAT_5f75ddd4 + (float10)_DAT_5f75ddf0);
          local_118 = SUB84(dVar4,0);
          uStack_114 = (uint)((ulonglong)dVar4 >> 0x20);
          uVar20 = uStack_114 >> 0x14 & 0x7ff;
          if (uVar20 < 0x3ff) {
            uVar20 = 0;
          }
          else {
            uVar20 = (uStack_114 << 0xb | local_118 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
            if ((longlong)dVar4 < 0) {
              uVar20 = -uVar20;
            }
          }
          param_1[iVar8 + 0x33a] = uVar20;
          if ((uVar20 == 0) && (_DAT_5f75ddd0 < fVar6)) {
            param_1[iVar8 + 0x33a] = 1;
            uVar20 = 1;
          }
          if ((uVar20 == 6) && (fVar6 < _DAT_5f75ddcc)) {
            param_1[iVar8 + 0x33a] = 5;
          }
          fVar6 = (float)param_1[iVar8 + 0x7f];
          if ((float)param_1[iVar8 + 0x7f] <= _DAT_5f75ddf8) {
            fVar6 = _DAT_5f75def0;
          }
          iVar16 = iVar8 + 1;
          param_1[iVar8 + 0x267] =
               (int)((SQRT((float)param_1[iVar8 + 0x1b]) + SQRT((float)param_1[iVar8 + 5])) /
                    SQRT(fVar6));
          iVar8 = iVar16;
        } while (iVar16 < iVar21);
      }
      param_1[iVar21 + 0x267] = param_1[iVar21 + 0x266];
    }
    else {
      fVar6 = _DAT_5f75def4 * _DAT_5f75ddd8;
      iVar21 = **(int **)param_1[3];
      if (0 < iVar21) {
        iVar8 = 0;
        do {
          fVar24 = (float10)(float)param_1[iVar8 + 5];
          if (fVar24 <= (float10)_DAT_5f75def8) {
            fVar24 = (float10)_DAT_5f75df14;
          }
          fVar25 = (float10)(float)param_1[iVar8 + 0x1b];
          if (fVar25 <= (float10)_DAT_5f75defc) {
            fVar25 = (float10)_DAT_5f75df10;
          }
          fVar24 = (float10)log2(fVar24 / fVar25);
          dVar4 = (double)((float10)0.6931471805599453 * fVar24 * (float10)fVar6);
          uStack_124 = (uint)((ulonglong)dVar4 >> 0x20);
          local_128 = SUB84(dVar4,0);
          uVar20 = uStack_124 >> 0x14 & 0x7ff;
          if (uVar20 < 0x3ff) {
            uVar20 = 0;
          }
          else {
            uVar20 = (uStack_124 << 0xb | local_128 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
            if ((longlong)dVar4 < 0) {
              uVar20 = -uVar20;
            }
          }
          param_1[iVar8 + 0x33a] = uVar20;
          if ((int)uVar20 < 0) {
            iVar16 = uVar20 * -2 + -1;
            param_1[iVar8 + 0x33a] = iVar16;
            if (6 < iVar16) {
              param_1[iVar8 + 0x33a] = 5;
            }
          }
          else {
            param_1[iVar8 + 0x33a] = uVar20 * 2;
            if (6 < (int)(uVar20 * 2)) {
              param_1[iVar8 + 0x33a] = 6;
            }
          }
          fVar3 = (float)param_1[iVar8 + 0x1b];
          if (fVar3 < (float)param_1[iVar8 + 5]) {
            fVar3 = (float)param_1[iVar8 + 5];
          }
          fVar7 = (float)param_1[iVar8 + 0x7f];
          if ((float)param_1[iVar8 + 0x7f] <= _DAT_5f75df04) {
            fVar7 = _DAT_5f75df0c;
          }
          iVar16 = iVar8 + 1;
          param_1[iVar8 + 0x267] = (int)SQRT(fVar3 / fVar7);
          iVar8 = iVar16;
        } while (iVar16 < iVar21);
      }
      param_1[iVar21 + 0x267] = param_1[iVar21 + 0x266];
    }
  }
  else if (param_6 == 2) {
    iVar21 = 0x9f4;
    piVar9 = param_1;
    do {
      if (param_1[4] == 0) {
        iVar8 = **(int **)(param_1[3] + 4);
        if (0 < iVar8) {
          iVar16 = 0;
          do {
            fVar24 = (float10)_DAT_5f75df18 * (float10)(float)piVar9[iVar16 + 0x31];
            if (fVar24 < (float10)_DAT_5f75df1c) {
              fVar24 = (float10)_DAT_5f75df20;
            }
            if (fVar24 < (float10)(float)piVar9[iVar16 + 0x58]) {
              fVar24 = (float10)(float)piVar9[iVar16 + 0x58];
            }
            fVar24 = SQRT((float10)(float)piVar9[iVar16 + 0x31] / fVar24);
            fVar6 = (float)fVar24;
            fVar24 = (float10)fpatan(fVar24,(float10)1);
            dVar4 = (double)(fVar24 * (float10)_DAT_5f75ddd4 + (float10)_DAT_5f75df28);
            local_138 = SUB84(dVar4,0);
            uStack_134 = (uint)((ulonglong)dVar4 >> 0x20);
            uVar20 = uStack_134 >> 0x14 & 0x7ff;
            if (uVar20 < 0x3ff) {
              uVar20 = 0;
            }
            else {
              uVar20 = (uStack_134 << 0xb | local_138 >> 0x15 | 0x80000000) >>
                       (0x1eU - (char)uVar20 & 0x1f);
              if ((longlong)dVar4 < 0) {
                uVar20 = -uVar20;
              }
            }
            piVar9[iVar16 + 0x350] = uVar20;
            if ((uVar20 == 0) && (_DAT_5f75ddd0 < fVar6)) {
              piVar9[iVar16 + 0x350] = 1;
              uVar20 = 1;
            }
            if ((uVar20 == 6) && (fVar6 < _DAT_5f75ddcc)) {
              piVar9[iVar16 + 0x350] = 5;
            }
            fVar6 = (float)piVar9[iVar16 + 0x95];
            if ((float)piVar9[iVar16 + 0x95] <= _DAT_5f75df30) {
              fVar6 = _DAT_5f75df40;
            }
            *(float *)((int)param_1 + iVar16 * 4 + iVar21) =
                 (SQRT((float)piVar9[iVar16 + 0x58]) + SQRT((float)piVar9[iVar16 + 0x31])) /
                 SQRT(fVar6);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar8);
        }
        *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21) =
             *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21 + -4);
      }
      else {
        fVar6 = _DAT_5f75df44 * _DAT_5f75ddd8;
        iVar8 = **(int **)(param_1[3] + 4);
        if (0 < iVar8) {
          iVar16 = 0;
          do {
            fVar24 = (float10)(float)piVar9[iVar16 + 0x31];
            if (fVar24 <= (float10)_DAT_5f75df48) {
              fVar24 = (float10)_DAT_5f75df64;
            }
            fVar25 = (float10)(float)piVar9[iVar16 + 0x58];
            if (fVar25 <= (float10)_DAT_5f75df4c) {
              fVar25 = (float10)_DAT_5f75df60;
            }
            fVar24 = (float10)log2(fVar24 / fVar25);
            dVar4 = (double)((float10)0.6931471805599453 * fVar24 * (float10)fVar6);
            uStack_144 = (uint)((ulonglong)dVar4 >> 0x20);
            local_148 = SUB84(dVar4,0);
            uVar20 = uStack_144 >> 0x14 & 0x7ff;
            if (uVar20 < 0x3ff) {
              uVar20 = 0;
            }
            else {
              uVar20 = (uStack_144 << 0xb | local_148 >> 0x15 | 0x80000000) >>
                       (0x1eU - (char)uVar20 & 0x1f);
              if ((longlong)dVar4 < 0) {
                uVar20 = -uVar20;
              }
            }
            piVar9[iVar16 + 0x350] = uVar20;
            if ((int)uVar20 < 0) {
              iVar10 = uVar20 * -2 + -1;
              piVar9[iVar16 + 0x350] = iVar10;
              if (6 < iVar10) {
                piVar9[iVar16 + 0x350] = 5;
              }
            }
            else {
              piVar9[iVar16 + 0x350] = uVar20 * 2;
              if (6 < (int)(uVar20 * 2)) {
                piVar9[iVar16 + 0x350] = 6;
              }
            }
            fVar3 = (float)piVar9[iVar16 + 0x58];
            if (fVar3 < (float)piVar9[iVar16 + 0x31]) {
              fVar3 = (float)piVar9[iVar16 + 0x31];
            }
            fVar7 = (float)piVar9[iVar16 + 0x95];
            if ((float)piVar9[iVar16 + 0x95] <= _DAT_5f75df54) {
              fVar7 = _DAT_5f75df5c;
            }
            *(float *)((int)param_1 + iVar16 * 4 + iVar21) = SQRT(fVar3 / fVar7);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar8);
        }
        *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21) =
             *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21 + -4);
      }
      iVar21 = iVar21 + 0x34;
      piVar9 = piVar9 + 0xd;
    } while (iVar21 < 0xa90);
  }
  else if (param_6 == 5) {
    if (param_1[4] == 0) {
      if (0 < (int)local_ec) {
        iVar21 = 0;
        do {
          fVar24 = (float10)_DAT_5f75df68 * (float10)(float)param_1[iVar21 + 5];
          if (fVar24 < (float10)_DAT_5f75df6c) {
            fVar24 = (float10)_DAT_5f75df70;
          }
          if (fVar24 < (float10)(float)param_1[iVar21 + 0x1b]) {
            fVar24 = (float10)(float)param_1[iVar21 + 0x1b];
          }
          fVar24 = SQRT((float10)(float)param_1[iVar21 + 5] / fVar24);
          fVar6 = (float)fVar24;
          fVar24 = (float10)fpatan(fVar24,(float10)1);
          dVar4 = (double)(fVar24 * (float10)_DAT_5f75ddd4 + (float10)_DAT_5f75df78);
          local_158 = SUB84(dVar4,0);
          uStack_154 = (uint)((ulonglong)dVar4 >> 0x20);
          uVar20 = uStack_154 >> 0x14 & 0x7ff;
          if (uVar20 < 0x3ff) {
            uVar20 = 0;
          }
          else {
            uVar20 = (uStack_154 << 0xb | local_158 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
            if ((longlong)dVar4 < 0) {
              uVar20 = -uVar20;
            }
          }
          param_1[iVar21 + 0x33a] = uVar20;
          if ((uVar20 == 0) && (_DAT_5f75ddd0 < fVar6)) {
            param_1[iVar21 + 0x33a] = 1;
            uVar20 = 1;
          }
          if ((uVar20 == 6) && (fVar6 < _DAT_5f75ddcc)) {
            param_1[iVar21 + 0x33a] = 5;
          }
          fVar6 = (float)param_1[iVar21 + 0x7f];
          if ((float)param_1[iVar21 + 0x7f] <= _DAT_5f75df80) {
            fVar6 = _DAT_5f75dfbc;
          }
          iVar8 = iVar21 + 1;
          param_1[iVar21 + 0x267] =
               (int)((SQRT((float)param_1[iVar21 + 0x1b]) + SQRT((float)param_1[iVar21 + 5])) /
                    SQRT(fVar6));
          iVar21 = iVar8;
        } while (iVar8 < (int)local_ec);
      }
      param_1[local_ec + 0x267] = param_1[local_ec + 0x266];
    }
    else {
      FUN_5f6f42c0((int)(param_1 + 0x7f),(int)(param_1 + 0x1b));
    }
    local_108 = param_1 + 0x95;
    local_10c = param_1 + 0x58;
    iVar21 = 0x9f4;
    piVar9 = param_1;
    do {
      if (param_1[4] == 0) {
        iVar8 = **(int **)(param_1[3] + 4);
        if (0 < iVar8) {
          iVar16 = 0;
          do {
            fVar24 = (float10)_DAT_5f75df90 * (float10)(float)piVar9[iVar16 + 0x31];
            if (fVar24 < (float10)_DAT_5f75df94) {
              fVar24 = (float10)_DAT_5f75df98;
            }
            if (fVar24 < (float10)(float)piVar9[iVar16 + 0x58]) {
              fVar24 = (float10)(float)piVar9[iVar16 + 0x58];
            }
            fVar24 = SQRT((float10)(float)piVar9[iVar16 + 0x31] / fVar24);
            fVar6 = (float)fVar24;
            fVar24 = (float10)fpatan(fVar24,(float10)1);
            dVar4 = (double)(fVar24 * (float10)_DAT_5f75ddd4 + (float10)_DAT_5f75dfa0);
            local_168 = SUB84(dVar4,0);
            uStack_164 = (uint)((ulonglong)dVar4 >> 0x20);
            uVar20 = uStack_164 >> 0x14 & 0x7ff;
            if (uVar20 < 0x3ff) {
              uVar20 = 0;
            }
            else {
              uVar20 = (uStack_164 << 0xb | local_168 >> 0x15 | 0x80000000) >>
                       (0x1eU - (char)uVar20 & 0x1f);
              if ((longlong)dVar4 < 0) {
                uVar20 = -uVar20;
              }
            }
            piVar9[iVar16 + 0x350] = uVar20;
            if ((uVar20 == 0) && (_DAT_5f75ddd0 < fVar6)) {
              piVar9[iVar16 + 0x350] = 1;
              uVar20 = 1;
            }
            if ((uVar20 == 6) && (fVar6 < _DAT_5f75ddcc)) {
              piVar9[iVar16 + 0x350] = 5;
            }
            fVar6 = (float)piVar9[iVar16 + 0x95];
            if ((float)piVar9[iVar16 + 0x95] <= _DAT_5f75dfa8) {
              fVar6 = _DAT_5f75dfb8;
            }
            *(float *)((int)param_1 + iVar16 * 4 + iVar21) =
                 (SQRT((float)piVar9[iVar16 + 0x58]) + SQRT((float)piVar9[iVar16 + 0x31])) /
                 SQRT(fVar6);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar8);
        }
        *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21) =
             *(undefined4 *)((int)param_1 + iVar8 * 4 + iVar21 + -4);
      }
      else {
        FUN_5f6f42c0((int)local_108,(int)local_10c);
      }
      local_108 = local_108 + 0xd;
      local_10c = local_10c + 0xd;
      iVar21 = iVar21 + 0x34;
      piVar9 = piVar9 + 0xd;
    } while (iVar21 < 0xa90);
  }
  if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6))))
  {
    if (*(int *)(param_2 + 4) == 0) {
      iVar21 = **(int **)param_1[3];
      dVar4 = (double)((float)(uint)(*(float **)param_1[2])[1] *
                      ((float)_DAT_5f75de08 / **(float **)param_1[2]));
      uStack_194 = (uint)((ulonglong)dVar4 >> 0x20);
      local_198 = SUB84(dVar4,0);
      uVar20 = uStack_194 >> 0x14 & 0x7ff;
      if (uVar20 < 0x3ff) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uStack_194 << 0xb | local_198 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar20 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar20 = -uVar20;
        }
      }
      dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddc4);
      uStack_184 = (uint)((ulonglong)dVar4 >> 0x20);
      local_188 = SUB84(dVar4,0);
      uVar20 = uStack_184 >> 0x14 & 0x7ff;
      if (uVar20 < 0x3ff) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uStack_184 << 0xb | local_188 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar20 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar20 = -uVar20;
        }
      }
      iVar8 = 0;
      if (0 < iVar21) {
        for (piVar9 = param_1;
            (int)piVar9 <
            (int)(((int)(param_1 + iVar21) - (int)param_1 & 0xfffffff8U) + (int)param_1);
            piVar9 = piVar9 + 2) {
          iVar8 = iVar8 + piVar9[0x136] + piVar9[0x14c] + piVar9[0x137] + piVar9[0x14d];
        }
        for (; (int)piVar9 < (int)(param_1 + iVar21); piVar9 = piVar9 + 1) {
          iVar8 = iVar8 + piVar9[0x136] + piVar9[0x14c];
        }
      }
      dVar4 = (double)((float)(int)(iVar8 - uVar20) * _DAT_5f75ddc0);
      uStack_174 = (uint)((ulonglong)dVar4 >> 0x20);
      local_178 = SUB84(dVar4,0);
      uVar15 = uStack_174 >> 0x14 & 0x7ff;
      if (uVar15 < 0x3ff) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uStack_174 << 0xb | local_178 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar15 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar15 = -uVar15;
        }
      }
      for (; ((int)(uVar20 + uVar15) < iVar8 && (9 < iVar21)); iVar21 = iVar21 + -1) {
        iVar8 = iVar8 + ((param_1[iVar21 + 0x229] - param_1[iVar21 + 0x135]) -
                        param_1[iVar21 + 0x14b]);
      }
      param_1[0x332] = iVar21;
    }
    else {
      iVar21 = **(int **)param_1[3];
      dVar4 = (double)((float)(uint)(*(float **)param_1[2])[1] *
                      ((float)_DAT_5f75de80 / **(float **)param_1[2]));
      uStack_1c4 = (uint)((ulonglong)dVar4 >> 0x20);
      local_1c8 = SUB84(dVar4,0);
      uVar20 = uStack_1c4 >> 0x14 & 0x7ff;
      if (uVar20 < 0x3ff) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uStack_1c4 << 0xb | local_1c8 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar20 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar20 = -uVar20;
        }
      }
      dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddc4);
      uStack_1b4 = (uint)((ulonglong)dVar4 >> 0x20);
      local_1b8 = SUB84(dVar4,0);
      uVar20 = uStack_1b4 >> 0x14 & 0x7ff;
      if (uVar20 < 0x3ff) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uStack_1b4 << 0xb | local_1b8 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar20 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar20 = -uVar20;
        }
      }
      iVar8 = 0;
      if (0 < iVar21) {
        for (piVar9 = param_1;
            (int)piVar9 <
            (int)(((int)(param_1 + iVar21) - (int)param_1 & 0xfffffff8U) + (int)param_1);
            piVar9 = piVar9 + 2) {
          iVar8 = iVar8 + piVar9[0x1b0] + piVar9[0x1c6] + piVar9[0x1b1] + piVar9[0x1c7];
        }
        for (; (int)piVar9 < (int)(param_1 + iVar21); piVar9 = piVar9 + 1) {
          iVar8 = iVar8 + piVar9[0x1b0] + piVar9[0x1c6];
        }
      }
      dVar4 = (double)((float)(int)(iVar8 - uVar20) * _DAT_5f75ddc0);
      uStack_1a4 = (uint)((ulonglong)dVar4 >> 0x20);
      local_1a8 = SUB84(dVar4,0);
      uVar15 = uStack_1a4 >> 0x14 & 0x7ff;
      if (uVar15 < 0x3ff) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uStack_1a4 << 0xb | local_1a8 >> 0x15 | 0x80000000) >>
                 (0x1eU - (char)uVar15 & 0x1f);
        if ((longlong)dVar4 < 0) {
          uVar15 = -uVar15;
        }
      }
      for (; ((int)(uVar20 + uVar15) < iVar8 && (9 < iVar21)); iVar21 = iVar21 + -1) {
        iVar8 = iVar8 + ((param_1[iVar21 + 0x229] - param_1[iVar21 + 0x1af]) -
                        param_1[iVar21 + 0x1c5]);
      }
      param_1[0x332] = iVar21;
    }
LAB_5f6f16e4:
    if (param_6 == 2) {
      param_1[0x330] = -1;
      goto LAB_5f6f04af;
    }
  }
  else {
    if (param_6 == 2) {
      if (*(int *)(param_2 + 4) == 0) {
        iVar21 = **(int **)(param_1[3] + 4);
        dVar4 = (double)((float)(uint)(*(float **)(param_1[2] + 4))[1] *
                        ((float)_DAT_5f75de90 / **(float **)(param_1[2] + 4)));
        uStack_1f4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_1f8 = SUB84(dVar4,0);
        uVar20 = uStack_1f4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_1f4 << 0xb | local_1f8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddbc);
        uStack_1e4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_1e8 = SUB84(dVar4,0);
        uVar20 = uStack_1e4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          local_98 = 0;
        }
        else {
          local_98 = (uStack_1e4 << 0xb | local_1e8 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            local_98 = -local_98;
          }
        }
        iVar8 = 0;
        iVar16 = 0;
        do {
          if (0 < iVar21) {
            iVar10 = (int)param_1 + iVar16;
            iVar17 = iVar16 + iVar21 * 4 + (int)param_1;
            iVar23 = (iVar17 - iVar10 & 0xfffffff8U) + iVar10;
            for (; iVar10 < iVar23; iVar10 = iVar10 + 8) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x588) + *(int *)(iVar10 + 0x624) +
                      *(int *)(iVar10 + 0x58c) + *(int *)(iVar10 + 0x628);
            }
            for (; iVar10 < iVar17; iVar10 = iVar10 + 4) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x588) + *(int *)(iVar10 + 0x624);
            }
          }
          iVar16 = iVar16 + 0x34;
        } while (iVar16 < 0x9c);
        dVar4 = (double)((float)(int)(iVar8 - local_98) * _DAT_5f75ddb8);
        uStack_1d4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_1d8 = SUB84(dVar4,0);
        uVar20 = uStack_1d4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_1d4 << 0xb | local_1d8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        for (; ((int)(local_98 + uVar20) < iVar8 && (7 < iVar21)); iVar21 = iVar21 + -1) {
          iVar8 = iVar8 + ((param_1[iVar21 + 0x23f] - param_1[iVar21 + 0x161]) -
                          param_1[iVar21 + 0x188]) +
                  ((param_1[iVar21 + 0x24c] - param_1[iVar21 + 0x16e]) - param_1[iVar21 + 0x195]) +
                  ((param_1[iVar21 + 0x259] - param_1[iVar21 + 0x17b]) - param_1[iVar21 + 0x1a2]);
        }
        param_1[0x335] = iVar21;
        param_1[0x334] = iVar21;
        param_1[0x333] = iVar21;
      }
      else {
        iVar21 = **(int **)(param_1[3] + 4);
        dVar4 = (double)((float)(uint)(*(float **)(param_1[2] + 4))[1] *
                        ((float)_DAT_5f75dea0 / **(float **)(param_1[2] + 4)));
        uStack_224 = (uint)((ulonglong)dVar4 >> 0x20);
        local_228 = SUB84(dVar4,0);
        uVar20 = uStack_224 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_224 << 0xb | local_228 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddbc);
        uStack_214 = (uint)((ulonglong)dVar4 >> 0x20);
        local_218 = SUB84(dVar4,0);
        uVar20 = uStack_214 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          local_98 = 0;
        }
        else {
          local_98 = (uStack_214 << 0xb | local_218 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            local_98 = -local_98;
          }
        }
        iVar8 = 0;
        iVar16 = 0;
        do {
          if (0 < iVar21) {
            iVar10 = (int)param_1 + iVar16;
            iVar17 = iVar16 + iVar21 * 4 + (int)param_1;
            iVar23 = (iVar17 - iVar10 & 0xfffffff8U) + iVar10;
            for (; iVar10 < iVar23; iVar10 = iVar10 + 8) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x770) + *(int *)(iVar10 + 0x80c) +
                      *(int *)(iVar10 + 0x774) + *(int *)(iVar10 + 0x810);
            }
            for (; iVar10 < iVar17; iVar10 = iVar10 + 4) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x770) + *(int *)(iVar10 + 0x80c);
            }
          }
          iVar16 = iVar16 + 0x34;
        } while (iVar16 < 0x9c);
        dVar4 = (double)((float)(int)(iVar8 - local_98) * _DAT_5f75ddb8);
        uStack_204 = (uint)((ulonglong)dVar4 >> 0x20);
        local_208 = SUB84(dVar4,0);
        uVar20 = uStack_204 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_204 << 0xb | local_208 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        for (; ((int)(local_98 + uVar20) < iVar8 && (7 < iVar21)); iVar21 = iVar21 + -1) {
          iVar8 = iVar8 + ((param_1[iVar21 + 0x23f] - param_1[iVar21 + 0x1db]) -
                          param_1[iVar21 + 0x202]) +
                  ((param_1[iVar21 + 0x24c] - param_1[iVar21 + 0x1e8]) - param_1[iVar21 + 0x20f]) +
                  ((param_1[iVar21 + 0x259] - param_1[iVar21 + 0x1f5]) - param_1[iVar21 + 0x21c]);
        }
        param_1[0x335] = iVar21;
        param_1[0x334] = iVar21;
        param_1[0x333] = iVar21;
      }
      goto LAB_5f6f16e4;
    }
    if (param_6 == 5) {
      if (*(int *)(param_2 + 4) == 0) {
        dVar4 = (double)(uint)(*(float **)param_1[2])[1] *
                (_DAT_5f75deb0 / (double)**(float **)param_1[2]);
        uStack_254 = (uint)((ulonglong)dVar4 >> 0x20);
        local_258 = SUB84(dVar4,0);
        uVar20 = uStack_254 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_254 << 0xb | local_258 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddc4);
        uStack_244 = (uint)((ulonglong)dVar4 >> 0x20);
        local_248 = SUB84(dVar4,0);
        uVar20 = uStack_244 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_244 << 0xb | local_248 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        iVar21 = 0;
        if (0 < (int)local_ec) {
          for (piVar9 = param_1;
              (int)piVar9 <
              (int)(((int)(param_1 + local_ec) - (int)param_1 & 0xfffffff8U) + (int)param_1);
              piVar9 = piVar9 + 2) {
            iVar21 = iVar21 + piVar9[0x136] + piVar9[0x14c] + piVar9[0x137] + piVar9[0x14d];
          }
          for (; (int)piVar9 < (int)(param_1 + local_ec); piVar9 = piVar9 + 1) {
            iVar21 = iVar21 + piVar9[0x136] + piVar9[0x14c];
          }
        }
        dVar4 = (double)((float)(int)(iVar21 - uVar20) * _DAT_5f75ddc0);
        uStack_234 = (uint)((ulonglong)dVar4 >> 0x20);
        local_238 = SUB84(dVar4,0);
        uVar15 = uStack_234 >> 0x14 & 0x7ff;
        if (uVar15 < 0x3ff) {
          uVar15 = 0;
        }
        else {
          uVar15 = (uStack_234 << 0xb | local_238 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar15 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar15 = -uVar15;
          }
        }
        for (uVar14 = local_ec; ((int)(uVar20 + uVar15) < iVar21 && (9 < (int)uVar14));
            uVar14 = uVar14 - 1) {
          iVar21 = iVar21 + ((param_1[uVar14 + 0x229] - param_1[uVar14 + 0x135]) -
                            param_1[uVar14 + 0x14b]);
        }
        param_1[0x332] = uVar14;
      }
      else {
        dVar4 = (double)(uint)(*(float **)param_1[2])[1] *
                (_DAT_5f75dee0 / (double)**(float **)param_1[2]);
        uStack_2e4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_2e8 = SUB84(dVar4,0);
        uVar20 = uStack_2e4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_2e4 << 0xb | local_2e8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddc4);
        uStack_2d4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_2d8 = SUB84(dVar4,0);
        uVar20 = uStack_2d4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_2d4 << 0xb | local_2d8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        iVar21 = 0;
        if (0 < (int)local_ec) {
          for (piVar9 = param_1;
              (int)piVar9 <
              (int)(((int)(param_1 + local_ec) - (int)param_1 & 0xfffffff8U) + (int)param_1);
              piVar9 = piVar9 + 2) {
            iVar21 = iVar21 + piVar9[0x1b0] + piVar9[0x1c6] + piVar9[0x1b1] + piVar9[0x1c7];
          }
          for (; (int)piVar9 < (int)(param_1 + local_ec); piVar9 = piVar9 + 1) {
            iVar21 = iVar21 + piVar9[0x1b0] + piVar9[0x1c6];
          }
        }
        dVar4 = (double)((float)(int)(iVar21 - uVar20) * _DAT_5f75ddc0);
        uStack_2c4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_2c8 = SUB84(dVar4,0);
        uVar15 = uStack_2c4 >> 0x14 & 0x7ff;
        if (uVar15 < 0x3ff) {
          uVar15 = 0;
        }
        else {
          uVar15 = (uStack_2c4 << 0xb | local_2c8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar15 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar15 = -uVar15;
          }
        }
        for (uVar14 = local_ec; ((int)(uVar20 + uVar15) < iVar21 && (9 < (int)uVar14));
            uVar14 = uVar14 - 1) {
          iVar21 = iVar21 + ((param_1[uVar14 + 0x229] - param_1[uVar14 + 0x1af]) -
                            param_1[uVar14 + 0x1c5]);
        }
        param_1[0x332] = uVar14;
      }
      if (*(int *)(param_2 + 4) == 0) {
        iVar21 = **(int **)(param_1[3] + 4);
        dVar4 = (double)((float)(uint)(*(float **)(param_1[2] + 4))[1] *
                        ((float)_DAT_5f75dec0 / **(float **)(param_1[2] + 4)));
        uStack_284 = (uint)((ulonglong)dVar4 >> 0x20);
        local_288 = SUB84(dVar4,0);
        uVar20 = uStack_284 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_284 << 0xb | local_288 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddbc);
        uStack_274 = (uint)((ulonglong)dVar4 >> 0x20);
        local_278 = SUB84(dVar4,0);
        uVar20 = uStack_274 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          local_98 = 0;
        }
        else {
          local_98 = (uStack_274 << 0xb | local_278 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            local_98 = -local_98;
          }
        }
        iVar8 = 0;
        iVar16 = 0;
        do {
          if (0 < iVar21) {
            iVar10 = (int)param_1 + iVar16;
            iVar17 = iVar16 + iVar21 * 4 + (int)param_1;
            iVar23 = (iVar17 - iVar10 & 0xfffffff8U) + iVar10;
            for (; iVar10 < iVar23; iVar10 = iVar10 + 8) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x588) + *(int *)(iVar10 + 0x624) +
                      *(int *)(iVar10 + 0x58c) + *(int *)(iVar10 + 0x628);
            }
            for (; iVar10 < iVar17; iVar10 = iVar10 + 4) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x588) + *(int *)(iVar10 + 0x624);
            }
          }
          iVar16 = iVar16 + 0x34;
        } while (iVar16 < 0x9c);
        dVar4 = (double)((float)(int)(iVar8 - local_98) * _DAT_5f75ddb8);
        uStack_264 = (uint)((ulonglong)dVar4 >> 0x20);
        local_268 = SUB84(dVar4,0);
        uVar20 = uStack_264 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_264 << 0xb | local_268 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        for (; ((int)(local_98 + uVar20) < iVar8 && (7 < iVar21)); iVar21 = iVar21 + -1) {
          iVar8 = iVar8 + ((param_1[iVar21 + 0x23f] - param_1[iVar21 + 0x161]) -
                          param_1[iVar21 + 0x188]) +
                  ((param_1[iVar21 + 0x24c] - param_1[iVar21 + 0x16e]) - param_1[iVar21 + 0x195]) +
                  ((param_1[iVar21 + 0x259] - param_1[iVar21 + 0x17b]) - param_1[iVar21 + 0x1a2]);
        }
        param_1[0x335] = iVar21;
        param_1[0x334] = iVar21;
        param_1[0x333] = iVar21;
      }
      else {
        iVar21 = **(int **)(param_1[3] + 4);
        dVar4 = (double)((float)(uint)(*(float **)(param_1[2] + 4))[1] *
                        ((float)_DAT_5f75ded0 / **(float **)(param_1[2] + 4)));
        uStack_2b4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_2b8 = SUB84(dVar4,0);
        uVar20 = uStack_2b4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_2b4 << 0xb | local_2b8 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        dVar4 = (double)((float)(int)(uVar20 - 0x78) * _DAT_5f75ddbc);
        uStack_2a4 = (uint)((ulonglong)dVar4 >> 0x20);
        local_2a8 = SUB84(dVar4,0);
        uVar20 = uStack_2a4 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          local_98 = 0;
        }
        else {
          local_98 = (uStack_2a4 << 0xb | local_2a8 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            local_98 = -local_98;
          }
        }
        iVar8 = 0;
        iVar16 = 0;
        do {
          if (0 < iVar21) {
            iVar10 = (int)param_1 + iVar16;
            iVar17 = iVar16 + iVar21 * 4 + (int)param_1;
            iVar23 = (iVar17 - iVar10 & 0xfffffff8U) + iVar10;
            for (; iVar10 < iVar23; iVar10 = iVar10 + 8) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x770) + *(int *)(iVar10 + 0x80c) +
                      *(int *)(iVar10 + 0x774) + *(int *)(iVar10 + 0x810);
            }
            for (; iVar10 < iVar17; iVar10 = iVar10 + 4) {
              iVar8 = iVar8 + *(int *)(iVar10 + 0x770) + *(int *)(iVar10 + 0x80c);
            }
          }
          iVar16 = iVar16 + 0x34;
        } while (iVar16 < 0x9c);
        dVar4 = (double)((float)(int)(iVar8 - local_98) * _DAT_5f75ddb8);
        uStack_294 = (uint)((ulonglong)dVar4 >> 0x20);
        local_298 = SUB84(dVar4,0);
        uVar20 = uStack_294 >> 0x14 & 0x7ff;
        if (uVar20 < 0x3ff) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uStack_294 << 0xb | local_298 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar20 & 0x1f);
          if ((longlong)dVar4 < 0) {
            uVar20 = -uVar20;
          }
        }
        for (; ((int)(local_98 + uVar20) < iVar8 && (7 < iVar21)); iVar21 = iVar21 + -1) {
          iVar8 = iVar8 + ((param_1[iVar21 + 0x23f] - param_1[iVar21 + 0x1db]) -
                          param_1[iVar21 + 0x202]) +
                  ((param_1[iVar21 + 0x24c] - param_1[iVar21 + 0x1e8]) - param_1[iVar21 + 0x20f]) +
                  ((param_1[iVar21 + 0x259] - param_1[iVar21 + 0x1f5]) - param_1[iVar21 + 0x21c]);
        }
        param_1[0x335] = iVar21;
        param_1[0x334] = iVar21;
        param_1[0x333] = iVar21;
      }
      piVar9 = param_1;
      do {
        iVar21 = piVar9[0x333];
        if (iVar21 < 3) {
          iVar21 = 3;
        }
        piVar9[0x333] = iVar21;
        if (param_1[0x332] < (int)local_ec) {
          piVar9[0x333] = 3;
        }
        piVar9 = piVar9 + 1;
      } while ((int)piVar9 < (int)(param_1 + 3));
      goto LAB_5f6f16e4;
    }
  }
  iVar21 = param_1[0x330];
  if (0 < iVar21) {
    iVar8 = param_1[0x332] - iVar21;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if ((iVar8 < 3) && (param_1[0x332] < **(int **)param_1[3])) {
      param_1[0x332] = iVar21;
    }
  }
  param_1[0x330] = param_1[0x332];
LAB_5f6f04af:
  param_1[0x331] = 0;
  if ((param_6 == 2) || (param_6 == 5)) {
    if ((param_6 == 2) && (_DAT_5f75ddb0 != (float)_DAT_5f75de78)) {
      pfVar22 = (float *)(param_1 + 0x27d);
      do {
        FUN_5f6d5e80((float *)&DAT_5f75ddb0,0,pfVar22,1,pfVar22,1,**(uint **)(param_1[3] + 4));
        pfVar22 = pfVar22 + 0xd;
      } while ((int)pfVar22 < (int)(param_1 + 0x2a4));
    }
  }
  else if (_DAT_5f75ddc8 != (float)_DAT_5f75de18) {
    iVar21 = param_1[0x332];
    iVar8 = *(int *)((*(int **)param_1[3])[2] + iVar21 * 4);
    if (iVar21 < **(int **)param_1[3]) {
      do {
        if (_DAT_5f75ddc8 - _DAT_5f75ddb4 <= (float)param_1[iVar21 + 0x267]) {
          iVar16 = param_1[iVar21 + 0x31a];
LAB_5f6f0569:
          if ((_DAT_5f75ddb4 + _DAT_5f75ddc8 <= (float)param_1[iVar21 + 0x267]) && (iVar16 != 0)) {
            iVar16 = 0;
            param_1[iVar21 + 0x31a] = 0;
          }
        }
        else {
          iVar16 = param_1[iVar21 + 0x31a];
          if (iVar16 != 0) goto LAB_5f6f0569;
          param_1[iVar21 + 0x31a] = 1;
          iVar16 = 1;
        }
        if (iVar16 == 0) {
          FUN_5f6d8bb0(0,param_5[1] + 8 + iVar8 * 4,0x240 - iVar8);
          if (param_1[4] == 0) {
            param_1[iVar21 + 0x267] =
                 (int)(SQRT((float)param_1[iVar21 + 0x1b] / (float)param_1[iVar21 + 5]) +
                      _DAT_5f75de70);
          }
          else if ((float)param_1[iVar21 + 5] <= (float)param_1[iVar21 + 0x1b]) {
            param_1[iVar21 + 0x267] =
                 (int)SQRT((float)param_1[iVar21 + 0x1b] / (float)param_1[iVar21 + 5]);
          }
          else {
            param_1[iVar21 + 0x267] = 0x3f800000;
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < **(int **)param_1[3]);
    }
  }
  if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6))))
  {
    iVar21 = param_1[0x332];
    piVar9 = *(int **)param_1[3];
    iVar8 = *piVar9;
    iVar16 = piVar9[1];
    iVar10 = piVar9[2];
    iVar17 = *param_5;
    iVar23 = param_5[1];
    if (iVar21 < iVar8 + 1) {
      do {
        iVar18 = *(int *)(iVar10 + iVar21 * 4);
        iVar11 = 0;
        if (0 < *(int *)(iVar16 + iVar21 * 4)) {
          iVar13 = 0;
          do {
            iVar19 = iVar13 + iVar18 * 4;
            iVar11 = iVar11 + 1;
            iVar13 = iVar13 + 4;
            *(float *)(iVar17 + 8 + iVar19) =
                 (*(float *)(iVar23 + 8 + iVar19) + *(float *)(iVar17 + 8 + iVar19)) *
                 (float)param_1[iVar21 + 0x267];
            *(undefined4 *)(iVar23 + 8 + iVar19) = 0;
          } while (iVar11 < *(int *)(iVar16 + iVar21 * 4));
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar8 + 1);
    }
    param_1[0x336] = **(int **)param_1[3] - param_1[0x332];
    *(int *)(param_2 + 0x100) = param_1[0x332];
  }
  else if (param_6 == 2) {
    iVar8 = 0;
    iVar21 = -3;
    piVar9 = param_1;
    do {
      piVar5 = *(int **)(param_1[3] + 4);
      iVar16 = *piVar5;
      iVar10 = param_5[1];
      iVar17 = param_1[iVar21 + 0x336];
      iVar23 = *param_5;
      iVar18 = piVar5[1];
      iVar11 = piVar5[2];
      if (iVar17 < iVar16 + 1) {
        do {
          iVar13 = *(int *)(iVar11 + iVar17 * 4);
          iVar19 = 0;
          if (0 < *(int *)(iVar18 + iVar17 * 4) * 3) {
            iVar12 = 0;
            do {
              iVar19 = iVar19 + 3;
              iVar2 = iVar12 + iVar13 * 0xc;
              iVar12 = iVar12 + 0xc;
              *(float *)(iVar8 + iVar23 + 8 + iVar2) =
                   (*(float *)(iVar8 + iVar10 + 8 + iVar2) + *(float *)(iVar8 + iVar23 + 8 + iVar2))
                   * (float)piVar9[iVar17 + 0x27d];
              *(undefined4 *)(iVar8 + iVar10 + 8 + iVar2) = 0;
            } while (iVar19 < *(int *)(iVar18 + iVar17 * 4) * 3);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar16 + 1);
        iVar17 = param_1[iVar21 + 0x336];
      }
      iVar8 = iVar8 + 4;
      param_1[iVar21 + 0x33a] = **(int **)(param_1[3] + 4) - iVar17;
      *(int *)(param_2 + 0x110 + iVar21 * 4) = iVar17;
      piVar9 = piVar9 + 0xd;
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0);
  }
  else if (param_6 == 5) {
    iVar21 = *param_5;
    iVar8 = *(int *)(*(int *)param_1[3] + 4);
    iVar16 = *(int *)(*(int *)param_1[3] + 8);
    iVar10 = param_1[0x332];
    iVar17 = param_5[1];
    if (iVar10 < (int)(local_ec + 1)) {
      do {
        iVar23 = *(int *)(iVar16 + iVar10 * 4);
        iVar18 = 0;
        if (0 < *(int *)(iVar8 + iVar10 * 4)) {
          iVar11 = 0;
          do {
            iVar13 = iVar11 + iVar23 * 4;
            iVar18 = iVar18 + 1;
            iVar11 = iVar11 + 4;
            *(float *)(iVar21 + 8 + iVar13) =
                 (*(float *)(iVar17 + 8 + iVar13) + *(float *)(iVar21 + 8 + iVar13)) *
                 (float)param_1[iVar10 + 0x267];
            *(undefined4 *)(iVar17 + 8 + iVar13) = 0;
          } while (iVar18 < *(int *)(iVar8 + iVar10 * 4));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(local_ec + 1));
    }
    param_1[0x336] = local_ec - param_1[0x332];
    *(int *)(param_2 + 0x100) = param_1[0x332];
    iVar8 = 0;
    iVar21 = -3;
    piVar9 = param_1;
    do {
      piVar5 = *(int **)(param_1[3] + 4);
      iVar16 = *piVar5;
      iVar10 = param_5[1];
      iVar17 = param_1[iVar21 + 0x336];
      iVar23 = *param_5;
      iVar18 = piVar5[1];
      iVar11 = piVar5[2];
      if (iVar17 < iVar16 + 1) {
        do {
          iVar13 = *(int *)(iVar11 + iVar17 * 4);
          iVar19 = 0;
          if (0 < *(int *)(iVar18 + iVar17 * 4) * 3) {
            iVar12 = 0;
            do {
              iVar19 = iVar19 + 3;
              iVar2 = iVar12 + iVar13 * 0xc;
              iVar12 = iVar12 + 0xc;
              *(float *)(iVar8 + iVar23 + 8 + iVar2) =
                   (*(float *)(iVar8 + iVar10 + 8 + iVar2) + *(float *)(iVar8 + iVar23 + 8 + iVar2))
                   * (float)piVar9[iVar17 + 0x27d];
              *(undefined4 *)(iVar8 + iVar10 + 8 + iVar2) = 0;
            } while (iVar19 < *(int *)(iVar18 + iVar17 * 4) * 3);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar16 + 1);
        iVar17 = param_1[iVar21 + 0x336];
      }
      iVar8 = iVar8 + 4;
      param_1[iVar21 + 0x33a] = **(int **)(param_1[3] + 4) - iVar17;
      *(int *)(param_2 + 0x110 + iVar21 * 4) = iVar17 + -3;
      piVar9 = piVar9 + 0xd;
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0);
  }
  if (((param_6 == 0) || (param_6 == 1)) || ((param_6 == 3 || ((param_6 == 4 || (param_6 == 6))))))
  {
    iVar21 = param_1[0x332];
    if (iVar21 < **(int **)param_1[3]) {
      do {
        *(int *)(*(int *)(*param_4 + 0x278) + iVar21 * 4) = param_1[iVar21 + 0x7f];
        *(undefined4 *)(*(int *)(param_4[1] + 0x278) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x268) + iVar21 * 4) = param_1[iVar21 + 0xf9];
        *(undefined4 *)(*(int *)(param_4[1] + 0x268) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x288) + iVar21 * 4) = param_1[iVar21 + 0xbc];
        *(undefined4 *)(*(int *)(param_4[1] + 0x288) + iVar21 * 4) = 0;
        iVar21 = iVar21 + 1;
      } while (iVar21 < **(int **)param_1[3]);
    }
  }
  else if (param_6 == 2) {
    iVar8 = 0;
    iVar21 = **(int **)(param_1[3] + 4);
    iVar16 = 0;
    do {
      iVar10 = param_1[iVar16 + 0x333];
      if (iVar10 < iVar21) {
        iVar17 = iVar8 + iVar10 * 4 + (int)param_1;
        do {
          *(undefined4 *)(*(int *)(*param_4 + 0x27c + iVar16 * 4) + iVar10 * 4) =
               *(undefined4 *)(iVar17 + 0x254);
          *(undefined4 *)(*(int *)(param_4[1] + 0x27c + iVar16 * 4) + iVar10 * 4) = 0;
          *(undefined4 *)(*(int *)(*param_4 + 0x26c + iVar16 * 4) + iVar10 * 4) =
               *(undefined4 *)(iVar17 + 0x43c);
          *(undefined4 *)(*(int *)(param_4[1] + 0x26c + iVar16 * 4) + iVar10 * 4) = 0;
          puVar1 = (undefined4 *)(iVar17 + 0x348);
          iVar17 = iVar17 + 4;
          *(undefined4 *)(*(int *)(*param_4 + 0x28c + iVar16 * 4) + iVar10 * 4) = *puVar1;
          *(undefined4 *)(*(int *)(param_4[1] + 0x28c + iVar16 * 4) + iVar10 * 4) = 0;
          iVar10 = iVar10 + 1;
          iVar21 = **(int **)(param_1[3] + 4);
        } while (iVar10 < iVar21);
      }
      iVar16 = iVar16 + 1;
      iVar8 = iVar8 + 0x34;
    } while (iVar16 < 3);
  }
  else if (param_6 == 5) {
    iVar21 = param_1[0x332];
    if (iVar21 < (int)local_ec) {
      iVar8 = (local_ec - iVar21 & 0xfffffffe) + iVar21;
      for (; iVar21 < iVar8; iVar21 = iVar21 + 2) {
        *(int *)(*(int *)(*param_4 + 0x278) + iVar21 * 4) = param_1[iVar21 + 0x7f];
        *(undefined4 *)(*(int *)(param_4[1] + 0x278) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x268) + iVar21 * 4) = param_1[iVar21 + 0xf9];
        *(undefined4 *)(*(int *)(param_4[1] + 0x268) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x288) + iVar21 * 4) = param_1[iVar21 + 0xbc];
        *(undefined4 *)(*(int *)(param_4[1] + 0x288) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x278) + 4 + iVar21 * 4) = param_1[iVar21 + 0x80];
        *(undefined4 *)(*(int *)(param_4[1] + 0x278) + 4 + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x268) + 4 + iVar21 * 4) = param_1[iVar21 + 0xfa];
        *(undefined4 *)(*(int *)(param_4[1] + 0x268) + 4 + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x288) + 4 + iVar21 * 4) = param_1[iVar21 + 0xbd];
        *(undefined4 *)(*(int *)(param_4[1] + 0x288) + 4 + iVar21 * 4) = 0;
      }
      for (; iVar21 < (int)local_ec; iVar21 = iVar21 + 1) {
        *(int *)(*(int *)(*param_4 + 0x278) + iVar21 * 4) = param_1[iVar21 + 0x7f];
        *(undefined4 *)(*(int *)(param_4[1] + 0x278) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x268) + iVar21 * 4) = param_1[iVar21 + 0xf9];
        *(undefined4 *)(*(int *)(param_4[1] + 0x268) + iVar21 * 4) = 0;
        *(int *)(*(int *)(*param_4 + 0x288) + iVar21 * 4) = param_1[iVar21 + 0xbc];
        *(undefined4 *)(*(int *)(param_4[1] + 0x288) + iVar21 * 4) = 0;
      }
    }
    iVar8 = 0;
    iVar21 = **(int **)(param_1[3] + 4);
    iVar16 = 0;
    do {
      iVar10 = param_1[iVar16 + 0x333];
      if (iVar10 < iVar21) {
        iVar17 = iVar8 + iVar10 * 4 + (int)param_1;
        do {
          *(undefined4 *)(*(int *)(*param_4 + 0x27c + iVar16 * 4) + iVar10 * 4) =
               *(undefined4 *)(iVar17 + 0x254);
          *(undefined4 *)(*(int *)(param_4[1] + 0x27c + iVar16 * 4) + iVar10 * 4) = 0;
          *(undefined4 *)(*(int *)(*param_4 + 0x26c + iVar16 * 4) + iVar10 * 4) =
               *(undefined4 *)(iVar17 + 0x43c);
          *(undefined4 *)(*(int *)(param_4[1] + 0x26c + iVar16 * 4) + iVar10 * 4) = 0;
          puVar1 = (undefined4 *)(iVar17 + 0x348);
          iVar17 = iVar17 + 4;
          *(undefined4 *)(*(int *)(*param_4 + 0x28c + iVar16 * 4) + iVar10 * 4) = *puVar1;
          *(undefined4 *)(*(int *)(param_4[1] + 0x28c + iVar16 * 4) + iVar10 * 4) = 0;
          iVar10 = iVar10 + 1;
          iVar21 = **(int **)(param_1[3] + 4);
        } while (iVar10 < iVar21);
      }
      iVar16 = iVar16 + 1;
      iVar8 = iVar8 + 0x34;
    } while (iVar16 < 3);
  }
  if ((((param_6 == 0) || (param_6 == 1)) || (param_6 == 3)) || ((param_6 == 4 || (param_6 == 6))))
  {
    if ((0 < param_1[0x336]) || (param_1[4] == 0)) {
      *(int **)(param_5[1] + 0x90c) = param_1 + 0x331;
    }
  }
  else if ((param_6 == 2) || (param_6 == 5)) {
    piVar9 = param_1;
    do {
      if ((0 < piVar9[0x337]) || (param_1[4] == 0)) {
        *(int **)(param_5[1] + 0x90c) = param_1 + 0x331;
        return 0;
      }
      piVar9 = piVar9 + 1;
    } while ((int)piVar9 < (int)(param_1 + 3));
  }
  return 0;
}


