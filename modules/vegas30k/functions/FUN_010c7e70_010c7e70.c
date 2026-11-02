/* Module: vegas30k.dll
   Function: FUN_010c7e70
   Address: 010c7e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c7e70(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *unaff_EBP;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  int unaff_retaddr;
  byte *local_1e0;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1ac;
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined1 auStack_184 [4];
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 auStack_17c [4];
  undefined1 local_178 [8];
  code *pcStack_170;
  code *pcStack_158;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_ec;
  int local_e8;
  int local_e4;
  short sStack_d8;
  byte bStack_ce;
  undefined1 local_bc [4];
  code *pcStack_b8;
  code *local_b0;
  code *local_a8;
  code *local_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_60;
  uint local_5c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  
  iVar2 = param_1[0x1b];
  local_1c4 = param_1[0x13];
  local_1c8 = param_1[7];
  iVar3 = param_1[0xf];
  uVar9 = _SfGetPixelType_4(param_1[0x11]);
  uVar10 = _SfGetPixelType_4(param_1[5]);
  iVar11 = _SfGetPixelBitsPerChannel_8(uVar9,local_198);
  _SfGetPixelBitsPerChannel_8(uVar10,local_198);
  piVar4 = *(int **)(param_1[0x23] + 4);
  if (param_2 == 0) {
    local_194 = 3;
  }
  else {
    local_194 = 0xe;
    local_18c = ftol();
    local_18e = ftol();
    local_190 = ftol();
    local_17e = ftol();
    local_17f = ftol();
    local_180 = ftol();
  }
  _SfXCHGGetFunctionPointers_20(uVar10,uVar9,param_1[0x22],local_bc,&local_194);
  local_30 = param_1[0x1c];
  local_2c = param_1[0x10];
  _SfXCHGGetFunctionPointers_20(uVar9,uVar10,param_1[0x22],local_178,&local_194);
  local_ec = param_1[0x10];
  local_e4 = param_1[0x1d];
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar1 = *(ushort *)((int)piVar4 + 0xe);
  uVar12 = piVar4[1] * (uint)uVar1 + 0x1f;
  iVar13 = (int)((uVar12 & 0xffffffe0) + ((int)uVar12 >> 0x1f & 7U)) >> 3;
  if (piVar4[4] == 0) {
    if (((piVar4[8] != 0) || (uVar1 == 0)) || (8 < uVar1)) goto LAB_010c803a;
    iVar14 = *piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar4[4] == 3) {
      pbVar17 = (byte *)(piVar4 + 0xd);
      goto LAB_010c8044;
    }
LAB_010c803a:
    iVar14 = *piVar4 + piVar4[8] * 4;
  }
  pbVar17 = (byte *)(iVar14 + (int)piVar4);
LAB_010c8044:
  local_e8 = local_ec;
  _SfGetPixelType_4(piVar4);
  if (*param_1 == 0) {
    local_1cc = param_1[0x1a];
    iVar11 = param_1[0x19];
    if (0 < local_1cc) {
      do {
        local_118 = param_1[0x14];
        local_60 = local_1c4;
        local_110 = param_1[8];
        local_5c = 0;
        local_11c = local_1c8;
        local_114 = local_1c8;
        pbVar16 = pbVar17;
        pbVar20 = pbVar17;
        local_1d0 = iVar11;
        if (0 < iVar11) {
          do {
            (*local_b0)(local_bc);
            (*pcStack_170)(auStack_17c);
            uStack_13c = uStack_88;
            uVar9 = uStack_13c;
            uStack_138 = uStack_84;
            uVar10 = uStack_138;
            uStack_138._0_2_ = (undefined2)uStack_84;
            uStack_13c._0_3_ = (undefined3)uStack_88;
            if (local_1c8 == 0x14) {
              if (unaff_retaddr != 0) {
                if (local_1e0 == (byte *)0x0) {
                  uStack_13c = CONCAT13(*pbVar20,(undefined3)uStack_13c);
                  uVar9 = uStack_13c;
                }
                else {
                  uStack_138 = CONCAT22((ushort)*pbVar20 << 8,(undefined2)uStack_138);
                  uVar10 = uStack_138;
                }
              }
              uStack_138 = uVar10;
              uStack_13c = uVar9;
              sStack_d8 = (ushort)*pbVar20 << 8;
              bStack_ce = *pbVar20;
            }
            else {
              if (unaff_retaddr != 0) {
                if (local_1e0 == (byte *)0x0) {
                  uStack_13c = CONCAT13(pbVar16[1],(undefined3)uStack_13c);
                  uVar9 = uStack_13c;
                }
                else {
                  uStack_138 = CONCAT22(*(undefined2 *)pbVar16,(undefined2)uStack_138);
                  uVar10 = uStack_138;
                }
              }
              uStack_138 = uVar10;
              uStack_13c = uVar9;
              sStack_d8 = *(short *)pbVar16;
              bStack_ce = pbVar16[1];
            }
            (*pcStack_158)(&local_180);
            (*pcStack_b8)(auStack_184);
            local_1d0 = local_1d0 + -1;
            pbVar16 = pbVar16 + 2;
            pbVar20 = pbVar20 + 1;
          } while (local_1d0 != 0);
        }
        local_1c4 = local_1c4 + iVar2;
        local_1c8 = local_1c8 + iVar3;
        pbVar17 = pbVar17 + iVar13;
        local_1cc = local_1cc + -1;
      } while (local_1cc != 0);
      return 1;
    }
  }
  else {
    iVar14 = param_1[4];
    iVar5 = param_1[3];
    uVar12 = param_1[1];
    iVar6 = param_1[0xd];
    iVar7 = param_1[0xe];
    uVar19 = param_1[2];
    if (param_1[0x19] == 1) {
      local_a8 = local_98;
    }
    local_48 = iVar2;
    if (param_1[0x1a] == 1) {
      local_48 = 0;
    }
    local_1d0 = 1;
    if (0 < iVar7) {
      do {
        local_118 = param_1[8];
        local_11c = local_1c8;
        local_114 = local_1c8;
        iVar18 = (uVar19 >> 0xe) * iVar2 + local_1c4;
        if (iVar7 <= local_1d0) {
          local_48 = 0;
        }
        local_40 = uVar19 & 0x3fff;
        pbVar16 = pbVar17;
        uVar21 = uVar12;
        local_1e0 = pbVar17;
        local_110 = local_118;
        if (1 < iVar6) {
          local_1ac = iVar6 + -1;
          do {
            local_5c = (uVar21 >> 0xe) * iVar11;
            local_44 = uVar21 & 0x3fff;
            local_60 = (local_5c >> 3) + iVar18;
            local_5c = local_5c & 7;
            (*local_a8)(local_bc);
            (*pcStack_170)(auStack_17c);
            uStack_138 = uStack_84;
            uVar10 = uStack_138;
            uStack_13c = uStack_88;
            uVar9 = uStack_13c;
            uStack_138._0_2_ = (undefined2)uStack_84;
            uStack_13c._0_3_ = (undefined3)uStack_88;
            if (local_1c8 == 0x14) {
              if (unaff_retaddr != 0) {
                if (local_1e0 == (byte *)0x0) {
                  uStack_13c = CONCAT13(*unaff_EBP,(undefined3)uStack_13c);
                  uVar9 = uStack_13c;
                }
                else {
                  uStack_138 = CONCAT22((ushort)*unaff_EBP << 8,(undefined2)uStack_138);
                  uVar10 = uStack_138;
                }
              }
              uStack_138 = uVar10;
              uStack_13c = uVar9;
              sStack_d8 = (ushort)*unaff_EBP << 8;
              bStack_ce = *unaff_EBP;
            }
            else {
              if (unaff_retaddr != 0) {
                if (local_1e0 == (byte *)0x0) {
                  uStack_13c = CONCAT13(pbVar16[1],(undefined3)uStack_13c);
                  uVar9 = uStack_13c;
                }
                else {
                  uStack_138 = CONCAT22(*(undefined2 *)pbVar16,(undefined2)uStack_138);
                  uVar10 = uStack_138;
                }
              }
              uStack_138 = uVar10;
              uStack_13c = uVar9;
              sStack_d8 = *(short *)pbVar16;
              bStack_ce = pbVar16[1];
            }
            (*pcStack_158)(&local_180);
            (*pcStack_b8)(auStack_184);
            pbVar16 = pbVar16 + 2;
            local_1e0 = local_1e0 + 1;
            uVar21 = uVar21 + iVar5;
            local_1ac = local_1ac + -1;
          } while (local_1ac != 0);
        }
        uVar15 = (uVar21 >> 0xe) * iVar11;
        local_44 = uVar21 & 0x3fff;
        local_5c = uVar15 & 7;
        local_60 = (uVar15 >> 3) + iVar18;
        (*local_b0)(local_bc);
        (*pcStack_170)(auStack_17c);
        uStack_13c = uStack_88;
        uVar9 = uStack_13c;
        uStack_138 = uStack_84;
        uVar10 = uStack_138;
        uStack_138._0_2_ = (undefined2)uStack_84;
        uStack_13c._0_3_ = (undefined3)uStack_88;
        if (local_1c8 == 0x14) {
          if (unaff_retaddr != 0) {
            if (local_1e0 == (byte *)0x0) {
              uStack_13c = CONCAT13(*unaff_EBP,(undefined3)uStack_13c);
              uVar9 = uStack_13c;
            }
            else {
              uStack_138 = CONCAT22((ushort)*unaff_EBP << 8,(undefined2)uStack_138);
              uVar10 = uStack_138;
            }
          }
          uStack_138 = uVar10;
          uStack_13c = uVar9;
          sStack_d8 = (ushort)*unaff_EBP << 8;
          bStack_ce = *unaff_EBP;
        }
        else {
          if (unaff_retaddr != 0) {
            if (local_1e0 == (byte *)0x0) {
              uStack_13c = CONCAT13(pbVar16[1],(undefined3)uStack_13c);
              uVar9 = uStack_13c;
            }
            else {
              uStack_138 = CONCAT22(*(undefined2 *)pbVar16,(undefined2)uStack_138);
              uVar10 = uStack_138;
            }
          }
          uStack_138 = uVar10;
          uStack_13c = uVar9;
          sStack_d8 = *(short *)pbVar16;
          bStack_ce = pbVar16[1];
        }
        (*pcStack_158)(&local_180);
        (*pcStack_b8)(auStack_184);
        local_1c8 = local_1c8 + iVar3;
        pbVar17 = pbVar17 + iVar13;
        uVar19 = uVar19 + iVar14;
        bVar8 = local_1d0 < iVar7;
        local_1d0 = local_1d0 + 1;
      } while (bVar8);
    }
  }
  return 1;
}


