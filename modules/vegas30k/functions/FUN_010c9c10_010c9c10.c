/* Module: vegas30k.dll
   Function: FUN_010c9c10
   Address: 010c9c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c9c10(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1b4;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined4 local_19c;
  undefined2 local_198;
  undefined2 local_196;
  undefined1 local_194;
  undefined1 local_193;
  undefined1 local_192;
  undefined1 local_191;
  undefined2 local_190;
  undefined1 local_18e;
  undefined1 local_18d;
  uint local_18c;
  int local_188;
  int local_184;
  int local_180;
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  code *pcStack_174;
  code *pcStack_170;
  code *pcStack_154;
  code *pcStack_150;
  code *pcStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  int local_11c;
  int local_118;
  int *local_114;
  int local_ec;
  int local_e8;
  undefined1 auStack_c0 [4];
  undefined1 local_bc [12];
  code *local_b0;
  undefined4 local_a8;
  code *local_a4;
  undefined4 local_98;
  code *pcStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_60;
  uint local_5c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  
  iVar2 = param_1[0x1b];
  local_1c0 = param_1[0x13];
  local_1c4 = param_1[7];
  iVar3 = param_1[0xf];
  uVar6 = _SfGetPixelType_4(param_1[0x11]);
  uVar7 = _SfGetPixelType_4(param_1[5]);
  iVar8 = _SfGetPixelBitsPerChannel_8(uVar6,local_17c);
  _SfGetPixelBitsPerChannel_8(uVar7,local_17c);
  iVar9 = param_1[0x23];
  local_1a8 = 4;
  local_19c = ftol();
  local_190 = ftol();
  local_198 = ftol();
  local_18e = ftol();
  local_196 = ftol();
  local_18d = ftol();
  local_1a0 = ftol();
  local_1a2 = ftol();
  local_1a4 = ftol();
  local_19e = ftol();
  local_192 = ftol();
  local_193 = ftol();
  local_194 = ftol();
  local_191 = ftol();
  iVar9 = _SfDibAlloc_28(iVar9 + 4,0x15,param_1[0xd],param_1[0xe],0,0,0);
  if (iVar9 < 0) {
    return iVar9;
  }
  piVar4 = *(int **)(param_1[0x23] + 4);
  uVar1 = *(ushort *)((int)piVar4 + 0xe);
  uVar10 = piVar4[1] * (uint)uVar1 + 0x1f;
  iVar9 = (int)((uVar10 & 0xffffffe0) + ((int)uVar10 >> 0x1f & 7U)) >> 3;
  if (piVar4[4] == 0) {
    if (((piVar4[8] != 0) || (uVar1 == 0)) || (8 < uVar1)) goto LAB_010c9e02;
    iVar11 = *piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar4[4] == 3) {
      piVar14 = piVar4 + 0xd;
      goto LAB_010c9e0c;
    }
LAB_010c9e02:
    iVar11 = *piVar4 + piVar4[8] * 4;
  }
  piVar14 = (int *)(iVar11 + (int)piVar4);
LAB_010c9e0c:
  _SfGetPixelType_4(piVar4);
  _SfXCHGGetFunctionPointers_20(uVar7,uVar6,param_1[0x22],local_bc,&local_1a8);
  local_30 = param_1[0x1c];
  local_2c = param_1[0x10];
  _SfXCHGGetFunctionPointers_20(uVar6,uVar7,param_1[0x22],local_178,&local_1a8);
  local_ec = param_1[0x10];
  local_e8 = local_ec;
  if (*param_1 == 0) {
    local_1cc = (int *)param_1[0x1a];
    iVar8 = param_1[0x19];
    if (0 < (int)local_1cc) {
      do {
        local_118 = param_1[0x14];
        local_60 = local_1c0;
        local_5c = 0;
        local_11c = local_1c4;
        local_1c8 = iVar8;
        local_114 = piVar14;
        if (0 < iVar8) {
          do {
            (*local_b0)(local_bc);
            (*pcStack_170)(local_17c);
            iStack_13c = iStack_88;
            uStack_138 = uStack_84;
            (*pcStack_150)(&local_180);
            *(ushort *)local_114 = -(ushort)(iStack_13c != 0);
            local_1c8 = local_1c8 + -1;
            local_114 = (int *)((int)local_114 + 2);
          } while (local_1c8 != 0);
        }
        local_1c0 = local_1c0 + iVar2;
        local_1c4 = local_1c4 + iVar3;
        piVar14 = (int *)((int)piVar14 + iVar9);
        local_1cc = (int *)((int)local_1cc + -1);
      } while (local_1cc != (int *)0x0);
      return 0;
    }
  }
  else {
    local_18c = param_1[1];
    local_180 = param_1[3];
    uVar10 = param_1[2];
    local_188 = param_1[4];
    local_184 = param_1[0xd];
    iVar11 = param_1[0xe];
    if (param_1[0x19] == 1) {
      local_a8 = local_98;
    }
    local_48 = iVar2;
    if (param_1[0x1a] == 1) {
      local_48 = 0;
    }
    iVar15 = 1;
    local_1cc = piVar14;
    if (0 < iVar11) {
      do {
        iVar13 = (uVar10 >> 0xe) * iVar2 + local_1c0;
        local_11c = local_1c4;
        local_118 = param_1[8];
        local_114 = local_1cc;
        if (iVar11 <= iVar15) {
          local_48 = 0;
        }
        local_40 = uVar10 & 0x3fff;
        uVar16 = local_18c;
        if (1 < local_184) {
          local_1b4 = local_184 + -1;
          do {
            local_5c = (uVar16 >> 0xe) * iVar8;
            local_60 = (local_5c >> 3) + iVar13;
            local_5c = local_5c & 7;
            local_44 = uVar16 & 0x3fff;
            (*local_a4)(local_bc);
            (*pcStack_8c)(auStack_c0);
            (*pcStack_174)(&local_180);
            pcStack_140 = pcStack_8c;
            iStack_13c = iStack_88;
            (*pcStack_154)(&local_184);
            *(ushort *)local_114 = -(ushort)(iStack_13c != 0);
            local_114 = (int *)((int)local_114 + 2);
            uVar16 = uVar16 + local_180;
            local_1b4 = local_1b4 + -1;
          } while (local_1b4 != 0);
        }
        uVar12 = (uVar16 >> 0xe) * iVar8;
        local_44 = uVar16 & 0x3fff;
        local_5c = uVar12 & 7;
        local_60 = (uVar12 >> 3) + iVar13;
        (*local_b0)(local_bc);
        (*pcStack_170)(local_17c);
        iStack_13c = iStack_88;
        uStack_138 = uStack_84;
        (*pcStack_150)(&local_180);
        *(ushort *)local_114 = -(ushort)(iStack_13c != 0);
        local_1c4 = local_1c4 + iVar3;
        uVar10 = uVar10 + local_188;
        local_1cc = (int *)((int)local_1cc + iVar9);
        bVar5 = iVar15 < iVar11;
        iVar15 = iVar15 + 1;
      } while (bVar5);
    }
  }
  return 0;
}


