/* Module: vegas30k.dll
   Function: FUN_010cb1b0
   Address: 010cb1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010cb1b0(int *param_1)

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
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int local_2b4;
  int *local_2b0;
  int local_2ac;
  int local_2a8;
  int local_29c;
  undefined4 local_280;
  undefined2 local_27c;
  undefined2 local_27a;
  undefined2 local_278;
  undefined2 local_276;
  undefined4 local_274;
  undefined2 local_270;
  undefined2 local_26e;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined1 local_269;
  undefined2 local_268;
  undefined1 local_266;
  undefined1 local_265;
  int local_264;
  uint local_260;
  int local_25c;
  undefined1 local_258 [4];
  int local_254;
  undefined1 local_250 [4];
  code *pcStack_24c;
  code *pcStack_248;
  code *pcStack_234;
  code *pcStack_230;
  undefined4 uStack_224;
  code *pcStack_220;
  undefined4 uStack_21c;
  code *pcStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined1 auStack_198 [4];
  code *local_194;
  code *pcStack_190;
  code *local_188;
  undefined4 local_180;
  code *local_17c;
  undefined4 local_170;
  code *pcStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int local_138;
  uint local_134;
  int local_120;
  uint local_11c;
  uint local_118;
  int local_108;
  int local_104;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [12];
  undefined1 local_d8 [24];
  code *pcStack_c0;
  code *pcStack_bc;
  undefined4 uStack_ac;
  code *pcStack_a8;
  undefined4 uStack_a4;
  code *pcStack_a0;
  undefined4 uStack_9c;
  int local_64;
  int local_4c;
  int local_48;
  int local_44;
  short sStack_40;
  short sStack_3c;
  undefined1 uStack_36;
  undefined1 uStack_32;
  undefined4 local_1c [7];
  
  iVar2 = param_1[0x1b];
  local_29c = param_1[0x13];
  local_2ac = param_1[7];
  iVar3 = param_1[0xf];
  uVar6 = _SfGetPixelType_4(param_1[0x11]);
  uVar7 = _SfGetPixelType_4(param_1[5]);
  iVar8 = _SfGetPixelBitsPerChannel_8(uVar6,local_258);
  iVar9 = _SfGetPixelBitsPerChannel_8(uVar7,local_258);
  local_280 = *(undefined4 *)param_1[0x23];
  piVar4 = (int *)((undefined4 *)param_1[0x23])[1];
  local_274 = ftol();
  local_268 = ftol();
  local_270 = ftol();
  local_266 = ftol();
  local_26e = ftol();
  local_265 = ftol();
  local_278 = ftol();
  local_27a = ftol();
  local_27c = ftol();
  local_276 = ftol();
  local_26a = ftol();
  local_26b = ftol();
  local_26c = ftol();
  local_269 = ftol();
  _SfXCHGGetFunctionPointers_20(uVar7,uVar6,param_1[0x22],&local_194,&local_280);
  local_108 = param_1[0x1c];
  local_104 = param_1[0x10];
  _SfXCHGGetFunctionPointers_20(uVar6,uVar7,param_1[0x22],local_250,&local_280);
  local_1c4 = param_1[0x10];
  local_1bc = param_1[0x1d];
  local_1c[0] = 3;
  local_1c0 = local_1c4;
  _SfXCHGGetFunctionPointers_20(uVar6,uVar7,param_1[0x22],local_d8,local_1c);
  local_4c = param_1[0x10];
  local_48 = param_1[0x1c];
  local_44 = param_1[0x1d];
  local_64 = iVar3;
  FUN_010c9c10(param_1);
  FUN_010ca4c0(param_1);
  if ((param_1[0x22] & 0xff0000U) == 0xff0000) {
    _SfDibCopy_36(param_1[5],0,0,0,piVar4,0,0,0,3);
    _SfDibFree_8(piVar4,0);
    return 0;
  }
  if (piVar4 == (int *)0x0) {
    return 0x80004003;
  }
  uVar1 = *(ushort *)((int)piVar4 + 0xe);
  uVar10 = piVar4[1] * (uint)uVar1 + 0x1f;
  iVar11 = (int)((uVar10 & 0xffffffe0) + ((int)uVar10 >> 0x1f & 7U)) >> 3;
  if (piVar4[4] == 0) {
    if (((piVar4[8] != 0) || (uVar1 == 0)) || (8 < uVar1)) goto LAB_010cb49b;
    iVar12 = *piVar4 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (piVar4[4] == 3) {
      local_2b0 = piVar4 + 0xd;
      goto LAB_010cb4a5;
    }
LAB_010cb49b:
    iVar12 = *piVar4 + piVar4[8] * 4;
  }
  local_2b0 = (int *)(iVar12 + (int)piVar4);
LAB_010cb4a5:
  if (*param_1 == 0) {
    local_2a8 = param_1[0x1a];
    iVar12 = param_1[0x19];
    if (0 < local_2a8) {
      do {
        local_1f0 = param_1[0x14];
        local_1e8 = param_1[8];
        local_138 = local_29c;
        local_134 = 0;
        local_1f4 = local_2ac;
        local_1ec = local_2ac;
        piVar14 = local_2b0;
        local_2b4 = iVar12;
        if (0 < iVar12) {
          do {
            if ((short)*piVar14 == 0) {
              local_134 = local_1f0 + iVar8 & 7;
              local_138 = local_138 + (local_1f0 + iVar8 >> 3);
              local_1f0 = iVar9 + local_1e8 & 7;
              local_1f4 = local_1ec + (iVar9 + local_1e8 >> 3);
              local_1ec = local_1f4;
              local_1e8 = local_1f0;
            }
            else {
              (*local_188)(&local_194);
              (*pcStack_248)(&local_254);
              uStack_210 = uStack_15c;
              uStack_214 = uStack_160;
              uStack_a4 = uStack_21c;
              pcStack_a0 = pcStack_218;
              (*pcStack_230)(local_258);
              if ((short)*piVar14 != -1) {
                pcStack_a0 = pcStack_220;
                uStack_9c = uStack_21c;
                sStack_3c = (short)*piVar14;
                uStack_32 = *(undefined1 *)((int)piVar14 + 1);
                (*pcStack_bc)(auStack_e4);
                pcStack_220 = pcStack_a8;
                uStack_21c = uStack_a4;
              }
              (*pcStack_190)(&local_25c);
            }
            local_2b4 = local_2b4 + -1;
            piVar14 = (int *)((int)piVar14 + 2);
          } while (local_2b4 != 0);
        }
        local_29c = local_29c + iVar2;
        local_2ac = local_2ac + iVar3;
        local_2b0 = (int *)((int)local_2b0 + iVar11);
        local_2a8 = local_2a8 + -1;
      } while (local_2a8 != 0);
    }
  }
  else {
    local_264 = param_1[3];
    local_260 = param_1[1];
    local_25c = param_1[0xd];
    uVar10 = param_1[2];
    local_254 = param_1[4];
    iVar12 = param_1[0xe];
    if (param_1[0x19] == 1) {
      local_180 = local_170;
    }
    local_120 = iVar2;
    if (param_1[0x1a] == 1) {
      local_120 = 0;
    }
    local_2b4 = 1;
    if (0 < iVar12) {
      do {
        iVar15 = (uVar10 >> 0xe) * iVar2 + local_29c;
        local_134 = param_1[0x14];
        local_1f0 = param_1[8];
        local_1f4 = local_2ac;
        local_1ec = local_2ac;
        if (iVar12 <= local_2b4) {
          local_120 = 0;
        }
        local_118 = uVar10 & 0x3fff;
        uVar13 = local_260;
        piVar14 = local_2b0;
        local_1e8 = local_1f0;
        local_138 = local_29c;
        if (1 < local_25c) {
          local_2a8 = local_25c + -1;
          do {
            if ((short)*piVar14 == 0) {
              local_1f0 = local_1e8 + iVar9 & 7;
              local_1f4 = local_1ec + (local_1e8 + iVar9 >> 3);
              local_1ec = local_1f4;
              local_1e8 = local_1f0;
            }
            else {
              local_134 = (uVar13 >> 0xe) * iVar8;
              local_11c = uVar13 & 0x3fff;
              local_138 = (local_134 >> 3) + iVar15;
              local_134 = local_134 & 7;
              (*local_17c)(&local_194);
              (*pcStack_164)(auStack_198);
              (*pcStack_24c)(local_258);
              uStack_214 = uStack_160;
              pcStack_218 = pcStack_164;
              pcStack_a8 = pcStack_220;
              uStack_a4 = uStack_21c;
              (*pcStack_234)(&local_25c);
              if ((short)*piVar14 != -1) {
                uStack_a4 = uStack_224;
                pcStack_a0 = pcStack_220;
                sStack_40 = (short)*piVar14;
                uStack_36 = *(undefined1 *)((int)piVar14 + 1);
                (*pcStack_c0)(auStack_e8);
                uStack_224 = uStack_ac;
                pcStack_220 = pcStack_a8;
              }
              (*local_194)(&local_260);
            }
            piVar14 = (int *)((int)piVar14 + 2);
            uVar13 = uVar13 + local_264;
            local_2a8 = local_2a8 + -1;
          } while (local_2a8 != 0);
        }
        if ((short)*piVar14 != 0) {
          local_11c = uVar13 & 0x3fff;
          local_134 = (uVar13 >> 0xe) * iVar8;
          local_138 = (local_134 >> 3) + iVar15;
          local_134 = local_134 & 7;
          (*local_188)(&local_194);
          (*pcStack_248)(&local_254);
          uStack_210 = uStack_15c;
          uStack_214 = uStack_160;
          uStack_a4 = uStack_21c;
          pcStack_a0 = pcStack_218;
          (*pcStack_230)(local_258);
          pcStack_a0 = pcStack_220;
          uStack_9c = uStack_21c;
          sStack_3c = (short)*piVar14;
          uStack_32 = *(undefined1 *)((int)piVar14 + 1);
          (*pcStack_bc)(auStack_e4);
          uStack_224 = uStack_ac;
          pcStack_220 = pcStack_a8;
          (*local_194)(&local_260);
        }
        local_2ac = local_2ac + iVar3;
        uVar10 = uVar10 + local_254;
        local_2b0 = (int *)((int)local_2b0 + iVar11);
        bVar5 = local_2b4 < iVar12;
        local_2b4 = local_2b4 + 1;
      } while (bVar5);
    }
  }
  _SfDibFree_8(piVar4,0);
  return 0;
}


