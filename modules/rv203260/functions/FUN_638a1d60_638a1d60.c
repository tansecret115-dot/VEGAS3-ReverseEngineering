/* Module: rv203260.dll
   Function: FUN_638a1d60
   Address: 638a1d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_638a1d60(uint param_1,undefined4 param_2,uint *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *this;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint *puVar14;
  void *this_00;
  uint **ppuVar15;
  uint local_2ca8 [130];
  int aiStackY_2aa0 [2510];
  undefined1 local_368 [4];
  ulonglong local_364 [49];
  uint auStackY_1d8 [20];
  int local_188 [20];
  uint local_138 [8];
  uint local_118 [3];
  int local_10c [2];
  uint *local_104;
  uint *local_ec [8];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b4 [4];
  uint local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 uStackY_90;
  uint local_8c;
  undefined4 uStackY_88;
  undefined4 local_84;
  undefined4 uStackY_80;
  undefined4 local_7c;
  undefined4 uStackY_78;
  double local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  ulonglong *puStackY_58;
  LARGE_INTEGER local_54;
  uint local_4c;
  uint uStackY_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int iVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint *puVar25;
  int iVar26;
  
  FUN_638b2a10();
  puVar18 = *(uint **)((int)this + 0xfa);
  uVar10 = (uint)*(ushort *)((int)this + 0xf4);
  iVar26 = -0x7fffbffb;
  local_40 = 0.0;
  local_6c = 0.0;
  local_64 = 0.0;
  local_5c = 0;
  puStackY_58 = (ulonglong *)0x0;
  local_74 = 0.0;
  if (uVar10 != 0) {
    piVar24 = local_188;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *piVar24 = 0;
      piVar24 = piVar24 + 1;
    }
  }
  puVar21 = (uint *)0x638a1df2;
  QueryPerformanceFrequency(&local_54);
  if (*(int *)((int)this + 0xe0) == 0) {
    *(undefined4 *)((int)this + 0xe0) = 1;
    *(uint *)((int)this + 0xa8) = param_3[2];
    uVar10 = 0;
    *(uint *)((int)this + 0xac) = param_3[2];
    if (*(short *)((int)this + 0xf4) != 0) {
      piVar24 = (int *)((int)this + 8);
      do {
        iVar22 = *piVar24;
        uVar6 = param_3[2];
        uVar10 = uVar10 + 1;
        piVar24 = piVar24 + 1;
        *(uint *)(iVar22 + 0x11e) = uVar6;
        *(uint *)(iVar22 + 0x122) = uVar6;
        *(uint *)(iVar22 + 0x126) = uVar6;
        *(uint *)(iVar22 + 0x12a) = uVar6;
        *(uint *)(iVar22 + 0x12e) = uVar6;
      } while (uVar10 < *(ushort *)((int)this + 0xf4));
    }
  }
  bVar3 = true;
  *(undefined4 *)(param_1 + 0x18a) = 1;
  *(undefined4 *)(param_1 + 0x18e) = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  uVar10 = (uint)*(ushort *)((int)this + 0xf4);
  if (uVar10 != 0) {
    piVar24 = (int *)((int)this + 8);
    bVar3 = true;
    do {
      if (*(int *)(*piVar24 + 0x18a) == 0) {
        bVar3 = false;
      }
      piVar24 = piVar24 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (!bVar3) {
    return 0;
  }
  puVar5 = puVar18;
  if (((puVar21 != *(uint **)(*(int *)((int)this + 8) + 0xe2)) &&
      (*(short *)((int)this + 0xf4) == 1)) && (*(int *)(*(int *)((int)this + 8) + 0x2a8) != 0)) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    in_stack_ffffffd4 = param_3[1];
    in_stack_ffffffd0 = 0x638a1f0e;
    puVar5 = puVar21;
    FUN_638a56f0(this,(ulonglong *)in_stack_ffffffd4,(uint *)in_stack_ffffffd4,puVar21,(uint)puVar18
                 ,*(uint *)(*(int *)((int)this + 8) + 0xe2),(uint)puVar18,
                 *(int *)((int)this + 0x362));
    puVar21 = *(uint **)(*(int *)((int)this + 8) + 0xe2);
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_40 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)in_stack_ffffffd4 * _DAT_638b3120)
                - ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_638b3120)
                ) * _DAT_638b30f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_638b3120);
  }
  if (*(int *)((int)this + 0x1ba) != 0) {
    iVar22 = 0x638a1f90;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    puVar8 = (undefined4 *)param_3[1];
    puVar23 = *(undefined4 **)((int)this + 0x1c2);
    for (uVar10 = (uint)((int)puVar5 * iVar22) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar23 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar23 = puVar23 + 1;
    }
    for (uVar10 = (int)puVar5 * iVar22 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar23 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar23 = (undefined4 *)((int)puVar23 + 1);
    }
    puVar21 = (uint *)0x638a1fbb;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_74 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)in_stack_ffffffd4 * _DAT_638b3120)
                - ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_638b3120)
                ) * _DAT_638b30f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_638b3120);
  }
  if (*(int *)((int)this + 0x35e) != 0) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    uVar16 = *(uint *)((int)this + 0x1ba);
    in_stack_ffffffd0 = param_3[1];
    in_stack_ffffffcc = (float *)0x638a205a;
    puVar18 = puVar21;
    FUN_638b1890(in_stack_ffffffd0,uVar16,(uint)(*(int *)((int)this + 0x1be) == 0),(int)puVar21,
                 (int)puVar5,(int)puVar21,1);
    if ((*(int *)((int)this + 0x35e) == 1) || (puVar5 = puVar18, *(int *)((int)this + 0x35e) == 2))
    {
      puVar5 = (uint *)((uint)puVar18 >> 1 & 0x7ffffffc);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_6c = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_638b3120) -
                ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_638b3120))
               * _DAT_638b30f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_638b3120);
  }
  puVar18 = puVar5;
  puVar14 = param_3;
  if ((*(int *)((int)this + 0x356) != 0) && (*(int *)((int)this + 0x1ba) != 0)) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    puVar18 = (uint *)param_3[2];
    uVar16 = *(undefined4 *)(*(int *)((int)this + 8) + 0xf6);
    in_stack_ffffffc8 = param_3[1];
    in_stack_ffffffd0 = *(uint *)(*(int *)((int)this + 8) + 0xf2);
    in_stack_ffffffcc = *(undefined4 *)((int)this + 0x1ba);
    local_40 = (double)CONCAT44(0x638a215b,(undefined4)local_40);
    iVar22 = FUN_638b0000((uint *)in_stack_ffffffc8,(float *)in_stack_ffffffcc,in_stack_ffffffd0,
                          (float *)uVar16,(float *)((int)puVar5 * (int)puVar21),(uint)puVar18,
                          (float)puVar21,(uint)puVar5,(uint)(*(int *)((int)this + 0x35e) != 0),
                          (uint)(1 < *(int *)((int)this + 0x35a)));
    if (iVar22 != 0) {
      *(undefined4 *)((int)this + 0x35a) = 0x21;
      param_1 = 0;
      if (*(short *)((int)this + 0xf4) != 0) {
        puVar18 = (uint *)((int)this + 8);
        do {
          puVar14 = (uint *)*puVar18;
          puVar18 = local_b4;
          for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          local_b4[2] = param_3[2];
          puVar18 = local_b4;
          iVar26 = (*(code *)puVar14[3])();
          param_1 = param_1 + 1;
          puVar18 = puVar18 + 1;
        } while (param_1 < *(ushort *)((int)this + 0xf4));
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
      uVar16 = *(undefined4 *)((int)this + 0x1ba);
      *(undefined4 *)((int)this + 0x1ba) = *(undefined4 *)((int)this + 0x1c2);
      *(undefined4 *)((int)this + 0x1c2) = uVar16;
      *(undefined4 *)((int)this + 0x1be) = 1;
      goto LAB_638a30e0;
    }
    iVar22 = *(int *)((int)this + 0x35a);
    if (iVar22 == 0x21) {
      *(undefined4 *)((int)this + 0x35a) = 0x1a;
    }
    else if (iVar22 == 0x1a) {
      *(undefined4 *)((int)this + 0x35a) = 0x12;
    }
    else if (iVar22 == 0x12) {
      *(undefined4 *)((int)this + 0x35a) = 9;
    }
    else {
      *(uint *)((int)this + 0x35a) = (uint)(iVar22 == 9);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_64 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_638b3120) -
                ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_638b3120))
               * _DAT_638b30f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_638b3120);
  }
  if (*(int *)((int)this + 0xb0) == 0) {
    dVar1 = (double)CONCAT44(puStackY_58,local_5c);
  }
  else {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    uVar16 = 0x638a2300;
    FUN_638a55f0(this,param_3[1],(uint)puVar21,(int)puVar18,*(undefined4 *)((int)this + 0xb4),
                 *(undefined4 *)((int)this + 0xb8),*(undefined4 *)((int)this + 0xbc));
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    dVar1 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_638b3120) -
             ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_638b3120)) *
            _DAT_638b30f0) / ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_638b3120);
    puVar18 = puVar21;
  }
  if (*(int *)((int)this + 0x1ba) != 0) {
    uVar16 = *(undefined4 *)((int)this + 0x1c2);
    *(int *)((int)this + 0x1c2) = *(int *)((int)this + 0x1ba);
    *(undefined4 *)((int)this + 0x1ba) = uVar16;
    *(undefined4 *)((int)this + 0x1be) = 1;
  }
  puStackY_58 = (ulonglong *)param_3[1];
  puVar21 = (uint *)param_3[2];
  *(uint **)((int)this + *(int *)((int)this + 0x1b2) * 4 + 0x162) = puVar21;
  dVar1 = local_74 + dVar1 + local_64 + local_6c + local_40;
  puVar5 = puVar21;
  uVar16 = ftol();
  *(undefined4 *)((int)this + *(int *)((int)this + 0x1b2) * 4 + 0x112) = uVar16;
  iVar22 = *(int *)((int)this + 0x1b2) + 1;
  *(int *)((int)this + 0x1b2) = iVar22;
  if (iVar22 == 10) {
    *(undefined4 *)((int)this + 0x1b2) = 0;
  }
  FUN_638a1a00(this,(uint)puVar21);
  if (*(int *)((int)this + 0x2ce) != 0) {
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) == 0) {
      bVar3 = false;
    }
    else {
      puVar21 = (uint *)((int)this + 8);
      do {
        puVar14 = (uint *)*puVar21;
        puVar21 = local_138;
        puVar25 = local_138;
        for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
          *puVar25 = 0;
          puVar25 = puVar25 + 1;
        }
        local_138[2] = param_3[2];
        iVar26 = (*(code *)puVar14[3])();
        param_1 = param_1 + 1;
        puVar21 = puVar21 + 1;
      } while (param_1 < *(ushort *)((int)this + 0xf4));
      bVar3 = false;
    }
  }
  if (bVar3) {
    puVar21 = (uint *)0x638a248c;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) != 0) {
      puVar13 = local_364;
      local_40 = (double)CONCAT44((int)this + 0x58,(undefined4)local_40);
      do {
        uVar10 = 0;
        puVar14 = *(uint **)((int)this + *local_40._4_4_ * 4 + 8);
        if (param_3[5] != 0) {
          puVar25 = param_3 + 6;
          do {
            if (*puVar25 == 0) {
              return iVar26;
            }
            uVar10 = uVar10 + 1;
            puVar25 = puVar25 + 2;
          } while (uVar10 < param_3[5]);
        }
        if ((puVar14[6] != 0) && (puVar14[7] != 0)) {
          puVar25 = (uint *)((int)puVar13 + -4);
          puVar17 = puVar5;
          puVar19 = puVar13;
          *puVar25 = 0;
          *(uint *)puVar13 = 0;
          *(uint *)((int)puVar13 + 4) = 0;
          *(uint *)(puVar13 + 1) = 0;
          *(uint *)((int)puVar13 + 0xc) = 0;
          uVar10 = (int)puVar5 - *(int *)((int)this + 0x35a);
          *(uint *)((int)puVar13 + 0xc) = 0;
          *(uint *)puVar13 = uVar10;
          if ((uVar10 != *(uint *)((int)puVar14 + 0x122)) &&
             ((((*(int *)((int)this + 0xfe) == 0 && (*(int *)((int)puVar14 + 0xea) == 0)) &&
               (*(double *)((int)puVar14 + 0x1a6) != *(double *)((int)puVar14 + 0xf2))) &&
              (*(int *)((int)puVar14 + 0xee) != 4)))) {
            puVar25 = (uint *)0x638a257d;
            uVar6 = ftol();
            if (uVar10 < *(uint *)((int)puVar14 + 0x122)) {
              uVar11 = (uVar10 - *(int *)((int)puVar14 + 0x122)) - 1;
            }
            else {
              uVar11 = uVar10 - *(int *)((int)puVar14 + 0x122);
            }
            if ((uVar11 < uVar6) || (*(uint *)((int)puVar14 + 0x1ce) <= uVar6)) {
              local_7c = *(undefined4 *)((int)puVar14 + 0x122);
              uStackY_78 = 0;
              puVar25 = (uint *)0x638a25c0;
              uVar6 = ftol();
              *(uint *)puVar19 = uVar6;
              if (uVar6 < uVar10) {
                uVar12 = (uVar6 - (int)puVar17) - *(int *)((int)this + 0x35a);
                uVar11 = uVar12 - 1;
              }
              else {
                uVar11 = (uVar6 - (int)puVar17) - *(int *)((int)this + 0x35a);
                uVar12 = uVar11;
              }
              if (2 < uVar11) {
                if (uVar10 < uVar6) {
                  uVar11 = uVar10 - uVar6;
                  uVar7 = uVar11 - 1;
                }
                else {
                  uVar7 = uVar10 - uVar6;
                  uVar11 = uVar7;
                }
                if (2 < uVar7) {
                  local_94 = uVar12;
                  if (uVar6 < uVar10) {
                    local_94 = uVar12 - 1;
                  }
                  dVar2 = _DAT_638b3128 / *(double *)((int)puVar14 + 0xf2);
                  uStackY_90 = 0;
                  if ((double)local_94 <= dVar2) {
LAB_638a2663:
                    local_8c = uVar11;
                    if (uVar10 < uVar6) {
                      local_8c = uVar11 - 1;
                    }
                    uStackY_88 = 0;
                    if (dVar2 < (double)local_8c) {
                      if (uVar10 < uVar6) {
                        uVar11 = uVar11 - 1;
                      }
                      if (uVar11 < 86400000) goto LAB_638a26a4;
                    }
                  }
                  else {
                    if (uVar6 < uVar10) {
                      uVar12 = uVar12 - 1;
                    }
                    if (86399999 < uVar12) goto LAB_638a2663;
LAB_638a26a4:
                    puVar25 = (uint *)0x638a26a9;
                    iVar26 = ftol();
                    *(int *)puVar19 = (int)puVar17 + (-*(int *)((int)this + 0x35a) - iVar26);
                  }
                  goto LAB_638a26c6;
                }
              }
              *(uint *)puVar19 = uVar10;
            }
          }
LAB_638a26c6:
          iVar26 = *(int *)((int)puVar14 + 0x209);
          if (iVar26 == -1) {
            *(uint **)((int)puVar14 + 0xe2) = puVar21;
            *(uint **)((int)puVar14 + 0xe6) = puVar18;
          }
          else {
            *(undefined4 *)((int)puVar14 + 0xe2) = *(undefined4 *)((int)this + iVar26 * 4 + 0x2d6);
            *(undefined4 *)((int)puVar14 + 0xe6) = *(undefined4 *)((int)this + iVar26 * 4 + 0x2f6);
          }
          uVar10 = *(uint *)((int)puVar14 + 0xe2);
          *(uint *)((int)puVar19 + 4) = uVar10;
          uVar6 = *(uint *)((int)puVar14 + 0xe6);
          *(uint *)(puVar19 + 1) = uVar6;
          *puVar25 = uVar10 * uVar6 * 3 >> 1;
          if (((param_1 == 0) || (*(int *)((int)puVar14 + 0xee) != 4)) &&
             (puVar21 = puVar14, iVar26 = FUN_638a3130(this,(int)puVar14,(int)puVar25,(int)param_3),
             iVar26 != 0)) {
            for (iVar26 = 0x84; iVar26 != 0; iVar26 = iVar26 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            uVar10 = (**(code **)(*(int *)puVar14[4] + 0xc))();
            local_64 = (double)CONCAT44(param_1 * 4,(undefined4)local_64);
            auStackY_1d8[param_1] = uVar10;
            if (uVar10 != 0) {
              if ((*(int *)((int)puVar14 + 0xea) == 2) || (*(int *)((int)puVar14 + 0xea) == 3)) {
                local_84 = *(undefined4 *)((int)puVar14 + 0xfa);
                local_4c = *(int *)((int)this + 0xac) - *(int *)((int)puVar14 + 0x122);
                uStackY_80 = 0;
                uStackY_48 = 0;
                puVar21 = (uint *)0x1;
                puVar23 = (undefined4 *)ftol();
                puVar8 = (undefined4 *)FUN_638a1d40();
                iVar26 = FUN_638a1d40();
              }
              else {
                bVar4 = ftol();
                if ((bVar4 < 4) || (*(int *)((int)puVar14 + 0xee) == 4)) {
                  puVar8 = &local_c0;
                  local_bc = 1;
                  local_c0 = 0x27;
                }
                else {
                  puVar8 = &local_cc;
                  local_c8 = 0;
                  local_cc = 0x27;
                }
                FUN_638a8890((void *)((int)puVar14 + 0x32),puVar8);
                puVar21 = (uint *)0x0;
                puVar23 = (undefined4 *)0x0;
                puVar8 = (undefined4 *)FUN_638a1d40();
                iVar26 = FUN_638a1d40();
              }
              this_00 = (void *)((int)puVar14 + 0x32);
              uVar6 = FUN_638a1d40();
              puVar5 = (uint *)0x638a28eb;
              FUN_638a8900(this_00,(char)uVar6,(char)iVar26,(char)puVar8,puVar23,(char)puVar21);
              if (((0 < *(int *)((int)puVar14 + 0x215)) && (*(int *)((int)puVar14 + 0x239) == 0)) &&
                 (iVar22 = *(int *)((int)puVar14 + 0x215) + -1,
                 *(int *)((int)puVar14 + 0x215) = iVar22,
                 *(int *)((int)puVar14 + iVar22 * 4 + 0x219) == 1)) {
                puVar21 = local_118;
                local_118[0] = 0x22;
                puVar23 = (undefined4 *)0x638a2928;
                FUN_638a8890(this_00,puVar21);
              }
              if (*(int *)((int)puVar14 + 0x22d) != 0) {
                local_a0 = *(undefined4 *)((int)puVar14 + 0x229);
                local_9c = *(int *)((int)puVar14 + 0xe2) + 0xfU >> 4;
                puVar21 = &local_a4;
                local_a4 = 0x28;
                local_98 = *(int *)((int)puVar14 + 0xe6) + 0xfU >> 4;
                puVar23 = (undefined4 *)0x638a297a;
                FUN_638a8890(this_00,puVar21);
              }
              iVar22 = *(int *)((int)puVar14 + 0x209);
              puVar13 = puStackY_58;
              if (iVar22 != -1) {
                puVar9 = *(undefined4 **)(iVar26 + 4);
                local_6c = (double)CONCAT44(puVar9,(undefined4)local_6c);
                if ((puVar23 != puVar9) || (uVar6 != *(uint *)(iVar26 + 8))) {
                  if (*(int *)((int)this + iVar22 * 4 + 0x336) == 0) {
                    puVar21 = *(uint **)((int)this + 0x362);
                    puVar5 = *(uint **)((int)this + iVar22 * 4 + 0x316);
                    FUN_638a56f0(this,puStackY_58,puVar5,*(uint **)(iVar26 + 8),uVar6,(uint)puVar9,
                                 (uint)*(uint **)(iVar26 + 8),(int)puVar21);
                    *(undefined4 *)((int)this + *(int *)((int)puVar14 + 0x209) * 4 + 0x336) = 1;
                    puVar8 = puVar9;
                  }
                  puVar13 = *(ulonglong **)((int)this + *(int *)((int)puVar14 + 0x209) * 4 + 0x316);
                }
              }
              puVar18 = (uint *)0x638a2a20;
              iVar26 = FUN_638a8760(this_00,(uint)puVar13,uVar10,puVar21,puVar8);
              if (iVar26 == 0) {
                *(undefined4 *)((int)local_188 + local_64._4_4_) = 1;
              }
              goto LAB_638a2a81;
            }
            ppuVar15 = local_ec;
            local_ec[2] = puVar17;
            for (iVar26 = 8; puVar5 = local_ec[2], iVar26 != 0; iVar26 = iVar26 + -1) {
              *ppuVar15 = (uint *)0x0;
              ppuVar15 = ppuVar15 + 1;
            }
          }
          else {
            local_104 = puVar17;
            piVar24 = local_10c;
            for (iVar26 = 8; puVar5 = local_104, iVar26 != 0; iVar26 = iVar26 + -1) {
              *piVar24 = 0;
              piVar24 = piVar24 + 1;
            }
          }
          puVar13 = (ulonglong *)0x638a2a7e;
          puVar21 = puVar14;
          iVar26 = (*(code *)puVar14[3])();
        }
LAB_638a2a81:
        param_1 = param_1 + 1;
        puVar13 = (ulonglong *)((int)puVar13 + 0x14);
        local_40 = (double)CONCAT44((int)local_40._4_4_ + 4,(undefined4)local_40);
      } while (param_1 < *(ushort *)((int)this + 0xf4));
    }
    thunk_FUN_638a8550();
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_4c = local_54.s.LowPart;
    uStackY_48 = 0;
    uVar16 = ftol();
    *(undefined4 *)((int)this + *(int *)((int)this + 0x1b6) * 4 + 0x13a) = uVar16;
    *(uint **)((int)this + *(int *)((int)this + 0x1b6) * 4 + 0x18a) = puVar5;
    iVar22 = *(int *)((int)this + 0x1b6) + 1;
    *(int *)((int)this + 0x1b6) = iVar22;
    if (iVar22 == 10) {
      *(undefined4 *)((int)this + 0x1b6) = 0;
    }
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) != 0) {
      do {
        if (local_188[param_1] == 1) {
          puVar21 = (uint *)auStackY_1d8[param_1];
          iVar26 = 0;
          puVar14 = *(uint **)((int)this + *(int *)((int)this + param_1 * 4 + 0x58) * 4 + 8);
          puVar20 = local_368 + param_1 * 0x14;
          puVar18 = local_2ca8 + param_1 * 0x84;
          if (*(int *)((int)puVar14 + 0x10a) == 1) {
            aiStackY_2aa0[param_1 * 0x84 + 1] = *(int *)((int)local_364 + param_1 * 0x14);
          }
          *(double *)((int)this + 0x102) = dVar1;
          puVar25 = puVar18;
          if ((*(int *)((int)puVar14 + 0xee) == 4) && (param_1 == 0)) {
            puVar21 = (uint *)ftol();
            puVar25 = (uint *)ftol();
            puVar20 = (undefined1 *)*puVar18;
            puVar5 = (uint *)0x638a2c23;
            FUN_638ad210(this,aiStackY_2aa0[1],(char)aiStackY_2aa0[0]);
            if (1 < *(ushort *)((int)this + 0xf4)) {
              iVar26 = -0x7fffbffb;
            }
          }
          if ((((iVar26 == 0) && (*(int *)((int)puVar14 + 0x211) != 0)) &&
              (aiStackY_2aa0[param_1 * 0x84] == 2)) && (*(int *)((int)puVar14 + 0x239) == 0)) {
            iVar26 = -0x7fffbffb;
          }
          if (*(int *)((int)this + 0xfe) == 1) {
            if (iVar26 == 0) {
              if (*(int *)((int)puVar14 + 0x239) == 0) {
                puVar20 = (undefined1 *)0x638a2c84;
                puVar25 = puVar14;
                puVar21 = puVar18;
                iVar26 = FUN_638a3390((int)puVar14,(int *)puVar18);
              }
              goto LAB_638a2c87;
            }
          }
          else {
LAB_638a2c87:
            if (iVar26 == 0) {
              *(undefined4 *)((int)puVar14 + 0x11e) = *(undefined4 *)((int)puVar14 + 0x122);
              *(undefined4 *)((int)puVar14 + 0x122) = *(undefined4 *)(puVar20 + 4);
              *(undefined4 *)((int)puVar14 + *(int *)((int)puVar14 + 0x17a) * 4 + 0x152) =
                   *(undefined4 *)(puVar20 + 4);
              iVar26 = *(int *)((int)puVar14 + 0x17a) + 1;
              *(int *)((int)puVar14 + 0x17a) = iVar26;
              if (iVar26 == 10) {
                *(undefined4 *)((int)puVar14 + 0x17a) = 0;
              }
              local_40 = (double)CONCAT44(*puVar18,(undefined4)local_40);
              if (*puVar18 != 0) {
                if ((*(int *)((int)puVar14 + 0x25f) != 0) && (*(int *)((int)puVar14 + 0x25b) != 0))
                {
                  FUN_638a5130((int)puVar14,(byte *)puVar21,puVar18);
                  puVar25 = puVar21;
                }
                if (*(int *)((int)puVar14 + 0xee) == 4) {
                  iVar22 = 0x638a2d1c;
                  (**(code **)(*(int *)puVar14[4] + 0x1c))();
                  uVar16 = *(undefined4 *)((int)puVar14 + 0x12a);
                  piVar24 = local_10c;
                  for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
                    *piVar24 = 0;
                    piVar24 = piVar24 + 1;
                  }
                  local_104 = *(uint **)(iVar22 + 0x20c);
                  *(undefined4 *)((int)puVar14 + 0x12e) = uVar16;
                  piVar24 = local_10c;
                  *(undefined4 *)((int)puVar14 + 0x12a) = *(undefined4 *)(iVar22 + 0x20c);
                  puVar18 = puVar14;
                  iVar26 = (*(code *)puVar14[3])();
                }
                else {
                  uVar10 = puVar25[0x81] * 8 + 0x20;
                  puVar8 = (undefined4 *)0x638a2d7f;
                  puVar23 = operator_new(uVar10);
                  uVar16 = *puVar8;
                  puVar23[1] = uVar10;
                  *puVar23 = uVar16;
                  if (puVar8[0x82] == 2) {
                    puVar23[2] = *(int *)((int)puVar14 + 0x12a) + 1;
                  }
                  else {
                    puVar23[2] = puVar8[0x83];
                  }
                  *(undefined4 *)((int)puVar14 + 0x12e) = *(undefined4 *)((int)puVar14 + 0x12a);
                  *(undefined4 *)((int)puVar14 + 0x12a) = puVar23[2];
                  *(short *)(puVar23 + 3) = (short)puVar14[0xb];
                  *(short *)(puVar14 + 0xb) = (short)puVar14[0xb] + 1;
                  *(ushort *)((int)puVar23 + 0xe) = (-(ushort)(puVar8[0x82] != 1) & 0xfffe) + 2;
                  puVar23[4] = param_3[4];
                  iVar26 = puVar8[0x81];
                  puVar23[5] = iVar26 + 1;
                  if (puVar8[0x81] == 0) {
                    uVar16 = puVar8[1];
                    puVar23[6] = 1;
                    puVar23[7] = uVar16;
                  }
                  else {
                    puStackY_58 = (ulonglong *)0x0;
                    if (iVar26 + 1 != 0) {
                      puVar9 = puVar23 + 6;
                      do {
                        puVar8 = puVar8 + 1;
                        puVar9[1] = *puVar8;
                        *puVar9 = 1;
                        puStackY_58 = (ulonglong *)((int)puStackY_58 + 1);
                        puVar9 = puVar9 + 2;
                      } while (puStackY_58 < (ulonglong *)puVar23[5]);
                    }
                  }
                  puVar18 = (uint *)puVar14[2];
                  iVar26 = (*(code *)puVar14[3])();
                  piVar24 = (int *)0x638a2e59;
                  operator_delete(puVar23);
                }
                *(int *)((int)puVar14 + 0x196) = *piVar24 << 3;
                iVar22 = piVar24[0x81] + 1;
                *(int *)((int)puVar14 + 0x19a) = iVar22;
                if (iVar22 == 1) {
                  *(int *)((int)puVar14 + 0x192) =
                       *(int *)((int)puVar14 + 0x192) + (int)local_40._4_4_ * 8 + 0x40;
                }
                else {
                  *(int *)((int)puVar14 + 0x192) =
                       *(int *)((int)puVar14 + 0x192) + ((int)local_40._4_4_ + iVar22 * 0xb) * 8;
                }
                if (piVar24[0x82] == 2) {
                  *(undefined4 *)((int)puVar14 + 0x18e) = 3;
                }
                else if (piVar24[0x82] == 0) {
                  *(undefined4 *)((int)puVar14 + 0x18e) = 2;
                }
                else {
                  *(undefined4 *)((int)puVar14 + 0x18e) = 1;
                  *(undefined4 *)((int)puVar14 + 0x116) = *(undefined4 *)((int)puVar14 + 0x112);
                  uVar10 = puVar18[1];
                  *(undefined4 *)((int)puVar14 + 0x132) = 1;
                  *(uint *)((int)puVar14 + 0x112) = uVar10;
                }
                if ((*(int *)((int)puVar14 + 0xea) == 0) && (piVar24[0x82] == 1)) {
                  local_64 = (double)CONCAT44(*(int *)((int)puVar14 + 0x112) -
                                              *(int *)((int)puVar14 + 0x116),(undefined4)local_64);
                  uVar10 = ftol();
                  if ((int)uVar10 < 2) {
                    *(undefined4 *)((int)puVar14 + 0x13e) = 100;
                  }
                  else {
                    *(uint *)((int)puVar14 + 0x13e) =
                         (uint)(*(int *)((int)puVar14 + 0x11a) * 100) / uVar10;
                  }
                  if (100 < *(uint *)((int)puVar14 + 0x13e)) {
                    *(undefined4 *)((int)puVar14 + 0x13e) = 100;
                  }
                  *(undefined4 *)((int)puVar14 + 0x11a) = 0;
                }
                if (((iVar26 == 0) && (*(int *)((int)puVar14 + 0xd2) != 0)) && (piVar24[0x82] != 2))
                {
                  iVar22 = (**(code **)(**(int **)((int)puVar14 + 0xce) + 0xc))();
                  local_40 = (double)CONCAT44(iVar22,(undefined4)local_40);
                  if (iVar22 != 0) {
                    uVar10 = *(uint *)((int)this + 0xf6);
                    if ((uint)*(ushort *)((int)puVar14 + 0x9e) <= *(uint *)((int)this + 0xf6)) {
                      uVar10 = (uint)*(ushort *)((int)puVar14 + 0x9e);
                    }
                    puStackY_58 = (ulonglong *)(uint)(ushort)puVar14[0x28];
                    if (*(ulonglong **)((int)this + 0xfa) < (ulonglong *)(uint)(ushort)puVar14[0x28]
                       ) {
                      puStackY_58 = *(ulonglong **)((int)this + 0xfa);
                    }
                    if ((uVar10 == puVar18[2]) && (puStackY_58 == (ulonglong *)puVar18[3])) {
                      iVar26 = FUN_638a8f00((int)puVar14);
                      puVar21 = puVar18;
                    }
                    else {
                      puVar21 = *(uint **)((int)this + 0x1c2);
                      iVar26 = FUN_638a8f00((int)puVar14);
                      puVar5 = local_40._4_4_;
                      FUN_638a56f0(this,*(ulonglong **)((int)this + 0x1c2),local_40._4_4_,
                                   (uint *)puVar18[2],puVar18[3],(uint)puVar21,(uint)puStackY_58,0);
                    }
                    if (iVar26 == 0) {
                      local_4c = (uint)local_40._4_4_;
                      uStackY_48 = puVar21[1];
                      local_44 = 0;
                      (**(code **)((int)puVar14 + 0xd2))();
                    }
                  }
                }
                goto LAB_638a30b3;
              }
            }
          }
          (**(code **)(*(int *)puVar14[4] + 0x1c))();
          ppuVar15 = local_ec;
          local_ec[2] = puVar5;
          for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
            *ppuVar15 = (uint *)0x0;
            ppuVar15 = ppuVar15 + 1;
          }
          puVar5 = local_ec[2];
          iVar26 = (*(code *)puVar14[3])();
        }
LAB_638a30b3:
        param_1 = param_1 + 1;
      } while (param_1 < *(ushort *)((int)this + 0xf4));
    }
  }
  FUN_638a3540((int)this);
  FUN_638a4e60((int)this);
  FUN_638a5050((int)this);
LAB_638a30e0:
  uVar10 = 0;
  if (*(short *)((int)this + 0xf4) != 0) {
    piVar24 = (int *)((int)this + 8);
    do {
      iVar22 = *piVar24;
      uVar10 = uVar10 + 1;
      piVar24 = piVar24 + 1;
      *(undefined4 *)(iVar22 + 0x18a) = 0;
    } while (uVar10 < *(ushort *)((int)this + 0xf4));
  }
  if ((int *)puVar14[5] != (int *)0x0) {
    (**(code **)(*(int *)puVar14[5] + 0x1c))();
  }
  return iVar26;
}


