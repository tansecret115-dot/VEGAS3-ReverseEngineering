/* Module: vegas30k.dll
   Function: FUN_010c6a20
   Address: 010c6a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c6a20(int *param_1)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  HGLOBAL pvVar18;
  undefined4 *_Dst;
  int *_Dst_00;
  uint *pMem;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  undefined4 *puVar29;
  SIZE_T dwBytes;
  size_t _Size_00;
  int iVar30;
  int *piVar31;
  uint *local_154;
  int local_148;
  undefined4 *local_144;
  int *local_140;
  uint *local_12c;
  int local_124;
  uint local_11c;
  int local_110;
  int local_f4;
  uint local_ec;
  int *local_d4;
  int *local_c8;
  undefined1 local_c4 [4];
  int local_c0;
  undefined1 local_bc [12];
  code *local_b0;
  code *pcStack_ac;
  code *local_a8;
  code *local_a4;
  code *local_98;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  int local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar1 = param_1[0x13];
  iVar2 = param_1[0xf];
  local_110 = param_1[7];
  iVar3 = param_1[0xb];
  uVar15 = _SfGetPixelType_4(param_1[0xd]);
  uVar16 = _SfGetPixelType_4(param_1[5]);
  iVar17 = _SfGetPixelBitsPerChannel_8(uVar15,local_c4);
  _SfGetPixelBitsPerChannel_8(uVar16,local_c4);
  iVar4 = param_1[0x15];
  iVar5 = param_1[0x16];
  iVar6 = param_1[0x17];
  uVar14 = ftol();
  iVar7 = param_1[0x1a];
  iVar8 = param_1[0x19];
  _SfXCHGGetFunctionPointers_20(uVar16,uVar15,param_1[0x1c] | 0x10,local_bc,0);
  local_30 = param_1[0x14];
  local_2c = param_1[0xc];
  local_28 = param_1[0x1b];
  dwBytes = iVar5 * iVar4 * 8;
  pvVar18 = GlobalAlloc(2,dwBytes);
  _Dst = GlobalLock(pvVar18);
  if (_Dst == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  pvVar18 = GlobalAlloc(2,iVar5 * 8);
  _Dst_00 = GlobalLock(pvVar18);
  if (_Dst_00 != (int *)0x0) {
    pvVar18 = GlobalAlloc(2,param_1[9] * 4 + 4);
    pMem = GlobalLock(pvVar18);
    if (pMem != (uint *)0x0) {
      uVar9 = param_1[0x12];
      uVar10 = param_1[0x11];
      _Size_00 = dwBytes - 8;
      _Size = iVar5 * 8 - 4;
      iVar30 = iVar4 / 2;
      iVar27 = (iVar4 - iVar30) + -1;
      iVar22 = (iVar5 - iVar5 / 2) + -1;
      iVar23 = 0;
      if (0 < iVar5) {
        local_154 = (uint *)(_Dst_00 + iVar5);
        iVar25 = iVar2;
        local_148 = iVar2;
        local_140 = _Dst_00;
        do {
          if ((iVar5 / 2 < iVar23) && (iVar23 < (int)(uVar9 - 1))) {
            iVar25 = iVar25 + iVar1;
            local_148 = iVar25;
          }
          *local_140 = iVar25;
          *local_154 = iVar25;
          if ((iVar30 <= iVar23) && (iVar23 < (int)(uVar9 - 2))) {
            *local_154 = iVar25 + iVar1;
            iVar25 = local_148;
          }
          iVar23 = iVar23 + 1;
          local_140 = local_140 + 1;
          local_154 = local_154 + 1;
        } while (iVar23 < iVar5);
      }
      if (*param_1 == 0) {
        uVar19 = ((iVar4 - iVar30) + -2) * iVar17;
        iVar23 = 0;
        puVar26 = pMem;
        if (0 < (int)uVar10) {
          do {
            if ((int)uVar10 < iVar23 + iVar27) {
              uVar19 = (uVar10 - 1) * iVar17;
            }
            else {
              uVar19 = uVar19 + iVar17;
            }
            *puVar26 = uVar19;
            iVar23 = iVar23 + 1;
            puVar26 = puVar26 + 1;
          } while (iVar23 < (int)uVar10);
        }
        local_140 = (int *)0x0;
        if (0 < (int)uVar9) {
          do {
            local_58 = local_110;
            uVar19 = iVar22 + (int)local_140;
            local_54 = 0;
            if (uVar9 <= uVar19) {
              uVar19 = uVar9 - 1;
            }
            _Dst_00[iVar5 + -1] = uVar19 * iVar1 + iVar2;
            local_154 = (uint *)0x0;
            local_144 = _Dst;
            if (iVar4 != 1 && -1 < iVar4 + -1) {
              do {
                uVar19 = (int)local_154 - iVar30;
                if ((int)uVar19 < 1) {
                  uVar19 = 0;
                }
                else if (uVar10 <= uVar19) {
                  uVar19 = uVar10 - 1;
                }
                if (0 < iVar5) {
                  puVar29 = local_144;
                  piVar31 = _Dst_00;
                  local_148 = iVar5;
                  do {
                    local_60 = (uVar19 * iVar17 >> 3) + *piVar31;
                    local_5c = uVar19 * iVar17 & 7;
                    (*local_b0)(local_bc);
                    piVar31 = piVar31 + 1;
                    *puVar29 = uStack_80;
                    puVar29[1] = uStack_7c;
                    puVar29 = puVar29 + iVar4 * 2;
                    local_148 = local_148 + -1;
                  } while (local_148 != 0);
                }
                local_154 = (uint *)((int)local_154 + 1);
                local_144 = local_144 + 2;
              } while ((int)local_154 < iVar4 + -1);
            }
            local_154 = pMem;
            local_11c = uVar10;
            if (0 < (int)uVar10) {
              do {
                uVar19 = *local_154;
                if (0 < iVar5) {
                  puVar29 = _Dst + (iVar4 + -1) * 2;
                  piVar31 = _Dst_00;
                  local_148 = iVar5;
                  do {
                    local_60 = *piVar31 + ((int)(uVar19 + ((int)uVar19 >> 0x1f & 7U)) >> 3);
                    local_5c = uVar19 & 7;
                    (*local_b0)(local_bc);
                    piVar31 = piVar31 + 1;
                    *puVar29 = uStack_80;
                    puVar29[1] = uStack_7c;
                    puVar29 = puVar29 + iVar4 * 2;
                    local_148 = local_148 + -1;
                  } while (local_148 != 0);
                }
                FUN_010c65c0(&uStack_80,_Dst,iVar6,iVar4,iVar5,(float)uVar14,iVar8,iVar7);
                (*pcStack_ac)(local_bc);
                memmove(_Dst,_Dst + 2,_Size_00);
                local_11c = local_11c - 1;
                local_154 = local_154 + 1;
              } while (local_11c != 0);
            }
            memmove(_Dst_00,_Dst_00 + 1,_Size);
            local_110 = local_110 + iVar3;
            local_140 = (int *)((int)local_140 + 1);
          } while ((int)local_140 < (int)uVar9);
        }
      }
      else {
        iVar23 = param_1[4];
        local_ec = param_1[2];
        uVar19 = param_1[1];
        iVar25 = param_1[3];
        iVar11 = param_1[10];
        iVar12 = param_1[9];
        if (param_1[0x11] == 1) {
          local_a8 = local_98;
        }
        local_48 = iVar1;
        if (param_1[0x12] == 1) {
          local_48 = 0;
        }
        local_a4 = local_a8;
        if (-1 < iVar12) {
          iVar28 = iVar12 + 1;
          uVar24 = iVar25 * iVar27 + uVar19;
          puVar26 = pMem;
          do {
            uVar20 = uVar24 >> 0xe;
            if (uVar10 <= uVar20) {
              uVar20 = uVar10 - 1;
            }
            *puVar26 = uVar20 * iVar17;
            puVar26 = puVar26 + 1;
            uVar24 = uVar24 + iVar25;
            iVar28 = iVar28 + -1;
          } while (iVar28 != 0);
        }
        local_140 = (int *)0x1;
        if (0 < iVar11) {
          local_c8 = _Dst_00 + iVar5 + -1;
          local_d4 = _Dst_00 + iVar5 * 2 + -1;
          uVar24 = iVar23 * iVar22 + local_ec;
          do {
            uVar20 = uVar24 >> 0xe;
            if (uVar9 <= uVar20) {
              uVar20 = uVar9 - 1;
            }
            iVar22 = uVar20 * iVar1 + iVar2;
            *local_c8 = iVar22;
            *local_d4 = iVar22 + iVar1;
            if (uVar9 <= uVar20 + 1) {
              local_c8 = _Dst_00 + iVar5 + -1;
              local_d4 = _Dst_00 + iVar5 * 2 + -1;
              *local_d4 = _Dst_00[iVar5 + -1];
            }
            local_58 = local_110;
            local_5c = 0;
            local_54 = 0;
            if (iVar11 <= (int)local_140) {
              local_48 = 0;
            }
            local_40 = local_ec & 0x3fff;
            local_a8 = local_a4;
            local_154 = (uint *)0x0;
            if (0 < iVar4 + -1) {
              local_f4 = 0;
              local_c0 = iVar25 * iVar30;
              local_144 = (undefined4 *)uVar19;
              local_12c = _Dst;
              do {
                if (local_154 == (uint *)iVar30 || (int)local_154 - iVar30 < 0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = (int)((local_f4 - local_c0) + (local_f4 - local_c0 >> 0x1f & 0x3fffU)) >>
                           0xe;
                  if (uVar10 <= uVar20) {
                    uVar20 = uVar10 - 1;
                  }
                }
                if (uVar10 <= uVar20 + 1) {
                  local_a8 = local_98;
                }
                uVar21 = (uint)local_144 & 0x3fff;
                local_44 = uVar21;
                if (0 < iVar5) {
                  puVar26 = local_12c;
                  piVar31 = _Dst_00;
                  local_124 = iVar5;
                  do {
                    local_60 = (uVar20 * iVar17 >> 3) + *piVar31;
                    local_5c = uVar20 * iVar17 & 7;
                    local_40 = uVar21;
                    (*local_a8)(local_bc);
                    piVar31 = piVar31 + 1;
                    *puVar26 = uStack_80;
                    puVar26[1] = uStack_7c;
                    puVar26 = puVar26 + iVar4 * 2;
                    local_124 = local_124 + -1;
                  } while (local_124 != 0);
                }
                local_f4 = local_f4 + iVar25;
                local_144 = (undefined4 *)((int)local_144 + iVar25);
                local_154 = (uint *)((int)local_154 + 1);
                local_12c = local_12c + 2;
              } while ((int)local_154 < iVar4 + -1);
            }
            iVar22 = 0;
            local_144 = (undefined4 *)uVar19;
            local_12c = pMem;
            if (0 < iVar12) {
              do {
                iVar22 = iVar22 + 1;
                uVar20 = *local_12c;
                if (iVar22 == iVar12) {
                  local_a8 = local_98;
                }
                if (0 < iVar5) {
                  puVar29 = _Dst + (iVar4 + -1) * 2;
                  piVar31 = _Dst_00;
                  local_124 = iVar5;
                  do {
                    local_60 = (uVar20 >> 3) + *piVar31;
                    local_5c = uVar20 & 7;
                    local_44 = (uint)local_144 & 0x3fff;
                    (*local_a8)(local_bc);
                    piVar31 = piVar31 + 1;
                    *puVar29 = uStack_80;
                    puVar29[1] = uStack_7c;
                    puVar29 = puVar29 + iVar4 * 2;
                    local_124 = local_124 + -1;
                  } while (local_124 != 0);
                }
                FUN_010c65c0(&uStack_80,_Dst,iVar6,iVar4,iVar5,(float)uVar14,iVar8,iVar7);
                (*pcStack_ac)(local_bc);
                memmove(_Dst,_Dst + 2,_Size_00);
                local_144 = (undefined4 *)((int)local_144 + iVar25);
                local_12c = local_12c + 1;
              } while (iVar22 < iVar12);
            }
            memmove(_Dst_00,_Dst_00 + 1,_Size);
            local_ec = local_ec + iVar23;
            uVar24 = uVar24 + iVar23;
            local_110 = local_110 + iVar3;
            bVar13 = (int)local_140 < iVar11;
            local_140 = (int *)((int)local_140 + 1);
          } while (bVar13);
        }
      }
      pvVar18 = GlobalHandle(pMem);
      GlobalUnlock(pvVar18);
      pvVar18 = GlobalHandle(pMem);
      GlobalFree(pvVar18);
      pvVar18 = GlobalHandle(_Dst_00);
      GlobalUnlock(pvVar18);
      pvVar18 = GlobalHandle(_Dst_00);
      GlobalFree(pvVar18);
      pvVar18 = GlobalHandle(_Dst);
      GlobalUnlock(pvVar18);
      pvVar18 = GlobalHandle(_Dst);
      GlobalFree(pvVar18);
      return 0;
    }
    pvVar18 = GlobalHandle(_Dst_00);
    GlobalUnlock(pvVar18);
    pvVar18 = GlobalHandle(_Dst_00);
    GlobalFree(pvVar18);
    pvVar18 = GlobalHandle(_Dst);
    GlobalUnlock(pvVar18);
    pvVar18 = GlobalHandle(_Dst);
    GlobalFree(pvVar18);
    return 0x8007000e;
  }
  pvVar18 = GlobalHandle(_Dst);
  GlobalUnlock(pvVar18);
  pvVar18 = GlobalHandle(_Dst);
  GlobalFree(pvVar18);
  return 0x8007000e;
}


