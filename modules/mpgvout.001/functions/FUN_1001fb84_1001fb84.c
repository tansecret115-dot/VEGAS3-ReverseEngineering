/* Module: mpgvout.001
   Function: FUN_1001fb84
   Address: 1001fb84
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1001fb84(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int iStack_7d0;
  int iStack_7cc;
  int local_7bc;
  int local_7b8;
  int local_7b0;
  uint local_7ac;
  int local_7a8;
  int local_7a4;
  uint local_7a0 [13];
  uint local_76c [4];
  int local_75c;
  int local_758;
  int local_73c [4];
  int aiStack_72c [8];
  int local_70c [4];
  int aiStack_6fc [8];
  undefined1 *local_6dc [4];
  undefined1 *local_6cc;
  undefined1 *local_6c8;
  undefined1 *local_6c4;
  undefined1 *local_6c0;
  undefined1 *local_6bc;
  undefined1 *local_6b8;
  undefined1 *local_6b4;
  undefined1 *local_6b0;
  undefined1 local_6ac [12];
  undefined1 auStack_6a0 [128];
  undefined1 auStack_620 [128];
  undefined1 auStack_5a0 [128];
  undefined1 auStack_520 [128];
  undefined1 auStack_4a0 [128];
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [128];
  undefined1 auStack_320 [128];
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [180];
  undefined4 local_6c [4];
  int local_5c [12];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar13 = &DAT_1001fb30;
  piVar15 = local_5c;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar15 = *piVar13;
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
  }
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  iVar9 = *(int *)(param_1 + 0x5bc);
  local_6dc[0] = auStack_6a0;
  local_6dc[1] = auStack_620;
  local_6dc[2] = auStack_5a0;
  local_6dc[3] = auStack_520;
  local_6cc = auStack_4a0;
  local_6c8 = auStack_420;
  local_6c4 = auStack_3a0;
  local_6c0 = auStack_320;
  local_6bc = auStack_2a0;
  local_6b8 = auStack_220;
  local_6b4 = auStack_1a0;
  local_6b0 = auStack_120;
  memset(local_6ac,0,0x640);
  iVar6 = FUN_1001134c(*(int *)(param_1 + 0x24),0x100);
  if (iVar6 == 0) {
    FUN_1001e040(param_1);
    FUN_1002519c(param_1);
    FUN_1001c144(param_1);
    uVar14 = (*(int **)(param_1 + 0x24))[0xb];
    if (uVar14 != 8) {
      FUN_10011440(*(int **)(param_1 + 0x24),0,uVar14);
    }
    *(uint *)(param_1 + 0x5e0) =
         *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
         *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
    local_7a8 = 0;
    local_7b0 = 1;
    local_7a0[0] = 0;
    if (0 < *(int *)(param_1 + 0x570)) {
      do {
        local_7a4 = 0;
        if (0 < *(int *)(param_1 + 0x560)) {
          do {
            local_76c[0] = local_7a8 * 0x40 * *(int *)(param_1 + 0x54c);
            puVar1 = (undefined1 *)(*(int *)(param_1 + 0x6a4) + local_7a8 * 0x3c);
            if (*(int *)(param_1 + 0x9c) == 3) {
              local_7b8 = local_7a4 << 4;
            }
            else {
              local_7b8 = local_7a4 << 3;
            }
            if (*(int *)(param_1 + 0x9c) == 1) {
              local_7bc = local_7a0[0] * 8;
            }
            else {
              local_7bc = local_7a0[0] << 4;
            }
            bVar5 = puVar1[1];
            local_7ac = (uint)(char)bVar5;
            local_73c[0] = *(int *)(param_1 + 0x568);
            local_70c[0] = local_73c[0] * 0x10 * local_7a0[0] + local_7a4 * 0x10;
            if (*(int *)(param_1 + 0x590) == 2) {
              local_70c[0] = local_70c[0] + *(int *)(param_1 + 0x550);
            }
            local_70c[1] = local_70c[0] + 8;
            local_70c[2] = local_70c[0] + local_73c[0] * 8;
            local_70c[3] = local_70c[2] + 8;
            local_76c[2] = local_76c[0] + 0x80;
            local_76c[1] = local_76c[0] | 8;
            local_76c[3] = local_76c[0] + 0x88;
            local_75c = local_76c[0] + 0x100;
            local_7a0[4] = 0x10;
            local_7a0[3] = 0x10;
            local_7a0[2] = 0x10;
            local_7a0[1] = 0x10;
            local_758 = local_76c[0] + 0x140;
            iVar6 = *(int *)(param_1 + 0x54c);
            if (4 < iVar6) {
              iVar12 = *(int *)(param_1 + 0x558);
              iVar10 = 0x10;
              uVar14 = 4;
              do {
                uVar8 = uVar14 & 2;
                uVar11 = uVar14 & 8;
                uVar14 = uVar14 + 1;
                *(uint *)((int)local_70c + iVar10) =
                     uVar11 + local_7b8 + (((int)uVar8 >> 1) + local_7bc) * iVar12;
                *(int *)((int)local_73c + iVar10) = iVar12 * 2;
                iVar10 = iVar10 + 4;
              } while ((int)uVar14 < iVar6);
            }
            local_7a0[6] = 8;
            local_7a0[5] = 8;
            local_73c[1] = local_73c[0];
            local_73c[2] = local_73c[0];
            local_73c[3] = local_73c[0];
            FUN_10003414();
            iVar6 = FUN_1001134c(*(int *)(param_1 + 0x24),0x400);
            if (iVar6 != 0) {
              (**(code **)(param_1 + 0xc))("Unable to write to output file.");
              return 0;
            }
            if ((local_7a4 == 0) && ((local_7a0[0] == 0 || (1 < *(int *)(param_1 + 0x28))))) {
              if ((*(int *)(param_1 + 0x28) < 2) || (*(int *)(param_1 + 0x36c) < 0xaf1)) {
                (**(code **)(*(int *)(param_1 + 0x24) + 0xc))
                          (*(int *)(param_1 + 0x24),local_7a0[0] + 0x101,local_7a0);
              }
              else {
                (**(code **)(*(int *)(param_1 + 0x24) + 0xc))
                          (*(int *)(param_1 + 0x24),(local_7a0[0] & 0x7f) + 0x101,local_7a0);
                FUN_10011440(*(int **)(param_1 + 0x24),(int)local_7a0[0] >> 7,3);
              }
              uVar14 = DAT_10033760;
              if (*(int *)(param_1 + 0x5c8) == 0) {
                uVar14 = 4;
              }
              FUN_10011440(*(int **)(param_1 + 0x24),uVar14,5);
              FUN_10011440(*(int **)(param_1 + 0x24),0,1);
              local_6c[0] = 0;
              local_6c[1] = 0;
              local_6c[2] = 0;
              uStack_18 = 0;
              uStack_1c = 0;
              iStack_28 = 0;
              iStack_2c = 0;
              uStack_10 = 0;
              uStack_14 = 0;
              iStack_20 = 0;
              iStack_24 = 0;
              local_7b0 = 1;
            }
            *(undefined4 *)(puVar1 + 8) = 0;
            if ((local_7a4 == 0) || (local_7a4 == *(int *)(param_1 + 0x560) + -1)) {
LAB_10020380:
              *puVar1 = 0;
              if (iVar9 == 2) {
                local_7ac = local_7ac | 8;
              }
              iVar12 = 0;
              FUN_1002186c(param_1,local_7b0,local_7ac,(int)puVar1,8,0,(int)&iStack_2c);
              local_7b0 = 1;
              iVar6 = *(int *)(param_1 + 0x54c);
              if (0 < iVar6) {
                do {
                  iVar10 = iVar12 + 1;
                  if ((0 >> ((char)iVar6 - (char)iVar10 & 0x1fU) & 1U) != 0) {
                    printf("Just error(1), can\'t be here!\n");
                    if ((local_7ac & 1) == 0) {
                      (**(code **)(param_1 + 0x4e0))
                                (param_1,local_6dc[iVar12],*(undefined4 *)(param_1 + 0x24));
                    }
                    else {
                      (**(code **)(param_1 + 0x4dc))
                                (param_1,local_6dc[iVar12],*(undefined4 *)(param_1 + 0x24),
                                 local_6c + local_5c[iVar12],local_5c[iVar12]);
                    }
                  }
                  iVar6 = *(int *)(param_1 + 0x54c);
                  iVar12 = iVar10;
                } while (iVar10 < iVar6);
              }
              if ((((byte)local_7ac ^ 1) & 1) != 0) {
                local_6c[0] = 0;
                local_6c[1] = 0;
                local_6c[2] = 0;
              }
              if (((local_7ac & 1) != 0) || ((iVar9 == 2 && ((local_7ac & 8) == 0)))) {
                uStack_18 = 0;
                uStack_1c = 0;
                iStack_28 = 0;
                iStack_2c = 0;
                uStack_10 = 0;
                uStack_14 = 0;
                iStack_20 = 0;
                iStack_24 = 0;
              }
              if (*(int *)(param_1 + 0x594) != 0) {
                printf("Just error(1), can\'t be here!\n");
              }
            }
            else if ((iVar9 == 2) && ((local_7ac & 8) == 0)) {
              local_6c[0] = 0;
              local_6c[1] = 0;
              local_6c[2] = 0;
              uStack_18 = 0;
              uStack_1c = 0;
              iStack_28 = 0;
              iStack_2c = 0;
              uStack_10 = 0;
              uStack_14 = 0;
              iStack_20 = 0;
              iStack_24 = 0;
              *puVar1 = 1;
              local_7b0 = local_7b0 + 1;
            }
            else {
              if ((iVar9 != 3) ||
                 ((((((iVar6 = *(int *)(param_1 + 0x590), iVar6 != 3 || (puVar1[2] != '\x02')) ||
                     (((puVar1[-0x3b] ^ bVar5) & 0xc) != 0)) ||
                    (((local_7ac & 8) != 0 &&
                     ((iStack_2c != *(short *)(puVar1 + 0xc) ||
                      (iStack_28 != *(short *)(puVar1 + 0xe))))))) ||
                   (((local_7ac & 4) != 0 &&
                    ((iStack_24 != *(short *)(puVar1 + 0x10) ||
                     (iStack_20 != *(short *)(puVar1 + 0x12))))))) &&
                  ((((iVar6 == 3 ||
                     ((puVar1[2] != '\x01' || (((puVar1[-0x3b] ^ bVar5) & 0xc) != 0)))) ||
                    (((local_7ac & 8) != 0 &&
                     (((iStack_2c != *(short *)(puVar1 + 0xc) ||
                       (iStack_28 != *(short *)(puVar1 + 0xe))) ||
                      (*(ushort *)(puVar1 + 0x1c) != (ushort)(iVar6 == 2))))))) ||
                   (((local_7ac & 4) != 0 &&
                    (((iStack_24 != *(short *)(puVar1 + 0x10) ||
                      (iStack_20 != *(short *)(puVar1 + 0x12))) ||
                     (*(ushort *)(puVar1 + 0x1e) != (ushort)(iVar6 == 2)))))))))))
              goto LAB_10020380;
              *puVar1 = 1;
              local_7b0 = local_7b0 + 1;
            }
            iStack_7cc = local_7a4 + 1;
            iStack_7d0 = local_7a8 + 1;
            puVar1[1] = (byte)local_7ac;
            if (*(int *)(param_1 + 0x594) != 0) {
              if ((local_7ac & 1) == 0) {
                if (0 < *(int *)(param_1 + 0x54c)) {
                  iVar6 = 0;
                  iVar12 = 0;
                  do {
                    piVar15 = (int *)((int)local_5c + iVar6);
                    iVar12 = iVar12 + 1;
                    puVar2 = (undefined4 *)((int)local_6dc + iVar6);
                    puVar4 = (undefined4 *)((int)local_73c + iVar6);
                    piVar3 = (int *)((int)local_70c + iVar6);
                    iVar10 = iVar6 + 4;
                    piVar13 = (int *)((int)local_76c + iVar6);
                    iVar6 = iVar6 + 4;
                    (**(code **)(param_1 + 0x4e8))
                              (*piVar13 + *param_4,*(undefined4 *)((int)local_7a0 + iVar10),
                               *piVar3 + *(int *)(param_3 + *piVar15 * 4),*puVar4,*puVar2);
                  } while (iVar12 < *(int *)(param_1 + 0x54c));
                }
              }
              else {
                iVar6 = 0;
                if (0 < *(int *)(param_1 + 0x54c)) {
                  iVar12 = 0;
                  do {
                    piVar13 = (int *)((int)local_5c + iVar12);
                    iVar6 = iVar6 + 1;
                    puVar2 = (undefined4 *)((int)local_6dc + iVar12);
                    piVar15 = (int *)((int)local_73c + iVar12);
                    piVar3 = (int *)((int)local_70c + iVar12);
                    iVar12 = iVar12 + 4;
                    FUN_10001050((undefined8 *)(*piVar3 + *(int *)(param_3 + *piVar13 * 4)),*piVar15
                                 ,(undefined8 *)*puVar2);
                  } while (iVar6 < *(int *)(param_1 + 0x54c));
                }
              }
            }
            local_7a8 = iStack_7d0;
            local_7a4 = iStack_7cc;
          } while (iStack_7cc < *(int *)(param_1 + 0x560));
        }
        local_7a0[0] = local_7a0[0] + 1;
      } while ((int)local_7a0[0] < *(int *)(param_1 + 0x570));
    }
    FUN_10003414();
    uVar14 = (*(int **)(param_1 + 0x24))[0xb];
    if (uVar14 != 8) {
      FUN_10011440(*(int **)(param_1 + 0x24),0,uVar14);
    }
    FUN_1002474c(param_1);
    uVar7 = 1;
  }
  else {
    (**(code **)(param_1 + 0xc))("Unable to write to output file.");
    uVar7 = 0;
  }
  return uVar7;
}


