/* Module: g2plug.dll
   Function: FUN_5f807c90
   Address: 5f807c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f808893) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_5f807c90(void)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  HGLOBAL pvVar9;
  uint uVar10;
  uint uVar11;
  LPVOID pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *unaff_EBX;
  undefined2 *puVar15;
  int *unaff_EBP;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  float10 fVar19;
  longlong lVar20;
  int *in_stack_fffffebc;
  undefined2 **ppuVar21;
  int *piVar22;
  int *piStack_120;
  undefined2 **ppuStack_11c;
  int *piStack_110;
  undefined8 uStack_10c;
  LPVOID pvStack_104;
  undefined8 uStack_100;
  uint uStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *local_e8;
  uint local_e4;
  undefined2 *local_e0;
  int *local_dc [2];
  int iStack_d4;
  undefined2 *puStack_d0;
  undefined8 uStack_cc;
  int iStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  LPVOID pvStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  LPCVOID pvStack_88;
  double dStack_84;
  undefined8 local_7c;
  double dStack_74;
  undefined2 uStack_6c;
  short sStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_64;
  ushort uStack_60;
  ushort uStack_5e;
  undefined2 uStack_5c;
  int iStack_58;
  undefined8 uStack_54;
  int *piStack_8;
  int *piStack_4;
  
  local_7c._0_4_ = 0;
  local_a4._0_4_ = 0;
  local_e8 = (int *)0x0;
  local_dc[0] = (int *)0x0;
  local_ac = 0;
  local_e0 = (undefined2 *)0x0;
  local_e4 = 0;
  if (DAT_5f87749c == (int *)0x0) {
    return (int *)0x80004005;
  }
  ppuStack_11c = &local_e0;
  piStack_120 = (int *)&DAT_5f86a4c0;
  iVar5 = (**(code **)*DAT_5f87749c)(DAT_5f87749c);
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_5f809710(iVar5);
    return piVar6;
  }
  pvStack_104 = (LPVOID)0x0;
  puVar7 = (undefined2 *)(**(code **)(*(int *)piStack_8[10] + 0x38))();
  local_dc[0] = (int *)0x0;
  local_e0 = puVar7;
  fVar19 = (float10)(**(code **)(*(int *)piStack_8[10] + 0x2c))();
  dStack_84 = (double)fVar19;
  local_ac = 0;
  if (piStack_8[0x1b2] == 0) {
    bVar2 = true;
  }
  else {
    iStack_c4 = 0;
    puVar15 = puVar7;
    puStack_d0 = puVar7;
    if ((((int *)piStack_8[0xc] != (int *)0x0) &&
        (iVar5 = (**(code **)(*(int *)piStack_8[0xc] + 8))(&uStack_f8), iVar5 != 0)) &&
       (piStack_120 = (int *)(**(code **)(*(int *)piStack_8[0xc] + 0xc))(1,1), -1 < (int)piStack_120
       )) {
      uStack_6c = *puVar7;
      sStack_6a = puVar7[1];
      uStack_68 = (undefined2)uStack_f8;
      uStack_66 = (undefined2)(uStack_f8 >> 0x10);
      uVar4 = ((ushort)puVar7[7] >> 3) * sStack_6a;
      _uStack_60 = CONCAT22(puVar7[7],uVar4);
      iStack_64 = uVar4 * uStack_f8;
      uStack_10c._0_4_ = *(int **)(puVar7 + 2);
      uStack_10c._4_4_ = 0;
      puVar15 = &uStack_6c;
      iStack_c4 = 1;
      uStack_5c = 0;
      dStack_74 = (double)uStack_f8 / (double)(int *)uStack_10c;
      puStack_d0 = puVar15;
    }
    uStack_f8 = *(uint *)((int)piStack_8 + 0x413) - *(uint *)((int)piStack_8 + 0x40b);
    in_stack_fffffebc = (int *)0x5f807e50;
    local_ac = __allmul(uStack_f8,
                        (*(int *)((int)piStack_8 + 0x417) - *(int *)((int)piStack_8 + 0x40f)) -
                        (uint)(*(uint *)((int)piStack_8 + 0x413) < *(uint *)((int)piStack_8 + 0x40b)
                              ),(uint)(ushort)puVar7[6],0);
    bVar2 = false;
    iVar5 = (**(code **)(*(int *)piStack_8[0x1b2] + 0x10))((int *)piStack_8[0x1b2],&piStack_110);
    if (iVar5 < 0) {
      piStack_120 = (int *)FUN_5f809710(iVar5);
    }
    else {
      iVar5 = (**(code **)*piStack_110)(piStack_110,&DAT_5f86a5a0,&stack0xfffffee8);
      if (iVar5 < 0) {
        piStack_120 = (int *)FUN_5f809710(iVar5);
      }
      else {
        (**(code **)(*unaff_EBP + 0x20))(unaff_EBP,puVar15[1]);
        (**(code **)(*piStack_120 + 0x10))(piStack_120,*(undefined4 *)(puVar15 + 2));
        in_stack_fffffebc = (int *)(uint)(ushort)puVar15[7];
        (**(code **)(*unaff_EBX + 0x18))(unaff_EBX);
        if (unaff_EBP != (int *)0x0) {
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        }
      }
      if (piStack_110 != (int *)0x0) {
        (**(code **)(*piStack_110 + 8))(piStack_110);
      }
    }
  }
  local_a4._0_4_ = 0;
  local_a4._4_4_ = 0;
  local_a4 = 0;
  if ((piStack_8[0x1b3] == 0) || (piStack_8[0x50] == 0)) {
    bVar1 = true;
  }
  else {
    piStack_120 = (int *)(**(code **)(*(int *)piStack_8[10] + 0x20))(local_dc);
    local_7c = CONCAT44(local_7c._4_4_,(undefined4)local_7c);
    if ((int)piStack_120 < 0) goto LAB_5f808aa0;
    iVar5 = local_dc[0][1];
    piVar6 = (int *)local_dc[0][2];
    uStack_10c._0_4_ = *(int **)(local_e0 + 2);
    uStack_10c._4_4_ = 0;
    local_a4 = ftol();
    bVar1 = false;
    iVar8 = (**(code **)(*(int *)piStack_8[0x1b3] + 0x10))((int *)piStack_8[0x1b3],&piStack_110);
    if (-1 < iVar8) {
      iVar8 = (**(code **)*piStack_110)(piStack_110,&DAT_5f86a5e0,&ppuStack_11c);
      if (iVar8 < 0) {
        piStack_120 = (int *)FUN_5f809710(iVar8);
      }
      else {
        *(int *)((int)piStack_8 + 0x403) = iVar5;
        *(int **)((int)piStack_8 + 0x407) = piVar6;
        ppuVar21 = ppuStack_11c;
        if (*(int *)((int)piStack_8 + 0x3f3) == 0) {
          piVar22 = piVar6;
          (**(code **)(*ppuStack_11c + 8))(ppuStack_11c,iVar5);
          *(int *)((int)piStack_8 + 0x3fb) = iVar5;
          *(int **)((int)piStack_8 + 0x3ff) = piVar6;
        }
        else if ((*(byte *)((int)piStack_8 + 0x67f) & 3) == 0) {
          piVar22 = *(int **)((int)piStack_8 + 0x3ff);
          (**(code **)(*ppuStack_11c + 8))(ppuStack_11c,*(undefined4 *)((int)piStack_8 + 0x3fb));
        }
        else {
          (**(code **)(*ppuStack_11c + 8))(ppuStack_11c,iVar5);
          in_stack_fffffebc = *(int **)((int)piStack_8 + 0x3fb);
          (**(code **)(*unaff_EBX + 0x38))
                    (unaff_EBX,in_stack_fffffebc,*(undefined4 *)((int)piStack_8 + 0x3ff));
          piVar22 = piVar6;
        }
        (**(code **)(*piVar22 + 0x18))(piVar22,0);
        (**(code **)(*ppuVar21 + 0x10))(ppuVar21,0);
        if ((void *)piStack_8[0x1a6] != (void *)0x0) {
          FUN_5f80ac20((void *)piStack_8[0x1a6],0x18,*(undefined4 *)((int)piStack_8 + 0x3fb),
                       *(undefined4 *)((int)piStack_8 + 0x3ff));
        }
        iVar5 = *in_stack_fffffebc;
        fVar19 = (float10)(**(code **)(*(int *)piStack_8[10] + 0x2c))();
        iVar5 = (**(code **)(iVar5 + 0x30))(in_stack_fffffebc,(float)fVar19);
        piStack_120 = (int *)FUN_5f809710(iVar5);
        if (ppuStack_11c != (undefined2 **)0x0) {
          (**(code **)(*ppuStack_11c + 4))(ppuStack_11c);
          ppuStack_11c = (undefined2 **)0x0;
        }
      }
      if (piStack_110 != (int *)0x0) {
        (**(code **)(*piStack_110 + 8))(piStack_110);
      }
    }
  }
  lVar20 = CONCAT44(local_7c._4_4_,(undefined4)local_7c);
  local_7c = lVar20;
  if ((int)piStack_120 < 0) goto LAB_5f808aa0;
  if (piStack_8[0x1a6] != 0) {
    *(int **)(piStack_8[0x1a6] + 8) = piStack_4;
  }
  if (bVar1) {
    bVar1 = true;
LAB_5f808216:
    iVar5 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a650,&piStack_f0);
    if (iVar5 == 0) {
      if ((bVar1) || (*(int *)((int)piStack_8 + 0x66b) == 0)) {
        piStack_110 = (int *)0x0;
        iVar5 = (**(code **)(*piStack_f0 + 0x10))(piStack_f0,0);
      }
      else {
        piStack_120 = (int *)FUN_5f809b50((int)piStack_8,piStack_4,piStack_f4,piStack_f0,
                                          (int *)lVar20,(int *)((ulonglong)lVar20 >> 0x20),
                                          (int *)uStack_10c,uStack_10c._4_4_);
        if ((int)piStack_120 < 0) goto LAB_5f808aa0;
        piStack_110 = (int *)0x1;
        iVar5 = (**(code **)(*piStack_f0 + 0x10))(piStack_f0,2);
      }
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*DAT_5f87749c + 0x44))(DAT_5f87749c);
        if (-1 < iVar5) {
          if ((piStack_8[0x4f] != 0) && (piStack_8[0x1b2] != 0)) {
            iVar5 = (**(code **)(*piStack_ec + 0xc))
                              (piStack_ec,&DAT_5f86a600,0,&DAT_5f86a5f0,&local_e8);
            bVar2 = false;
            if (iVar5 < 0) {
              bVar2 = true;
              piStack_120 = (int *)FUN_5f809710(iVar5);
            }
          }
          if (*(int *)((int)piStack_8 + 0x42f) != 0) {
            iVar5 = (**(code **)(*piStack_ec + 0xc))
                              (piStack_ec,&DAT_5f86a620,0,&DAT_5f86a610,&piStack_b4);
            if (iVar5 < 0) {
              *(undefined4 *)((int)piStack_8 + 0x42f) = 0;
            }
          }
          if (piStack_8[0x51] != 0) {
            iVar5 = (**(code **)(*piStack_ec + 0xc))
                              (piStack_ec,&DAT_5f86a640,0,&DAT_5f86a630,&piStack_b8);
            if (iVar5 < 0) {
              piStack_8[0x51] = 0;
            }
          }
          iStack_d4 = *(int *)((int)piStack_8 + 0x40f);
          uVar16 = *(uint *)((int)piStack_8 + 0x40b);
          uStack_c0 = 0;
          uStack_bc = 0;
          if (bVar2) {
LAB_5f8085ed:
            if (piStack_8[0x1b2] == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = __alldiv((uint)local_ac,local_ac._4_4_,uStack_f8,0);
            }
            dStack_74 = _DAT_5f86af58;
            if (piStack_110 != (int *)0x0) {
              dStack_74 = _DAT_5f86af60;
            }
            dStack_74 = (double)(lVar20 + local_a4) * dStack_74;
            uStack_100 = 0;
            piVar6 = piStack_4;
LAB_5f808664:
            do {
              do {
                if (!bVar2) {
                  iVar5 = (**(code **)(*(int *)piStack_8[0x1b2] + 0x18))
                                    ((int *)piStack_8[0x1b2],local_e8);
                  if (iVar5 == 0) {
                    iVar5 = (**(code **)(*(int *)piStack_8[10] + 0x44))
                                      (uVar16,iStack_d4,uStack_94,pvStack_104,0,&local_e4);
                    if ((iVar5 == 0) && (0 < (int)local_e4)) {
                      piStack_120 = (int *)0x0;
                      if ((int *)piStack_8[0xc] != (int *)0x0) {
                        piStack_120 = (int *)(**(code **)(*(int *)piStack_8[0xc] + 4))
                                                       (pvStack_104,local_e4,&iStack_8c,uVar16,
                                                        iStack_d4);
                      }
                      uVar10 = local_e4;
                      local_a4._0_4_ = *(undefined4 *)(local_e0 + 2);
                      uVar17 = (ushort)local_e0[6] * local_e4;
                      bVar18 = CARRY4(uStack_c0,uVar17);
                      uStack_c0 = uStack_c0 + uVar17;
                      uStack_bc = uStack_bc + bVar18;
                      local_a4._4_4_ = 0;
                      iStack_9c = uVar16 - *(uint *)((int)piStack_8 + 0x40b);
                      iStack_98 = (iStack_d4 - *(int *)((int)piStack_8 + 0x40f)) -
                                  (uint)(uVar16 < *(uint *)((int)piStack_8 + 0x40b));
                      uVar13 = ftol();
                      bVar18 = CARRY4(uVar16,uVar10);
                      uVar16 = uVar16 + uVar10;
                      iStack_d4 = iStack_d4 + ((int)uVar10 >> 0x1f) + (uint)bVar18;
                      if (iStack_c4 != 0) {
                        uVar17 = (uint)(ushort)puStack_d0[6] * iStack_8c;
                      }
                      iVar5 = (**(code **)(*local_e8 + 0xc))(local_e8,pvStack_104,uVar17,uVar13,0);
                      if (iVar5 != 0) goto LAB_5f8087ae;
                    }
                    else {
                      bVar2 = true;
                      piStack_120 = (int *)0x0;
                    }
                  }
                  else {
LAB_5f8087ae:
                    bVar2 = true;
                  }
                  piVar6 = piStack_4;
                  lVar20 = uStack_cc;
                  if (!bVar1) goto LAB_5f8087c9;
                  goto LAB_5f80894b;
                }
                lVar20 = uStack_cc;
                if (bVar1) goto LAB_5f808a00;
LAB_5f8087c9:
                uStack_cc._4_4_ = (int *)((ulonglong)lVar20 >> 0x20);
                uStack_cc._0_4_ = (int)lVar20;
                iVar8 = FUN_5f8097e0((int)uStack_cc,uStack_cc._4_4_,piStack_8,local_dc[0]);
                uStack_cc = lVar20;
                iVar5 = iStack_58;
                if ((iVar8 != 0) || (iStack_58 == 0)) {
                  bVar1 = true;
                  piStack_120 = (int *)0x0;
                  goto LAB_5f80894b;
                }
                uStack_100 = CONCAT44(uStack_100._4_4_ + (uint)(0xfffffffe < (int *)uStack_100),
                                      (int)(int *)uStack_100 + 1);
                uStack_cc = uStack_cc + 1;
                uVar3 = (ulonglong)uStack_cc >> 0x20;
                local_ac = uStack_cc - local_7c;
                uVar13 = ftol();
                if (CONCAT44((int)uVar3,(int)uStack_cc) < uStack_10c) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 2;
                  bVar1 = true;
                }
                iVar5 = (**(code **)(*piStack_f4 + 0xc))
                                  (piStack_f4,iVar5,*(undefined4 *)(uStack_90 + 0x14),uVar13,uVar14)
                ;
                if (iVar5 != 0) {
                  bVar1 = true;
                  piStack_120 = (int *)FUN_5f809710(iVar5);
                  piVar6 = piStack_4;
                  goto LAB_5f80894b;
                }
                iVar5 = (**(code **)(*(int *)piStack_8[0x1b3] + 0x18))
                                  ((int *)piStack_8[0x1b3],piStack_f4);
                piVar6 = piStack_4;
                if (iVar5 != 0) {
                  bVar1 = true;
                }
                piStack_120 = (int *)0x0;
              } while (piStack_4 == (int *)0x0);
              (**(code **)(*piStack_4 + 0x24))(uStack_cc);
LAB_5f80894b:
            } while (piVar6 == (int *)0x0);
            uStack_54 = __alldiv(uStack_c0,uStack_bc,uStack_f8,0);
            uStack_54 = uStack_54 + uStack_100;
            iVar5 = ftol();
            if (piStack_110 != (int *)0x0) {
              iVar5 = iVar5 + 0x32;
            }
            if (100 < iVar5) {
              iVar5 = 100;
            }
            iVar8 = (**(code **)(*piVar6 + 4))(iVar5);
            if (iVar8 != 0) {
              if (iVar5 % 10 == 0) {
                (**(code **)(*(int *)piStack_8[0x1a4] + 0x1c))((int *)piStack_8[0x1a4]);
                SfRealG2_GetStatistics((SFG2_STAT_PARAMS *)((int)&uStack_54 + 4));
                (**(code **)(*piVar6 + 0x28))((int)&uStack_54 + 4);
              }
              goto LAB_5f808664;
            }
            piStack_120 = (int *)0x8004e00c;
LAB_5f808a00:
            if (piStack_8[0x50] != 0) {
              (**(code **)(*(int *)piStack_8[10] + 0x24))(0xffffffff,0xffffffff,0,0,0);
            }
            if (-1 < (int)piStack_120) {
              if (*(int *)((int)piStack_8 + 0x42f) != 0) {
                FUN_5f808b60(piStack_8,piStack_b4);
              }
              if (piStack_8[0x51] != 0) {
                FUN_5f808cf0((int)piStack_8,uVar16,iStack_d4,(int)local_e0,piStack_b8);
              }
            }
            (**(code **)(*(int *)piStack_8[0x1a4] + 0x1c))((int *)piStack_8[0x1a4]);
            iVar5 = (**(code **)(*DAT_5f87749c + 0x48))(DAT_5f87749c);
            pvVar12 = pvStack_104;
            if (iVar5 != 0) {
              piStack_120 = (int *)FUN_5f809710(iVar5);
              pvVar12 = pvStack_104;
            }
          }
          else {
            uStack_100 = uStack_100 & 0xffffffff00000000;
            iVar5 = (*(code *)**(undefined4 **)piStack_8[0x1b2])
                              ((undefined4 *)piStack_8[0x1b2],&DAT_5f86a500,&uStack_100);
            if (iVar5 < 0) {
              bVar2 = true;
              goto LAB_5f8085ed;
            }
            iVar5 = (**(code **)(*(int *)uStack_100 + 0x10))((int *)uStack_100,&uStack_90);
            if ((iVar5 < 0) || (uStack_90 == 0)) {
              bVar2 = true;
LAB_5f8085d5:
              if ((int *)uStack_100 != (int *)0x0) {
                (**(code **)(*(int *)uStack_100 + 8))((int *)uStack_100);
              }
              goto LAB_5f8085ed;
            }
            uVar10 = uStack_90 / (ushort)local_e0[6];
            if (iStack_c4 == 0) {
              uStack_f8 = (ushort)puStack_d0[6] * uVar10;
            }
            else {
              local_e4 = uVar10;
              uStack_94 = uVar10;
              uVar11 = ftol();
              uVar17 = uVar11;
              if ((int)uVar11 <= (int)uVar10) {
                uVar17 = uVar10;
              }
              uStack_f8 = (ushort)puStack_d0[6] * uVar17;
              uVar10 = uVar11;
            }
            uStack_94 = uVar10;
            pvVar9 = GlobalAlloc(0x42,uStack_f8);
            pvVar12 = GlobalLock(pvVar9);
            pvStack_104 = pvVar12;
            if (pvVar12 != (LPVOID)0x0) {
              iVar5 = (**(code **)(*(int *)piStack_8[10] + 0x44))
                                (uVar16,iStack_d4,uVar10,pvVar12,0,&local_e4);
              if ((iVar5 == 0) && (0 < (int)local_e4)) {
                piStack_120 = (int *)0x0;
                if ((int *)piStack_8[0xc] != (int *)0x0) {
                  piStack_120 = (int *)(**(code **)(*(int *)piStack_8[0xc] + 4))
                                                 (pvStack_104,local_e4,&iStack_8c,uVar16,iStack_d4);
                }
                uVar10 = local_e4;
                iStack_9c = *(int *)(local_e0 + 2);
                uVar17 = (ushort)local_e0[6] * local_e4;
                uStack_bc = 0;
                iStack_98 = 0;
                uStack_c0 = uVar17;
                uVar13 = ftol();
                bVar18 = CARRY4(uVar16,uVar10);
                uVar16 = uVar16 + uVar10;
                iStack_d4 = iStack_d4 + ((int)uVar10 >> 0x1f) + (uint)bVar18;
                if (iStack_c4 != 0) {
                  uVar17 = (uint)(ushort)puStack_d0[6] * iStack_8c;
                }
                iVar5 = (**(code **)(*local_e8 + 0xc))(local_e8,pvStack_104,uVar17,uVar13,0);
                if (iVar5 != 0) {
                  bVar2 = true;
                  piStack_120 = (int *)FUN_5f809710(iVar5);
                }
              }
              else {
                bVar2 = true;
                piStack_120 = (int *)0x0;
              }
              goto LAB_5f8085d5;
            }
            piStack_120 = (int *)0x8007000e;
            (**(code **)(*DAT_5f87749c + 0x48))(DAT_5f87749c);
          }
          if (pvVar12 != (LPCVOID)0x0) {
            pvVar9 = GlobalHandle(pvVar12);
            GlobalUnlock(pvVar9);
            pvVar9 = GlobalHandle(pvVar12);
            GlobalFree(pvVar9);
          }
          goto LAB_5f808aa0;
        }
      }
    }
  }
  else {
    iVar5 = (**(code **)(*piStack_ec + 0xc))(piStack_ec,&DAT_5f86a600,0,&DAT_5f86a5f0,&piStack_f4);
    bVar1 = false;
    if (-1 < iVar5) {
      uStack_10c._4_4_ = 0;
      uStack_10c._0_4_ = *(int **)(local_e0 + 2);
      lVar20 = ftol();
      local_7c = lVar20;
      uStack_10c = ftol();
      if (((*(short *)((int)local_dc[0] + 0xe) != 0x18) || (piStack_8[0xd] != 0)) ||
         ((ppuStack_11c = (undefined2 **)0x0, *(int *)((int)piStack_8 + 0x67f) == 0 &&
          ((local_dc[0][1] != *(int *)((int)piStack_8 + 0x3fb) ||
           (ppuStack_11c = (undefined2 **)0x0, local_dc[0][2] != *(int *)((int)piStack_8 + 0x3ff))))
          ))) {
        ppuStack_11c = (undefined2 **)0x1;
      }
      uStack_cc = lVar20;
      if ((int *)piStack_8[0xd] != (int *)0x0) {
        iVar5 = (**(code **)(*(int *)piStack_8[0xd] + 8))(local_dc[0],&piStack_110);
        if (iVar5 == 0) {
          pvVar9 = GlobalAlloc(0x42,(SIZE_T)piStack_110);
          pvStack_b0 = GlobalLock(pvVar9);
        }
      }
      goto LAB_5f808216;
    }
  }
  piStack_120 = (int *)FUN_5f809710(iVar5);
LAB_5f808aa0:
  if (pvStack_88 != (LPCVOID)0x0) {
    FUN_5f81ef70(pvStack_88,0);
  }
  pvVar12 = pvStack_b0;
  if (pvStack_b0 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(pvStack_b0);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(pvVar12);
    GlobalFree(pvVar9);
  }
  if (piStack_f0 != (int *)0x0) {
    (**(code **)(*piStack_f0 + 8))(piStack_f0);
    piStack_f0 = (int *)0x0;
  }
  if (local_e8 != (int *)0x0) {
    (**(code **)(*local_e8 + 8))(local_e8);
    local_e8 = (int *)0x0;
  }
  if (piStack_f4 != (int *)0x0) {
    (**(code **)(*piStack_f4 + 8))(piStack_f4);
    piStack_f4 = (int *)0x0;
  }
  if (piStack_b4 != (int *)0x0) {
    (**(code **)(*piStack_b4 + 8))(piStack_b4);
    piStack_b4 = (int *)0x0;
  }
  if (piStack_b8 != (int *)0x0) {
    (**(code **)(*piStack_b8 + 8))(piStack_b8);
    piStack_b8 = (int *)0x0;
  }
  if (piStack_ec != (int *)0x0) {
    (**(code **)(*piStack_ec + 8))(piStack_ec);
  }
  return piStack_120;
}


