/* Module: rv303260.dll
   Function: FUN_67201bb0
   Address: 67201bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_67201bb0(uint param_1,undefined4 param_2,uint *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined2 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *this;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  void *this_00;
  uint **ppuVar15;
  uint local_54a8 [258];
  undefined1 *puStackY_50a0;
  undefined4 uStackY_509c;
  undefined1 local_368 [4];
  uint local_364 [99];
  int aiStackY_1d8 [20];
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
  undefined8 local_74;
  double local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  ulonglong *puStackY_58;
  LARGE_INTEGER local_54;
  undefined8 local_4c;
  uint local_44;
  undefined4 uStackY_40;
  uint local_3c;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  ulonglong *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  int *piVar25;
  uint *puVar26;
  int iVar27;
  
  FUN_67211f80();
  puVar18 = *(uint **)((int)this + 0xfa);
  uVar11 = (uint)*(ushort *)((int)this + 0xf4);
  iVar27 = -0x7fffbffb;
  local_64 = 0.0;
  local_4c = 0.0;
  local_74 = 0.0;
  local_5c = 0;
  puStackY_58 = (ulonglong *)0x0;
  local_6c = 0.0;
  if (uVar11 != 0) {
    piVar25 = local_188;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *piVar25 = 0;
      piVar25 = piVar25 + 1;
    }
  }
  puVar23 = (uint *)0x67201c42;
  QueryPerformanceFrequency(&local_54);
  if (*(int *)((int)this + 0xe0) == 0) {
    *(undefined4 *)((int)this + 0xe0) = 1;
    *(uint *)((int)this + 0xa8) = param_3[2];
    uVar11 = 0;
    *(uint *)((int)this + 0xac) = param_3[2];
    if (*(short *)((int)this + 0xf4) != 0) {
      piVar25 = (int *)((int)this + 8);
      do {
        iVar24 = *piVar25;
        uVar6 = param_3[2];
        uVar11 = uVar11 + 1;
        piVar25 = piVar25 + 1;
        *(uint *)(iVar24 + 0x11a) = uVar6;
        *(uint *)(iVar24 + 0x11e) = uVar6;
        *(uint *)(iVar24 + 0x122) = uVar6;
        *(uint *)(iVar24 + 0x126) = uVar6;
        *(uint *)(iVar24 + 0x12a) = uVar6;
      } while (uVar11 < *(ushort *)((int)this + 0xf4));
    }
  }
  bVar3 = true;
  *(undefined4 *)(param_1 + 0x182) = 1;
  *(undefined4 *)(param_1 + 0x186) = 0;
  *(undefined4 *)(param_1 + 0x18e) = 0;
  uVar11 = (uint)*(ushort *)((int)this + 0xf4);
  if (uVar11 != 0) {
    piVar25 = (int *)((int)this + 8);
    bVar3 = true;
    do {
      if (*(int *)(*piVar25 + 0x182) == 0) {
        bVar3 = false;
      }
      piVar25 = piVar25 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (!bVar3) {
    return 0;
  }
  puVar5 = puVar18;
  if ((puVar23 != *(uint **)(*(int *)((int)this + 8) + 0xe2)) && (*(short *)((int)this + 0xf4) == 1)
     ) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    in_stack_ffffffd4 = param_3[1];
    in_stack_ffffffd0 = 0x67201d50;
    puVar5 = puVar23;
    FUN_67205ac0(this,(ulonglong *)in_stack_ffffffd4,(uint *)in_stack_ffffffd4,puVar23,(uint)puVar18
                 ,*(uint *)(*(int *)((int)this + 8) + 0xe2),(uint)puVar18,
                 *(int *)((int)this + 0x36a));
    puVar23 = *(uint **)(*(int *)((int)this + 8) + 0xe2);
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_64 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)in_stack_ffffffd4 * _DAT_67213128)
                - ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_67213128)
                ) * _DAT_672130f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_67213128);
  }
  if (*(int *)((int)this + 0x1c2) != 0) {
    iVar24 = 0x67201dd2;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    puVar19 = (undefined4 *)param_3[1];
    puVar9 = *(undefined4 **)((int)this + 0x1ca);
    for (uVar11 = (uint)((int)puVar5 * iVar24) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar11 = (int)puVar5 * iVar24 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar19;
      puVar19 = (undefined4 *)((int)puVar19 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar23 = (uint *)0x67201dfd;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_6c = ((((double)(uint)in_stack_ffffffd0 - (double)(int)in_stack_ffffffd4 * _DAT_67213128)
                - ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_67213128)
                ) * _DAT_672130f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_67213128);
  }
  if (*(int *)((int)this + 0x366) != 0) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    uVar16 = *(uint *)((int)this + 0x1c2);
    in_stack_ffffffd0 = param_3[1];
    in_stack_ffffffcc = (float *)0x67201e9c;
    puVar18 = puVar23;
    FUN_67210e00(in_stack_ffffffd0,uVar16,(uint)(*(int *)((int)this + 0x1c6) == 0),(int)puVar23,
                 (int)puVar5,(int)puVar23,1);
    if ((*(int *)((int)this + 0x366) == 1) || (puVar5 = puVar18, *(int *)((int)this + 0x366) == 2))
    {
      puVar5 = (uint *)((uint)puVar18 >> 1 & 0x7ffffffc);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_4c = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_67213128) -
                ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_67213128))
               * _DAT_672130f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_67213128);
  }
  puVar18 = puVar5;
  puVar14 = param_3;
  if ((*(int *)((int)this + 0x35e) != 0) && (*(int *)((int)this + 0x1c2) != 0)) {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    puVar18 = (uint *)param_3[2];
    uVar16 = *(undefined4 *)(*(int *)((int)this + 8) + 0xf6);
    in_stack_ffffffc8 = param_3[1];
    in_stack_ffffffd0 = *(uint *)(*(int *)((int)this + 8) + 0xf2);
    in_stack_ffffffcc = *(undefined4 *)((int)this + 0x1c2);
    local_3c = 0x67201f9d;
    iVar24 = FUN_6720f570((uint *)in_stack_ffffffc8,(float *)in_stack_ffffffcc,in_stack_ffffffd0,
                          (float *)uVar16,(float *)((int)puVar5 * (int)puVar23),(uint)puVar18,
                          (float)puVar23,(uint)puVar5,(uint)(*(int *)((int)this + 0x366) != 0),
                          (uint)(1 < *(int *)((int)this + 0x362)));
    if (iVar24 != 0) {
      *(undefined4 *)((int)this + 0x362) = 0x21;
      param_1 = 0;
      if (*(short *)((int)this + 0xf4) != 0) {
        puVar18 = (uint *)((int)this + 8);
        do {
          puVar14 = (uint *)*puVar18;
          puVar18 = local_b4;
          for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          local_b4[2] = param_3[2];
          puVar18 = local_b4;
          iVar27 = (*(code *)puVar14[3])();
          param_1 = param_1 + 1;
          puVar18 = puVar18 + 1;
        } while (param_1 < *(ushort *)((int)this + 0xf4));
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
      uVar16 = *(undefined4 *)((int)this + 0x1c2);
      *(undefined4 *)((int)this + 0x1c2) = *(undefined4 *)((int)this + 0x1ca);
      *(undefined4 *)((int)this + 0x1ca) = uVar16;
      *(undefined4 *)((int)this + 0x1c6) = 1;
      goto LAB_67202e3a;
    }
    iVar24 = *(int *)((int)this + 0x362);
    if (iVar24 == 0x21) {
      *(undefined4 *)((int)this + 0x362) = 0x1a;
    }
    else if (iVar24 == 0x1a) {
      *(undefined4 *)((int)this + 0x362) = 0x12;
    }
    else if (iVar24 == 0x12) {
      *(undefined4 *)((int)this + 0x362) = 9;
    }
    else {
      *(uint *)((int)this + 0x362) = (uint)(iVar24 == 9);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_74 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_67213128) -
                ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_67213128))
               * _DAT_672130f0) /
               ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_67213128);
  }
  if (*(int *)((int)this + 0xb0) == 0) {
    dVar1 = (double)CONCAT44(puStackY_58,local_5c);
  }
  else {
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    uVar16 = 0x67202142;
    FUN_672059c0(this,param_3[1],(uint)puVar23,(int)puVar18,*(undefined4 *)((int)this + 0xb4),
                 *(undefined4 *)((int)this + 0xb8),*(undefined4 *)((int)this + 0xbc));
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    dVar1 = ((((double)(uint)in_stack_ffffffd0 - (double)(int)uVar16 * _DAT_67213128) -
             ((double)(uint)in_stack_ffffffc8 - (double)(int)in_stack_ffffffcc * _DAT_67213128)) *
            _DAT_672130f0) / ((double)local_54._0_4_ - (double)local_54.s.HighPart * _DAT_67213128);
    puVar18 = puVar23;
  }
  if (*(int *)((int)this + 0x1c2) != 0) {
    uVar16 = *(undefined4 *)((int)this + 0x1ca);
    *(int *)((int)this + 0x1ca) = *(int *)((int)this + 0x1c2);
    *(undefined4 *)((int)this + 0x1c2) = uVar16;
    *(undefined4 *)((int)this + 0x1c6) = 1;
  }
  puStackY_58 = (ulonglong *)param_3[1];
  puVar23 = (uint *)param_3[2];
  *(uint **)((int)this + *(int *)((int)this + 0x1ba) * 4 + 0x16a) = puVar23;
  dVar1 = local_6c + dVar1 + local_74 + local_4c + local_64;
  puVar5 = puVar23;
  uVar16 = ftol();
  *(undefined4 *)((int)this + *(int *)((int)this + 0x1ba) * 4 + 0x11a) = uVar16;
  iVar24 = *(int *)((int)this + 0x1ba) + 1;
  *(int *)((int)this + 0x1ba) = iVar24;
  if (iVar24 == 10) {
    *(undefined4 *)((int)this + 0x1ba) = 0;
  }
  FUN_67201850(this,(uint)puVar23);
  if (*(int *)((int)this + 0x2d6) != 0) {
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) == 0) {
      bVar3 = false;
    }
    else {
      puVar23 = (uint *)((int)this + 8);
      do {
        puVar14 = (uint *)*puVar23;
        puVar23 = local_138;
        puVar8 = local_138;
        for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        local_138[2] = param_3[2];
        iVar27 = (*(code *)puVar14[3])();
        param_1 = param_1 + 1;
        puVar23 = puVar23 + 1;
      } while (param_1 < *(ushort *)((int)this + 0xf4));
      bVar3 = false;
    }
  }
  if (bVar3) {
    puVar23 = (uint *)0x672022ce;
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffc8);
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) != 0) {
      puVar8 = local_364;
      local_64 = (double)CONCAT44((int)this + 0x58,(undefined4)local_64);
      do {
        uVar11 = 0;
        puVar14 = *(uint **)((int)this + *local_64._4_4_ * 4 + 8);
        if (param_3[5] != 0) {
          puVar26 = param_3 + 6;
          do {
            if (*puVar26 == 0) {
              return iVar27;
            }
            uVar11 = uVar11 + 1;
            puVar26 = puVar26 + 2;
          } while (uVar11 < param_3[5]);
        }
        if ((puVar14[6] != 0) && (puVar14[7] != 0)) {
          puVar26 = puVar8 + -1;
          puVar17 = puVar5;
          puVar22 = puVar8;
          *puVar26 = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          uVar11 = (int)puVar5 - *(int *)((int)this + 0x362);
          puVar8[3] = 0;
          *puVar8 = uVar11;
          if ((uVar11 != *(uint *)((int)puVar14 + 0x11e)) &&
             ((((*(int *)((int)this + 0xfe) == 0 && (*(int *)((int)puVar14 + 0xea) == 0)) &&
               (*(double *)((int)puVar14 + 0x19e) != *(double *)((int)puVar14 + 0xf2))) &&
              (*(int *)((int)puVar14 + 0xee) != 4)))) {
            puVar26 = (uint *)0x672023bf;
            uVar6 = ftol();
            if (uVar11 < *(uint *)((int)puVar14 + 0x11e)) {
              uVar12 = (uVar11 - *(int *)((int)puVar14 + 0x11e)) - 1;
            }
            else {
              uVar12 = uVar11 - *(int *)((int)puVar14 + 0x11e);
            }
            if ((uVar12 < uVar6) || (*(uint *)((int)puVar14 + 0x1c6) <= uVar6)) {
              local_7c = *(undefined4 *)((int)puVar14 + 0x11e);
              uStackY_78 = 0;
              puVar26 = (uint *)0x67202402;
              uVar6 = ftol();
              *puVar22 = uVar6;
              if (uVar6 < uVar11) {
                uVar13 = (uVar6 - (int)puVar17) - *(int *)((int)this + 0x362);
                uVar12 = uVar13 - 1;
              }
              else {
                uVar12 = (uVar6 - (int)puVar17) - *(int *)((int)this + 0x362);
                uVar13 = uVar12;
              }
              if (2 < uVar12) {
                if (uVar11 < uVar6) {
                  uVar12 = uVar11 - uVar6;
                  uVar7 = uVar12 - 1;
                }
                else {
                  uVar7 = uVar11 - uVar6;
                  uVar12 = uVar7;
                }
                if (2 < uVar7) {
                  local_94 = uVar13;
                  if (uVar6 < uVar11) {
                    local_94 = uVar13 - 1;
                  }
                  dVar2 = _DAT_67213130 / *(double *)((int)puVar14 + 0xf2);
                  uStackY_90 = 0;
                  if ((double)local_94 <= dVar2) {
LAB_672024a5:
                    local_8c = uVar12;
                    if (uVar11 < uVar6) {
                      local_8c = uVar12 - 1;
                    }
                    uStackY_88 = 0;
                    if (dVar2 < (double)local_8c) {
                      if (uVar11 < uVar6) {
                        uVar12 = uVar12 - 1;
                      }
                      if (uVar12 < 86400000) goto LAB_672024e6;
                    }
                  }
                  else {
                    if (uVar6 < uVar11) {
                      uVar13 = uVar13 - 1;
                    }
                    if (86399999 < uVar13) goto LAB_672024a5;
LAB_672024e6:
                    puVar26 = (uint *)0x672024eb;
                    iVar27 = ftol();
                    *puVar22 = (int)puVar17 + (-*(int *)((int)this + 0x362) - iVar27);
                  }
                  goto LAB_67202508;
                }
              }
              *puVar22 = uVar11;
            }
          }
LAB_67202508:
          iVar27 = *(int *)((int)puVar14 + 0x201);
          if (iVar27 == -1) {
            *(uint **)((int)puVar14 + 0xe2) = puVar23;
            *(uint **)((int)puVar14 + 0xe6) = puVar18;
          }
          else {
            *(undefined4 *)((int)puVar14 + 0xe2) = *(undefined4 *)((int)this + iVar27 * 4 + 0x2de);
            *(undefined4 *)((int)puVar14 + 0xe6) = *(undefined4 *)((int)this + iVar27 * 4 + 0x2fe);
          }
          uVar11 = *(uint *)((int)puVar14 + 0xe2);
          puVar22[1] = uVar11;
          uVar6 = *(uint *)((int)puVar14 + 0xe6);
          puVar22[2] = uVar6;
          *puVar26 = uVar11 * uVar6 * 3 >> 1;
          if ((param_1 == 0) || (*(int *)((int)puVar14 + 0xee) != 4)) {
            puVar19 = (undefined4 *)0x67202589;
            iVar27 = FUN_67202e90(this,(int)puVar14,(uint)puVar26,(int)param_3);
            if (iVar27 == 0) goto LAB_67202865;
            for (iVar27 = 0x104; iVar27 != 0; iVar27 = iVar27 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            iVar27 = (**(code **)(*(int *)puVar14[4] + 0xc))();
            local_4c = (double)CONCAT44(iVar27,(undefined4)local_4c);
            local_74 = (double)CONCAT44(param_1 * 4,(undefined4)local_74);
            aiStackY_1d8[param_1] = iVar27;
            if (iVar27 != 0) {
              if ((*(int *)((int)puVar14 + 0xea) == 2) || (*(int *)((int)puVar14 + 0xea) == 3)) {
                local_84 = *(undefined4 *)((int)puVar14 + 0xfa);
                local_44 = *(int *)((int)this + 0xac) - *(int *)((int)puVar14 + 0x11e);
                uStackY_80 = 0;
                uStackY_40 = 0;
                puVar23 = (uint *)0x0;
                uVar11 = ftol();
              }
              else {
                uVar4 = FUN_67201b40(*(double *)((int)puVar14 + 0x1ca));
                if (((byte)uVar4 < 10) || (*(int *)((int)puVar14 + 0xee) == 4)) {
                  local_bc = 1;
                  local_c0 = 0x27;
                  FUN_672088e0((void *)((int)puVar14 + 0x32),&local_c0);
                  puVar23 = (uint *)0x0;
                  uVar11 = 0;
                }
                else {
                  local_c8 = 0;
                  local_cc = 0x27;
                  FUN_672088e0((void *)((int)puVar14 + 0x32),&local_cc);
                  puVar23 = (uint *)0x0;
                  uVar11 = 0;
                }
              }
              this_00 = (void *)((int)puVar14 + 0x32);
              uVar4 = FUN_67201b40(*(double *)((int)puVar14 + 0x1da));
              iVar27 = CONCAT22(extraout_var,uVar4);
              uVar4 = FUN_67201b40(*(double *)((int)puVar14 + 0x1e2));
              puVar19 = (undefined4 *)CONCAT22(extraout_var_00,uVar4);
              uVar4 = FUN_67201b40(*(double *)((int)puVar14 + 0x1ca));
              puVar9 = (undefined4 *)CONCAT22(extraout_var_01,uVar4);
              puVar5 = (uint *)0x672026f9;
              FUN_67208950(this_00,(char)uVar4,(char)puVar19,(char)iVar27,uVar11,(char)puVar23);
              if (((0 < *(int *)((int)puVar14 + 0x209)) && (*(int *)((int)puVar14 + 0x22d) == 0)) &&
                 (iVar24 = *(int *)((int)puVar14 + 0x209) + -1,
                 *(int *)((int)puVar14 + 0x209) = iVar24,
                 *(int *)((int)puVar14 + iVar24 * 4 + 0x20d) == 1)) {
                puVar23 = local_118;
                local_118[0] = 0x22;
                uVar11 = 0x67202736;
                FUN_672088e0(this_00,puVar23);
              }
              if (*(int *)((int)puVar14 + 0x221) != 0) {
                local_a0 = *(undefined4 *)((int)puVar14 + 0x21d);
                local_9c = *(int *)((int)puVar14 + 0xe2) + 0xfU >> 4;
                puVar23 = &local_a4;
                local_a4 = 0x28;
                local_98 = *(int *)((int)puVar14 + 0xe6) + 0xfU >> 4;
                uVar11 = 0x67202788;
                FUN_672088e0(this_00,puVar23);
              }
              iVar24 = *(int *)((int)puVar14 + 0x201);
              if ((iVar24 == -1) ||
                 ((uVar11 == *(uint *)(iVar27 + 4) && (puVar9 == *(undefined4 **)(iVar27 + 8))))) {
                puVar20 = puStackY_58;
                puVar8 = local_4c._4_4_;
              }
              else {
                if (*(int *)((int)this + iVar24 * 4 + 0x33e) == 0) {
                  puVar23 = *(uint **)((int)this + 0x36a);
                  puVar5 = *(uint **)((int)this + iVar24 * 4 + 0x31e);
                  FUN_67205ac0(this,puStackY_58,puVar5,*(uint **)(iVar27 + 8),(uint)puVar9,
                               *(uint *)(iVar27 + 4),(uint)*(uint **)(iVar27 + 8),(int)puVar23);
                  *(undefined4 *)((int)this + *(int *)((int)puVar14 + 0x201) * 4 + 0x33e) = 1;
                  puVar19 = puVar9;
                }
                puVar20 = *(ulonglong **)((int)this + *(int *)((int)puVar14 + 0x201) * 4 + 0x31e);
                puVar8 = local_4c._4_4_;
              }
              puVar18 = (uint *)0x6720282e;
              iVar27 = FUN_672087b0(this_00,(uint)puVar20,(uint)puVar8,puVar23,puVar19);
              if (iVar27 == 0) {
                *(undefined4 *)((int)local_188 + local_74._4_4_) = 1;
              }
              goto LAB_6720288f;
            }
            ppuVar15 = local_ec;
            local_ec[2] = puVar17;
            for (iVar27 = 8; puVar5 = local_ec[2], iVar27 != 0; iVar27 = iVar27 + -1) {
              *ppuVar15 = (uint *)0x0;
              ppuVar15 = ppuVar15 + 1;
            }
          }
          else {
LAB_67202865:
            local_104 = puVar17;
            piVar25 = local_10c;
            for (iVar27 = 8; puVar5 = local_104, iVar27 != 0; iVar27 = iVar27 + -1) {
              *piVar25 = 0;
              piVar25 = piVar25 + 1;
            }
          }
          puVar8 = (uint *)puVar14[2];
          puVar23 = puVar14;
          iVar27 = (*(code *)puVar14[3])();
        }
LAB_6720288f:
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 5;
        local_64 = (double)CONCAT44((int)local_64._4_4_ + 4,(undefined4)local_64);
      } while (param_1 < *(ushort *)((int)this + 0xf4));
    }
    thunk_FUN_672085a0();
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd0);
    local_44 = local_54.s.LowPart;
    uStackY_40 = 0;
    uVar16 = ftol();
    *(undefined4 *)((int)this + *(int *)((int)this + 0x1be) * 4 + 0x142) = uVar16;
    *(uint **)((int)this + *(int *)((int)this + 0x1be) * 4 + 0x192) = puVar5;
    iVar24 = *(int *)((int)this + 0x1be) + 1;
    *(int *)((int)this + 0x1be) = iVar24;
    if (iVar24 == 10) {
      *(undefined4 *)((int)this + 0x1be) = 0;
    }
    param_1 = 0;
    if (*(short *)((int)this + 0xf4) != 0) {
      do {
        if (local_188[param_1] == 1) {
          puVar23 = (uint *)aiStackY_1d8[param_1];
          iVar27 = 0;
          puVar14 = *(uint **)((int)this + *(int *)((int)this + param_1 * 4 + 0x58) * 4 + 8);
          puVar21 = local_368 + param_1 * 0x14;
          puVar18 = local_54a8 + param_1 * 0x104;
          *(double *)((int)this + 0x102) = dVar1;
          puVar8 = puVar18;
          if ((*(int *)((int)puVar14 + 0xee) == 4) && (param_1 == 0)) {
            puVar23 = (uint *)ftol();
            puVar8 = (uint *)ftol();
            puVar5 = (uint *)0x67202a1f;
            puVar21 = puStackY_50a0;
            FUN_6720c4b0(this,uStackY_509c,(char)puStackY_50a0);
            if (1 < *(ushort *)((int)this + 0xf4)) {
              iVar27 = -0x7fffbffb;
            }
          }
          if ((((*(int *)((int)this + 0xfe) == 1) || (*(int *)((int)puVar14 + 0xea) == 3)) ||
              (*(int *)((int)puVar14 + 0xea) == 2)) &&
             (((iVar27 == 0 && (*(int *)((int)puVar14 + 0x22d) == 0)) &&
              (*(int *)((int)puVar14 + 0x235) == 0)))) {
            puVar8 = puVar14;
            puVar23 = puVar18;
            iVar27 = FUN_672030e0((int)puVar14,(int *)puVar18);
          }
          if (iVar27 == 0) {
            *(undefined4 *)((int)puVar14 + 0x11a) = *(undefined4 *)((int)puVar14 + 0x11e);
            *(undefined4 *)((int)puVar14 + 0x11e) = *(undefined4 *)(puVar21 + 4);
            *(undefined4 *)((int)puVar14 + *(int *)((int)puVar14 + 0x172) * 4 + 0x14a) =
                 *(undefined4 *)(puVar21 + 4);
            iVar27 = *(int *)((int)puVar14 + 0x172) + 1;
            *(int *)((int)puVar14 + 0x172) = iVar27;
            if (iVar27 == 10) {
              *(undefined4 *)((int)puVar14 + 0x172) = 0;
            }
            local_4c = (double)CONCAT44(*puVar18,(undefined4)local_4c);
            if (*puVar18 != 0) {
              if ((*(int *)((int)puVar14 + 599) != 0) && (*(int *)((int)puVar14 + 0x253) != 0)) {
                FUN_67205500((int)puVar14,(byte *)puVar23,puVar18);
                puVar8 = puVar23;
              }
              if (*(int *)((int)puVar14 + 0xee) == 4) {
                iVar24 = 0x67202b08;
                (**(code **)(*(int *)puVar14[4] + 0x1c))();
                uVar16 = *(undefined4 *)((int)puVar14 + 0x126);
                piVar25 = local_10c;
                for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *piVar25 = 0;
                  piVar25 = piVar25 + 1;
                }
                local_104 = *(uint **)(iVar24 + 0x40c);
                *(undefined4 *)((int)puVar14 + 0x12a) = uVar16;
                uVar11 = puVar14[2];
                piVar25 = local_10c;
                *(undefined4 *)((int)puVar14 + 0x126) = *(undefined4 *)(iVar24 + 0x40c);
                iVar27 = (*(code *)puVar14[3])();
              }
              else {
                uVar11 = puVar8[0x101] * 8 + 0x20;
                puVar19 = (undefined4 *)0x67202b6b;
                puVar9 = operator_new(uVar11);
                uVar16 = *puVar19;
                puVar9[1] = uVar11;
                *puVar9 = uVar16;
                if (puVar19[0x102] == 2) {
                  puVar9[2] = *(int *)((int)puVar14 + 0x126) + 1;
                }
                else {
                  puVar9[2] = puVar19[0x103];
                }
                *(undefined4 *)((int)puVar14 + 0x12a) = *(undefined4 *)((int)puVar14 + 0x126);
                *(undefined4 *)((int)puVar14 + 0x126) = puVar9[2];
                *(short *)(puVar9 + 3) = (short)puVar14[0xb];
                *(short *)(puVar14 + 0xb) = (short)puVar14[0xb] + 1;
                *(ushort *)((int)puVar9 + 0xe) = (-(ushort)(puVar19[0x102] != 1) & 0xfffe) + 2;
                puVar9[4] = param_3[4];
                iVar27 = puVar19[0x101];
                puVar9[5] = iVar27 + 1;
                if (puVar19[0x101] == 0) {
                  uVar16 = puVar19[1];
                  puVar9[6] = 1;
                  puVar9[7] = uVar16;
                }
                else {
                  puStackY_58 = (ulonglong *)0x0;
                  if (iVar27 + 1 != 0) {
                    puVar10 = puVar9 + 6;
                    do {
                      puVar19 = puVar19 + 1;
                      puVar10[1] = *puVar19;
                      *puVar10 = 1;
                      puStackY_58 = (ulonglong *)((int)puStackY_58 + 1);
                      puVar10 = puVar10 + 2;
                    } while (puStackY_58 < (ulonglong *)puVar9[5]);
                  }
                }
                uVar11 = 0x67202c3c;
                iVar27 = (*(code *)puVar14[3])();
                piVar25 = (int *)0x67202c45;
                operator_delete(puVar9);
              }
              *(int *)((int)puVar14 + 0x18e) = *piVar25 << 3;
              iVar24 = piVar25[0x101] + 1;
              *(int *)((int)puVar14 + 0x192) = iVar24;
              if (iVar24 == 1) {
                *(int *)((int)puVar14 + 0x18a) =
                     *(int *)((int)puVar14 + 0x18a) + (int)local_4c._4_4_ * 8 + 0x40;
              }
              else {
                *(int *)((int)puVar14 + 0x18a) =
                     *(int *)((int)puVar14 + 0x18a) + ((int)local_4c._4_4_ + iVar24 * 0xb) * 8;
              }
              if (piVar25[0x102] == 2) {
                *(undefined4 *)((int)puVar14 + 0x186) = 3;
              }
              else if (piVar25[0x102] == 0) {
                *(undefined4 *)((int)puVar14 + 0x186) = 2;
              }
              else {
                *(undefined4 *)((int)puVar14 + 0x116) = *(undefined4 *)((int)puVar14 + 0x112);
                *(undefined4 *)((int)puVar14 + 0x186) = 1;
                *(undefined4 *)((int)puVar14 + 0x112) = *(undefined4 *)(uVar11 + 4);
                *(undefined4 *)((int)puVar14 + 0x12e) = 1;
              }
              if ((iVar27 == 0) && (*(int *)((int)puVar14 + 0xd2) != 0)) {
                iVar24 = (**(code **)(**(int **)((int)puVar14 + 0xce) + 0xc))();
                local_64 = (double)CONCAT44(iVar24,(undefined4)local_64);
                if (iVar24 != 0) {
                  uVar6 = *(uint *)((int)this + 0xf6);
                  if ((uint)*(ushort *)((int)puVar14 + 0x9e) <= *(uint *)((int)this + 0xf6)) {
                    uVar6 = (uint)*(ushort *)((int)puVar14 + 0x9e);
                  }
                  local_4c = (double)CONCAT44(uVar6,(undefined4)local_4c);
                  puStackY_58 = (ulonglong *)(uint)(ushort)puVar14[0x28];
                  if (*(ulonglong **)((int)this + 0xfa) < (ulonglong *)(uint)(ushort)puVar14[0x28])
                  {
                    puStackY_58 = *(ulonglong **)((int)this + 0xfa);
                  }
                  if ((uVar6 == *(uint *)(uVar11 + 8)) &&
                     (puStackY_58 == *(ulonglong **)(uVar11 + 0xc))) {
                    iVar27 = FUN_67208f20((int)puVar14);
                    uVar6 = uVar11;
                  }
                  else {
                    iVar27 = FUN_67208f20((int)puVar14);
                    uVar6 = *(uint *)(uVar11 + 0xc);
                    puVar5 = local_64._4_4_;
                    FUN_67205ac0(this,*(ulonglong **)((int)this + 0x1ca),local_64._4_4_,
                                 *(uint **)(uVar11 + 8),uVar6,(uint)local_4c._4_4_,(uint)puStackY_58
                                 ,0);
                  }
                  if (iVar27 == 0) {
                    local_44 = (uint)local_64._4_4_;
                    uStackY_40 = *(undefined4 *)(uVar6 + 4);
                    local_3c = local_3c & 0xffffff00;
                    (**(code **)((int)puVar14 + 0xd2))();
                  }
                }
              }
              goto LAB_67202e0d;
            }
          }
          (**(code **)(*(int *)puVar14[4] + 0x1c))();
          ppuVar15 = local_ec;
          local_ec[2] = puVar5;
          for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
            *ppuVar15 = (uint *)0x0;
            ppuVar15 = ppuVar15 + 1;
          }
          puVar5 = local_ec[2];
          iVar27 = (*(code *)puVar14[3])();
        }
LAB_67202e0d:
        param_1 = param_1 + 1;
      } while (param_1 < *(ushort *)((int)this + 0xf4));
    }
  }
  FUN_67203360((int)this);
  FUN_67205250((int)this);
  FUN_67205460((int)this);
LAB_67202e3a:
  uVar11 = 0;
  if (*(short *)((int)this + 0xf4) != 0) {
    piVar25 = (int *)((int)this + 8);
    do {
      iVar24 = *piVar25;
      uVar11 = uVar11 + 1;
      piVar25 = piVar25 + 1;
      *(undefined4 *)(iVar24 + 0x182) = 0;
    } while (uVar11 < *(ushort *)((int)this + 0xf4));
  }
  if ((int *)puVar14[5] != (int *)0x0) {
    (**(code **)(*(int *)puVar14[5] + 0x1c))();
  }
  return iVar27;
}


