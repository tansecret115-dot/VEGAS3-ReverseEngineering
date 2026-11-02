/* Module: rmto3260.dll
   Function: FUN_662ec8a0
   Address: 662ec8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662ecce0) */
/* WARNING: Removing unreachable block (ram,0x662ecb68) */
/* WARNING: Removing unreachable block (ram,0x662ec8d3) */
/* WARNING: Removing unreachable block (ram,0x662ecaa6) */
/* WARNING: Removing unreachable block (ram,0x662ecc1f) */

int __fastcall FUN_662ec8a0(void *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 2;
  piVar6 = *(int **)((int)param_1 + 4);
  iVar9 = piVar6[5];
  if ((uint)piVar6[6] < iVar9 + 2U) {
    uVar13 = (**(code **)(*piVar6 + 0x24))(&local_8);
  }
  else {
    *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
    uVar13 = piVar6[5];
    piVar6[5] = iVar9 + 2U;
  }
  iVar9 = FUN_662e4d20(param_1,uVar13,2,local_8);
  if (iVar9 == 0x40040) {
    *(undefined4 *)((int)param_1 + 0x88) = 0;
    return 0x40040;
  }
  if (iVar9 != 0) goto LAB_662eca7e;
  piVar6 = *(int **)((int)param_1 + 4);
  iVar9 = 0;
  if (uVar13 == 0) {
LAB_662ec94a:
    local_8 = 8;
  }
  else {
    uVar14 = *(uint *)(piVar6[8] + 0xc);
    if ((uVar14 == uVar13) || ((uVar14 < uVar13 && (uVar13 < (uint)piVar6[6])))) {
      piVar6 = (int *)(piVar6[8] + 0x14);
      *piVar6 = *piVar6 + -1;
      goto LAB_662ec94a;
    }
    (**(code **)(*piVar6 + 0x28))(uVar13);
    local_8 = 8;
  }
  while (iVar9 == 0) {
    piVar6 = *(int **)((int)param_1 + 4);
    if ((int)local_8 < 0) {
      piVar6[0x10] = 0x16;
      puVar15 = (uint *)0x0;
    }
    else {
      iVar9 = piVar6[5];
      if ((uint)piVar6[6] < local_8 + iVar9) {
        puVar15 = (uint *)(**(code **)(*piVar6 + 0x24))(&local_8);
      }
      else {
        *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
        if (local_8 == 0) {
          puVar15 = *(uint **)(piVar6[8] + 0xc);
        }
        else {
          puVar15 = (uint *)piVar6[5];
          piVar6[5] = local_8 + iVar9;
        }
      }
    }
    iVar9 = FUN_662e4d20(param_1,(int)puVar15,8,local_8);
    if (iVar9 == 0x40040) goto LAB_662ecd4a;
    if ((iVar9 == 0) && (local_8 == 8)) {
      uVar13 = *puVar15;
      iVar9 = FUN_662f2c20(puVar15[1]);
      iVar10 = FUN_662f2c20(uVar13);
      if (iVar10 == 0x2e726134) break;
      piVar6 = *(int **)((int)param_1 + 4);
      iVar9 = (**(code **)(*piVar6 + 8))
                        (((piVar6[5] + *(int *)(piVar6[8] + 4)) - *(int *)(piVar6[8] + 0xc)) + iVar9
                         ,0);
      if (iVar9 == 0) {
        if (*(int *)(*(int *)((int)param_1 + 4) + 0x40) == 0x40040) {
          *(undefined4 *)((int)param_1 + 0x88) = 0;
          return 0;
        }
        iVar9 = -1;
      }
      else {
        iVar9 = 0;
      }
      piVar6 = *(int **)((int)param_1 + 4);
      if (puVar15 != (uint *)0x0) {
        puVar7 = *(uint **)(piVar6[8] + 0xc);
        if ((puVar7 == puVar15) || ((puVar7 < puVar15 && (puVar15 < (uint *)piVar6[6])))) {
          piVar6 = (int *)(piVar6[8] + 0x14);
          *piVar6 = *piVar6 + -1;
        }
        else {
          (**(code **)(*piVar6 + 0x28))(puVar15);
        }
      }
    }
    else {
      iVar9 = -0x7ffbf03e;
    }
  }
LAB_662eca7e:
  piVar6 = *(int **)((int)param_1 + 4);
  local_8 = 2;
  iVar9 = piVar6[5];
  if ((uint)piVar6[6] < iVar9 + 2U) {
    puVar11 = (undefined1 *)(**(code **)(*piVar6 + 0x24))(&local_8);
  }
  else {
    *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
    puVar11 = (undefined1 *)piVar6[5];
    piVar6[5] = iVar9 + 2U;
  }
  local_c = FUN_662e4d20(param_1,(int)puVar11,2,local_8);
  if (local_c == 0x40040) {
    *(undefined4 *)((int)param_1 + 0x88) = 0;
    return 0x40040;
  }
  if (local_c == 0) {
    piVar6 = *(int **)((int)param_1 + 4);
    *(ushort *)((int)param_1 + 0xd8) = CONCAT11(*puVar11,puVar11[1]);
    if (puVar11 != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(piVar6[8] + 0xc);
      if ((puVar8 == puVar11) || ((puVar8 < puVar11 && (puVar11 < (undefined1 *)piVar6[6])))) {
        piVar6 = (int *)(piVar6[8] + 0x14);
        *piVar6 = *piVar6 + -1;
      }
      else {
        (**(code **)(*piVar6 + 0x28))(puVar11);
      }
    }
    if (*(short *)((int)param_1 + 0xd8) != 4) {
      local_c = -0x7ffbff7f;
    }
    if (local_c == 0) {
      piVar6 = *(int **)((int)param_1 + 4);
      local_8 = 2;
      iVar9 = piVar6[5];
      if ((uint)piVar6[6] < iVar9 + 2U) {
        puVar11 = (undefined1 *)(**(code **)(*piVar6 + 0x24))(&local_8);
      }
      else {
        *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
        puVar11 = (undefined1 *)piVar6[5];
        piVar6[5] = iVar9 + 2U;
      }
      local_c = FUN_662e4d20(param_1,(int)puVar11,2,local_8);
      if (local_c == 0x40040) {
        *(undefined4 *)((int)param_1 + 0x88) = 0;
        return 0x40040;
      }
      if (local_c == 0) {
        piVar6 = *(int **)((int)param_1 + 4);
        uVar2 = *puVar11;
        uVar3 = puVar11[1];
        if (puVar11 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)(piVar6[8] + 0xc);
          if ((puVar8 == puVar11) || ((puVar8 < puVar11 && (puVar11 < (undefined1 *)piVar6[6])))) {
            piVar6 = (int *)(piVar6[8] + 0x14);
            *piVar6 = *piVar6 + -1;
          }
          else {
            (**(code **)(*piVar6 + 0x28))(puVar11);
          }
        }
        if (CONCAT11(uVar2,uVar3) != 0) {
          local_c = -0x7ffbff7f;
        }
        if (local_c == 0) {
          piVar6 = *(int **)((int)param_1 + 4);
          local_8 = 2;
          iVar9 = piVar6[5];
          if ((uint)piVar6[6] < iVar9 + 2U) {
            puVar11 = (undefined1 *)(**(code **)(*piVar6 + 0x24))(&local_8);
          }
          else {
            *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
            puVar11 = (undefined1 *)piVar6[5];
            piVar6[5] = iVar9 + 2U;
          }
          local_c = FUN_662e4d20(param_1,(int)puVar11,2,local_8);
          if (local_c == 0x40040) {
            *(undefined4 *)((int)param_1 + 0x88) = 0;
            return 0x40040;
          }
        }
      }
    }
  }
  local_10 = 0;
  if (local_c == 0) {
    piVar6 = *(int **)((int)param_1 + 4);
    *(ushort *)((int)param_1 + 0x14a) = CONCAT11(*puVar11,puVar11[1]);
    if (puVar11 != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(piVar6[8] + 0xc);
      if ((puVar8 == puVar11) || ((puVar8 < puVar11 && (puVar11 < (undefined1 *)piVar6[6])))) {
        piVar6 = (int *)(piVar6[8] + 0x14);
        *piVar6 = *piVar6 + -1;
      }
      else {
        (**(code **)(*piVar6 + 0x28))(puVar11);
      }
    }
    piVar6 = *(int **)((int)param_1 + 4);
    *(short *)((int)param_1 + 0x14a) = *(short *)((int)param_1 + 0x14a) + 0x10;
    local_10 = (piVar6[5] - *(int *)(piVar6[8] + 0xc)) + *(int *)(piVar6[8] + 4);
    (**(code **)(*piVar6 + 8))(0,0);
    piVar6 = *(int **)((int)param_1 + 4);
    local_8 = (uint)*(ushort *)((int)param_1 + 0x14a);
    iVar9 = piVar6[5];
    if ((uint)piVar6[6] < local_8 + iVar9) {
      iVar10 = (**(code **)(*piVar6 + 0x24))(&local_8);
    }
    else {
      *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
      if (local_8 == 0) {
        iVar10 = *(int *)(piVar6[8] + 0xc);
      }
      else {
        iVar10 = piVar6[5];
        piVar6[5] = local_8 + iVar9;
      }
    }
    *(int *)((int)param_1 + 0x14c) = iVar10;
    local_c = FUN_662e4d20(param_1,iVar10,(uint)*(ushort *)((int)param_1 + 0x14a),local_8);
    if (local_c == 0x40040) {
LAB_662ecd4a:
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      return 0x40040;
    }
    if (local_c == 0) {
      uVar5 = *(ushort *)(local_10 + *(int *)((int)param_1 + 0x14c));
      *(ushort *)((int)param_1 + 0x103) = uVar5;
      iVar9 = FUN_662f2bd0(this,uVar5);
      *(short *)((int)param_1 + 0x103) = (short)iVar9;
      uVar13 = *(uint *)(local_10 + 2 + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x105) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x105) = iVar9;
      uVar13 = *(uint *)(local_10 + 6 + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x111) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x111) = iVar9;
      uVar13 = *(uint *)(local_10 + 10 + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x109) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x109) = iVar9;
      uVar13 = *(uint *)(local_10 + 0xe + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x10d) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x10d) = iVar9;
      uVar5 = *(ushort *)(local_10 + 0x12 + *(int *)((int)param_1 + 0x14c));
      *(ushort *)((int)param_1 + 0x115) = uVar5;
      iVar9 = FUN_662f2bd0(this_00,uVar5);
      *(short *)((int)param_1 + 0x115) = (short)iVar9;
      uVar5 = *(ushort *)(local_10 + 0x14 + *(int *)((int)param_1 + 0x14c));
      *(ushort *)((int)param_1 + 0xf7) = uVar5;
      iVar9 = FUN_662f2bd0(this_01,uVar5);
      *(short *)((int)param_1 + 0xf7) = (short)iVar9;
      uVar13 = *(uint *)(local_10 + 0x16 + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x117) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x117) = iVar9;
      uVar13 = *(uint *)(local_10 + 0x1a + *(int *)((int)param_1 + 0x14c));
      *(uint *)((int)param_1 + 0x11b) = uVar13;
      iVar9 = FUN_662f2c20(uVar13);
      *(int *)((int)param_1 + 0x11b) = iVar9;
      uVar5 = *(ushort *)(local_10 + 0x1e + *(int *)((int)param_1 + 0x14c));
      *(ushort *)((int)param_1 + 0x11f) = uVar5;
      iVar9 = FUN_662f2bd0(this_02,uVar5);
      *(short *)((int)param_1 + 0x11f) = (short)iVar9;
      uVar5 = *(ushort *)(local_10 + 0x20 + (int)*(void **)((int)param_1 + 0x14c));
      *(ushort *)((int)param_1 + 0x121) = uVar5;
      iVar9 = FUN_662f2bd0(*(void **)((int)param_1 + 0x14c),uVar5);
      *(short *)((int)param_1 + 0x121) = (short)iVar9;
      iVar9 = *(int *)((int)param_1 + 0x14c);
      puVar12 = (undefined4 *)(local_10 + 0x22 + iVar9);
      *(undefined4 *)((int)param_1 + 0x123) = *puVar12;
      *(undefined1 *)((int)param_1 + 0x127) = *(undefined1 *)(puVar12 + 1);
      puVar12 = (undefined4 *)(local_10 + 0x27 + iVar9);
      *(undefined4 *)((int)param_1 + 0x128) = *puVar12;
      iVar10 = local_10 + 0x2f;
      *(undefined1 *)((int)param_1 + 300) = *(undefined1 *)(puVar12 + 1);
      *(undefined1 *)((int)param_1 + 0x12d) = *(undefined1 *)(local_10 + 0x2c + iVar9);
      *(undefined1 *)((int)param_1 + 0x12e) = *(undefined1 *)(local_10 + 0x2d + iVar9);
      *(undefined1 *)((int)param_1 + 0x12f) = *(undefined1 *)(local_10 + 0x2e + iVar9);
      local_10 = local_10 + 0x30;
      bVar4 = *(byte *)(iVar9 + iVar10);
      *(byte *)((int)param_1 + 0x136) = bVar4;
      puVar12 = operator_new(bVar4 + 1);
      *(undefined4 **)((int)param_1 + 0x137) = puVar12;
      if (puVar12 == (undefined4 *)0x0) {
        local_c = -0x7ff8fff2;
      }
      else {
        bVar4 = *(byte *)((int)param_1 + 0x136);
        puVar16 = (undefined4 *)(local_10 + *(int *)((int)param_1 + 0x14c));
        for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar12 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar13 = bVar4 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x136) + *(int *)((int)param_1 + 0x137)) = 0;
      }
    }
  }
  if (local_c == 0) {
    local_10 = local_10 + (uint)*(byte *)((int)param_1 + 0x136);
    iVar9 = local_10 + 1;
    bVar4 = *(byte *)(local_10 + *(int *)((int)param_1 + 0x14c));
    *(byte *)((int)param_1 + 0x13b) = bVar4;
    puVar12 = operator_new(bVar4 + 1);
    *(undefined4 **)((int)param_1 + 0x13c) = puVar12;
    if (puVar12 == (undefined4 *)0x0) {
      local_c = -0x7ff8fff2;
    }
    else {
      bVar4 = *(byte *)((int)param_1 + 0x13b);
      puVar16 = (undefined4 *)(iVar9 + *(int *)((int)param_1 + 0x14c));
      for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar12 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar13 = bVar4 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar16;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x13b) + *(int *)((int)param_1 + 0x13c)) = 0;
    }
    if (local_c == 0) {
      iVar9 = iVar9 + (uint)*(byte *)((int)param_1 + 0x13b);
      iVar10 = iVar9 + 1;
      bVar4 = *(byte *)(iVar9 + *(int *)((int)param_1 + 0x14c));
      *(byte *)((int)param_1 + 0x140) = bVar4;
      puVar12 = operator_new(bVar4 + 1);
      *(undefined4 **)((int)param_1 + 0x141) = puVar12;
      if (puVar12 == (undefined4 *)0x0) {
        local_c = -0x7ff8fff2;
      }
      else {
        bVar4 = *(byte *)((int)param_1 + 0x140);
        puVar16 = (undefined4 *)(iVar10 + *(int *)((int)param_1 + 0x14c));
        for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar12 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar13 = bVar4 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x140) + *(int *)((int)param_1 + 0x141)) = 0;
      }
      if (local_c == 0) {
        iVar10 = iVar10 + (uint)*(byte *)((int)param_1 + 0x140);
        bVar4 = *(byte *)(iVar10 + *(int *)((int)param_1 + 0x14c));
        *(byte *)((int)param_1 + 0x145) = bVar4;
        puVar12 = operator_new(bVar4 + 1);
        *(undefined4 **)((int)param_1 + 0x146) = puVar12;
        if (puVar12 == (undefined4 *)0x0) {
          local_c = -0x7ff8fff2;
        }
        else {
          bVar4 = *(byte *)((int)param_1 + 0x145);
          puVar16 = (undefined4 *)(iVar10 + 1 + *(int *)((int)param_1 + 0x14c));
          for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar12 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar13 = bVar4 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          *(undefined1 *)((uint)*(byte *)((int)param_1 + 0x145) + *(int *)((int)param_1 + 0x146)) =
               0;
        }
        if (local_c == 0) {
          if (*(ushort *)((int)param_1 + 0xf7) != 0) {
            *(uint *)((int)param_1 + 0x130) =
                 *(uint *)((int)param_1 + 0x111) / (uint)*(ushort *)((int)param_1 + 0xf7);
          }
          uVar13 = 0xffffffff;
          pcVar17 = (char *)((int)param_1 + 0x129);
          do {
            pcVar18 = pcVar17;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar18 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar1 != '\0');
          uVar13 = ~uVar13;
          pcVar17 = pcVar18 + -uVar13;
          pcVar18 = (char *)((int)param_1 + 0xda);
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar18 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(uint *)((int)param_1 + 0xe3) =
               (uint)*(ushort *)((int)param_1 + 0x115) * (uint)*(ushort *)((int)param_1 + 0xf7);
          iVar9 = *(int *)(*(int *)((int)param_1 + 4) + 0x20);
          *(int *)((int)param_1 + 0xdf) =
               (*(int *)(*(int *)((int)param_1 + 4) + 0x14) - *(int *)(iVar9 + 0xc)) +
               *(int *)(iVar9 + 4);
        }
      }
    }
  }
  return local_c;
}


