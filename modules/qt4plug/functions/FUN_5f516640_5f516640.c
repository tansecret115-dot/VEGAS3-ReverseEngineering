/* Module: qt4plug.dll
   Function: FUN_5f516640
   Address: 5f516640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f516640(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                int param_6,uint param_7)

{
  ushort uVar1;
  LPVOID pMem;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  HGLOBAL pvVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  int local_1f0;
  int local_1ec;
  int local_1e4;
  undefined4 local_1e0;
  byte local_1dc;
  uint local_1cc;
  double local_1c4;
  uint local_1b8;
  uint local_1a4 [4];
  undefined4 local_194;
  uint local_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 local_174;
  LPVOID local_168;
  double local_164;
  uint local_15c;
  int local_158;
  undefined4 local_154;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_124;
  undefined2 local_11c;
  ushort uStack_11a;
  ushort uStack_118;
  short *local_110;
  uint local_10c;
  uint local_104;
  int local_100;
  uint local_fc;
  undefined2 local_f4;
  int local_f2;
  int local_e8;
  undefined4 *local_e4;
  int local_e0;
  uint local_dc [3];
  int local_d0;
  undefined4 local_cc;
  undefined4 *local_c8 [2];
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int iStack_b4;
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_98 [8];
  short local_76;
  uint local_6c;
  undefined1 local_50 [8];
  uint local_48 [7];
  int local_2c;
  undefined1 local_24 [4];
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596418;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffdd8;
  ExceptionList = &local_14;
  FUN_5f514310();
  local_ac = FUN_5f5782f0();
  iVar3 = FUN_5f5782f0();
  uVar9 = 0x72707a61;
  local_124 = 0x72707a61;
  local_11c = 0;
  uStack_11a = 0x200;
  uStack_118 = 0;
  if ((iVar3 != 0) && (sVar2 = FUN_5f5781b0(), sVar2 == 0)) {
    uVar9 = (local_fc & 0xff0000 | local_fc >> 0x10) >> 8 |
            (local_fc << 0x10 | local_fc & 0xff00) << 8;
    local_11c = CONCAT11((char)local_f4,(char)((ushort)local_f4 >> 8));
    uVar1 = (ushort)((uint)local_f2 >> 8);
    uStack_11a = uVar1 & 0xff00 | (ushort)(byte)((uint)local_f2 >> 0x18);
    uStack_118 = (ushort)((uint)(local_f2 << 0x10) >> 8) | uVar1 & 0xff;
    local_124 = uVar9;
  }
  local_110 = (short *)0x0;
  FUN_5f580a00();
  iVar3 = (int)*local_110;
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_2c = 0;
  sVar2 = FUN_5f5808e0();
  if (sVar2 != 0) {
    if (local_110 != (short *)0x0) {
      FUN_5f580ba0();
    }
    ExceptionList = local_14;
    return -0x7ffb1fef;
  }
  puVar5 = local_98;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_5f5842a0();
  local_104 = 0x14;
  local_10c = 0x200;
  iVar3 = FUN_5f5782f0();
  if ((iVar3 != 0) && (sVar2 = FUN_5f5781b0(), sVar2 == 0)) {
    local_104 = (local_a0 & 0xff0000 | local_a0 >> 0x10) >> 8 |
                (local_a0 << 0x10 | local_a0 & 0xff00) << 8;
    local_10c = (local_a8 & 0xff0000 | local_a8 >> 0x10) >> 8 |
                (local_a8 << 0x10 | local_a8 & 0xff00) << 8;
    if ((local_10c != 0) && ((local_104 == 0 && (uVar9 == 0x63766964)))) {
      local_104 = 0x7fffffff;
    }
  }
  piVar4 = (int *)FUN_5f57aed0();
  if (((uint)((int)local_76 % 10) < 3) || ((uVar9 != 0x53565131 && (uVar9 != 0x53565133)))) {
    local_d0 = 0;
  }
  else {
    local_d0 = 1;
  }
  local_24[0] = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  local_48[0] = local_48[0] & 0xffffff00;
  local_20 = local_20 & 0xffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_bc = local_bc & 0xffffff00;
  local_50[0] = 0;
  if (((local_d0 != 0) && (iVar3 = FUN_5f5782f0(), iVar3 != 0)) &&
     (sVar2 = FUN_5f578190(), sVar2 == 0)) {
    FUN_5f5155f0(piVar4,uVar9,local_24,(undefined1 *)local_dc,(undefined1 *)local_48,
                 (undefined1 *)&local_20,(undefined1 *)&local_c0,(undefined1 *)&local_bc,local_50,0)
    ;
  }
  FUN_5f584700();
  FUN_5f57b390();
  local_48[5] = 0;
  local_48[1] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[2] = 1;
  local_e8 = FUN_5f5782f0();
  if ((local_e8 != 0) && (sVar2 = FUN_5f5781b0(), sVar2 == 0)) {
    local_48[2] = (local_148 & 0xff0000 | local_148 >> 0x10) >> 8 |
                  (local_148 << 0x10 | local_148 & 0xff00) << 8;
    local_48[3] = (local_144 & 0xff0000 | local_144 >> 0x10) >> 8 |
                  (local_144 << 0x10 | local_144 & 0xff00) << 8;
    local_48[4] = (local_140 & 0xff0000 | local_140 >> 0x10) >> 8 |
                  (local_140 << 0x10 | local_140 & 0xff00) << 8;
    local_48[5] = (local_13c & 0xff0000 | local_13c >> 0x10) >> 8 |
                  (local_13c << 0x10 | local_13c & 0xff00) << 8;
  }
  FUN_5f57c0b0();
  FUN_5f584350();
  puVar5 = (undefined4 *)FUN_5f57aed0();
  local_e4 = puVar5;
  FUN_5f57ae90();
  FUN_5f57b310();
  FUN_5f57b0b0();
  local_cc = *puVar5;
  FUN_5f57c130();
  if (local_100 != *(int *)(param_2 + 0x3c)) {
    FUN_5f57c150();
  }
  FUN_5f57c910();
  local_e0 = 0;
  puVar5 = (undefined4 *)(param_2 + 4);
  local_b0 = (**(code **)(*(int *)*puVar5 + 0x3c))((int *)*puVar5,0,0,local_c8,&local_e0,0,0,0,0,0);
  if (local_b0 == 0) {
    if (local_e0 < 0) {
      iVar3 = *(int *)(param_2 + 0x10);
      uVar9 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
      puVar10 = local_c8[0];
      puVar12 = *(undefined4 **)(param_2 + 0x54);
      for (uVar9 = (uint)(((int)((uVar9 & 0xffffffe0) + ((int)uVar9 >> 0x1f & 7U)) >> 3) *
                         *(int *)(iVar3 + 8)) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    else {
      piVar4 = *(int **)(param_2 + 0x10);
      FUN_5f532fe0(piVar4,*(int **)(param_2 + 0x54),(uint *)0x0,0,piVar4,
                   (int *)((piVar4[2] + -1) * *(int *)(param_2 + 0x58) + (int)local_c8[0]),
                   (uint *)0x0,-*(int *)(param_2 + 0x58),3);
    }
    (**(code **)(*(int *)*puVar5 + 0x40))((int *)*puVar5,local_c8[0]);
    local_178 = 0;
    local_174 = FUN_5f57aed0();
    if ((local_6c & 0x400) == 0) {
      local_10c = 0;
    }
    uVar9 = FUN_5f580b00();
    if ((local_6c & 0x800000) != 0) {
      uVar9 = 100000;
      local_188 = ftol();
      iVar3 = FUN_5f5782f0();
      if ((iVar3 != 0) && (sVar2 = FUN_5f5781b0(), sVar2 == 0)) {
        uVar9 = (local_1b8 & 0xff0000 | local_1b8 >> 0x10) >> 8 |
                (local_1b8 << 0x10 | local_1b8 & 0xff00) << 8;
      }
      puVar11 = local_1a4;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      if ((local_d0 == 0) || (local_48[2] != 5)) {
        local_1a4[0] = uVar9;
        if (local_e8 != 0) {
          local_1a4[0] = local_48[3] << 10;
        }
      }
      else {
        local_1a4[0] = 0;
      }
      local_1a4[1] = 0;
      local_1a4[2] = local_188;
      local_1a4[3] = local_104;
      local_194 = CONCAT22(uStack_118,uStack_11a);
      local_190 = local_10c;
      uVar9 = FUN_5f581280();
    }
    local_164 = 1.0;
    if (*(int *)(param_2 + 0x18) != 0 || *(int *)(param_2 + 0x1c) != 0) {
      local_164 = (double)param_6 / (double)*(longlong *)(param_2 + 0x18);
    }
    local_168 = (LPVOID)0x0;
    local_15c = 0;
    _fpreset();
    uVar13 = local_48[2];
    if ((local_d0 != 0) && ((local_48[2] == 5 || (local_48[2] == 4)))) {
      if (_DAT_5f596570 == *(double *)(param_2 + 0x20)) {
        *(undefined4 *)(param_2 + 0x20) = 0;
        *(undefined4 *)(param_2 + 0x24) = 0x3ff00000;
      }
      local_1c4 = _DAT_5f5966e8 / *(double *)(param_2 + 0x20);
      local_15c = ftol();
      if (uVar13 == 5) {
        local_164 = local_164 * _DAT_5f596688;
        pvVar6 = GlobalAlloc(0x42,*(int *)(param_2 + 0x18) << 3);
        local_168 = GlobalLock(pvVar6);
        local_b8 = 0;
        iStack_b4 = 0;
        iVar3 = local_b0;
        while (((short)uVar9 == 0 && (iVar3 == 0))) {
          local_1e0 = 0;
          local_1e4 = 0;
          iVar3 = (**(code **)(*(int *)*puVar5 + 0x3c))
                            ((int *)*puVar5,local_b8,iStack_b4,local_c8,&local_1e4,0,0,0,0,0);
          local_b0 = iVar3;
          if (iVar3 == 0) {
            if (local_1e4 < 0) {
              iVar8 = *(int *)(param_2 + 0x10);
              uVar9 = (uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f;
              puVar10 = local_c8[0];
              puVar12 = *(undefined4 **)(param_2 + 0x54);
              for (uVar9 = (uint)(((int)((uVar9 & 0xffffffe0) + ((int)uVar9 >> 0x1f & 7U)) >> 3) *
                                 *(int *)(iVar8 + 8)) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
            }
            else {
              piVar4 = *(int **)(param_2 + 0x10);
              FUN_5f532fe0(piVar4,*(int **)(param_2 + 0x54),(uint *)0x0,0,piVar4,
                           (int *)((piVar4[2] + -1) * *(int *)(param_2 + 0x58) + (int)local_c8[0]),
                           (uint *)0x0,-*(int *)(param_2 + 0x58),3);
            }
            (**(code **)(*(int *)*puVar5 + 0x40))((int *)*puVar5,local_c8[0]);
            local_8 = 0;
            uVar9 = FUN_5f580b20();
            local_8 = 0xffffffff;
            if ((short)uVar9 == 0) {
              *(undefined4 *)((int)local_168 + local_b8 * 8) = local_1e0;
              *(ushort *)((int)local_168 + local_b8 * 8 + 4) = (ushort)local_1dc;
            }
            local_48[6] = uVar9;
            if (param_5 != (int *)0x0) {
              iVar3 = *param_5;
              uVar15 = ftol();
              local_b0 = (**(code **)(iVar3 + 0x18))
                                   (param_5,(uint)uVar15 + param_7,
                                    (int)((ulonglong)uVar15 >> 0x20) + ((int)param_7 >> 0x1f) +
                                    (uint)CARRY4((uint)uVar15,param_7));
              iVar3 = 0;
              if (local_b0 != 0) {
                local_b0 = -0x80;
                iVar3 = local_b0;
              }
            }
          }
          bVar14 = 0xfffffffe < local_b8;
          local_b8 = local_b8 + 1;
          iStack_b4 = iStack_b4 + (uint)bVar14;
        }
        uVar9 = local_dc[0] & 0xff;
        uVar13 = local_20 & 0xff;
        local_1cc = local_48[0] & 0xff;
        uVar7 = ftol();
        FUN_5f517540((int)local_168,*(uint *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),local_15c,
                     uVar7,local_48[5],uVar9,uVar13,local_c0 & 0xff,local_bc & 0xff,local_1cc,
                     *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
        param_7 = param_7 + param_6 / 2;
      }
      else {
        local_15c = local_15c | 0x80000000;
      }
      uVar9 = FUN_5f581520();
      if ((short)uVar9 == 0) {
        uVar9 = FUN_5f581560();
      }
    }
    _fpreset();
    local_154 = 0x84;
    local_158 = 0;
    if (-1 < local_b0) {
      local_b0 = 0;
      uVar9 = 0;
    }
    local_b8 = 0;
    iStack_b4 = 0;
    while (((short)uVar9 == 0 && (local_b0 == 0))) {
      local_1ec = 0;
      local_1f0 = 0;
      local_b0 = (**(code **)(*(int *)*puVar5 + 0x3c))
                           ((int *)*puVar5,local_b8,iStack_b4,local_c8,&local_1f0,0,0,0,0,0);
      if (local_b0 == 0) {
        if (local_1f0 < 0) {
          iVar3 = *(int *)(param_2 + 0x10);
          uVar9 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
          puVar10 = local_c8[0];
          puVar12 = *(undefined4 **)(param_2 + 0x54);
          for (uVar9 = (uint)(((int)((uVar9 & 0xffffffe0) + ((int)uVar9 >> 0x1f & 7U)) >> 3) *
                             *(int *)(iVar3 + 8)) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        else {
          piVar4 = *(int **)(param_2 + 0x10);
          FUN_5f532fe0(piVar4,*(int **)(param_2 + 0x54),(uint *)0x0,0,piVar4,
                       (int *)((piVar4[2] + -1) * *(int *)(param_2 + 0x58) + (int)local_c8[0]),
                       (uint *)0x0,-*(int *)(param_2 + 0x58),3);
        }
        (**(code **)(*(int *)*puVar5 + 0x40))((int *)*puVar5,local_c8[0]);
        if ((local_d0 != 0) && (local_48[2] == 5)) {
          local_15c = *(uint *)((int)local_168 + local_b8 * 8);
          FUN_5f581580();
        }
        local_8 = 1;
        local_48[6] = FUN_5f580b20();
        local_154 = 4;
        if ((short)local_48[6] == 0) {
          if (local_1ec == 0) {
            local_158 = local_158 + *(int *)(param_2 + 8);
          }
          else {
            local_8 = 2;
            local_48[6] = FUN_5f5767b0();
            local_158 = 0;
          }
        }
        uVar9 = local_48[6];
        local_8 = 0xffffffff;
        if (param_5 != (int *)0x0) {
          iVar3 = *param_5;
          lVar16 = ftol();
          local_b0 = (**(code **)(iVar3 + 0x18))(param_5,lVar16 + (int)param_7);
          if (local_b0 != 0) {
            local_b0 = -0x80;
          }
        }
      }
      bVar14 = 0xfffffffe < local_b8;
      local_b8 = local_b8 + 1;
      iStack_b4 = iStack_b4 + (uint)bVar14;
    }
    FUN_5f580d20();
    pMem = local_168;
    if (local_168 != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(local_168);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pMem);
      GlobalFree(pvVar6);
    }
  }
  iVar3 = local_b0;
  if (local_b0 == 1) {
    iVar3 = 0;
  }
  FUN_5f57c0d0();
  if ((local_100 != *(int *)(param_2 + 0x3c)) && (*(int *)(param_2 + 0x3c) != 0)) {
    FUN_5f57c150();
  }
  if (local_e4 != (undefined4 *)0x0) {
    FUN_5f57b0d0();
    FUN_5f57b390();
  }
  if (local_110 != (short *)0x0) {
    FUN_5f580ba0();
  }
  if (local_2c != 0) {
    FUN_5f580600();
  }
  ExceptionList = local_14;
  return iVar3;
}


