/* Module: mcmpgdec.dll
   Function: FUN_100042a0
   Address: 100042a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100042a0(int param_1,uint param_2,int *param_3,undefined2 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_1 + 0x35c;
  if ((int)param_2 < 4) {
    local_18 = param_1 + 0x15c;
    iVar14 = 0;
  }
  else {
    iVar14 = (param_2 & 1) + 1;
  }
  if (iVar14 == 0) {
    uVar6 = FUN_1000a798(param_1);
    local_14 = uVar6 + *param_3;
    *param_3 = local_14;
  }
  else {
    uVar6 = FUN_1000a848(param_1);
    local_14 = uVar6 + param_3[iVar14];
    param_3[iVar14] = local_14;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    return;
  }
  iVar14 = *(int *)(param_1 + 0x67c);
  uVar6 = *(uint *)(param_1 + 0x674);
  pbVar13 = *(byte **)(param_1 + 0x670);
  iVar2 = *(int *)(param_1 + 0x660);
  iVar3 = *(int *)(param_1 + 0x65c);
  local_14 = local_14 << (3U - (char)*(undefined4 *)(param_1 + 0x5ec) & 0x1f);
  *param_4 = (short)local_14;
  if (*(int *)(param_1 + 0x600) == 0) {
    local_10 = 1;
    while( true ) {
      uVar8 = uVar6 >> 0x10;
      if (uVar8 < 0x4000) {
        if (uVar8 < 0x400) {
          if (uVar8 < 0x200) {
            if (uVar8 < 0x100) {
              if (uVar8 < 0x80) {
                if (uVar8 < 0x40) {
                  if (uVar8 < 0x20) {
                    if (uVar8 < 0x10) goto LAB_100042f8;
                    pcVar7 = &DAT_1003189c + uVar8 * 3;
                  }
                  else {
                    pcVar7 = &DAT_1003185c + (uVar6 >> 0x11) * 3;
                  }
                }
                else {
                  pcVar7 = &DAT_1003181c + (uVar6 >> 0x12) * 3;
                }
              }
              else {
                pcVar7 = &DAT_100317dc + (uVar6 >> 0x13) * 3;
              }
            }
            else {
              pcVar7 = &DAT_1003179c + (uVar6 >> 0x14) * 3;
            }
          }
          else {
            pcVar7 = &DAT_10031768 + (uVar6 >> 0x16) * 3;
          }
        }
        else {
          pcVar7 = &DAT_100313c0 + (uVar6 >> 0x18) * 3;
        }
      }
      else {
        pcVar7 = &DAT_10031380 + (uVar6 >> 0x1c) * 3;
      }
      uVar6 = uVar6 << (pcVar7[2] & 0x1fU);
      iVar14 = iVar14 - pcVar7[2];
      uVar8 = (uint)*pcVar7;
      while (iVar14 < 0x19) {
        iVar14 = iVar14 + 8;
        bVar1 = *pbVar13;
        bVar5 = (byte)iVar14 & 0x1f;
        pbVar13 = pbVar13 + 1;
        uVar6 = uVar6 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
      }
      if ((int)uVar8 < 0x40) {
        uVar10 = (uint)pcVar7[1];
        iVar14 = iVar14 + -1;
        uVar12 = uVar6 >> 0x1f;
        uVar6 = uVar6 * 2;
      }
      else {
        if (uVar8 == 0x40) goto LAB_100046fb;
        uVar8 = uVar6 >> 0x1a;
        iVar14 = iVar14 + -0x12;
        uVar10 = (uVar6 & 0x3ffffff) >> 0xe;
        uVar6 = uVar6 << 0x12;
        if ((uVar10 & 0x7ff) == 0) goto LAB_10004308;
        uVar12 = (uint)(0x7ff < uVar10);
        if (uVar12 != 0) {
          uVar10 = 0x1000 - uVar10;
        }
        do {
          iVar14 = iVar14 + 8;
          bVar1 = *pbVar13;
          bVar5 = (byte)iVar14 & 0x1f;
          pbVar13 = pbVar13 + 1;
          uVar6 = uVar6 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
        } while (iVar14 < 0x19);
      }
      local_10 = local_10 + uVar8;
      if (0x3f < local_10) break;
      iVar4 = (&DAT_10027000)[iVar3 * 0x40 + local_10];
      sVar9 = (short)((int)(uVar10 * iVar2 * *(int *)(local_18 + iVar4 * 4)) >> 4);
      param_4[iVar4] = sVar9;
      if (uVar12 != 0) {
        param_4[iVar4] = -sVar9;
      }
      sVar9 = param_4[iVar4];
      param_4[iVar4] = sVar9;
      local_14 = local_14 + sVar9;
      local_10 = local_10 + 1;
    }
  }
  else {
    local_10 = 1;
    while( true ) {
      uVar8 = uVar6 >> 0x10;
      if (uVar8 < 0x400) {
        if (uVar8 < 0x200) {
          if (uVar8 < 0x100) {
            if (uVar8 < 0x80) {
              if (uVar8 < 0x40) {
                if (uVar8 < 0x20) {
                  if (uVar8 < 0x10) goto LAB_100042f8;
                  pcVar7 = &DAT_1003189c + uVar8 * 3;
                }
                else {
                  pcVar7 = &DAT_1003185c + (uVar6 >> 0x11) * 3;
                }
              }
              else {
                pcVar7 = &DAT_1003181c + (uVar6 >> 0x12) * 3;
              }
            }
            else {
              pcVar7 = &DAT_100317dc + (uVar6 >> 0x13) * 3;
            }
          }
          else {
            pcVar7 = &DAT_1003179c + (uVar6 >> 0x14) * 3;
          }
        }
        else {
          pcVar7 = &DAT_10031780 + (uVar6 >> 0x16) * 3;
        }
      }
      else {
        pcVar7 = &DAT_10031480 + (uVar6 >> 0x18) * 3;
      }
      uVar6 = uVar6 << (pcVar7[2] & 0x1fU);
      iVar14 = iVar14 - pcVar7[2];
      uVar8 = (uint)*pcVar7;
      while (iVar14 < 0x19) {
        iVar14 = iVar14 + 8;
        bVar1 = *pbVar13;
        bVar5 = (byte)iVar14 & 0x1f;
        pbVar13 = pbVar13 + 1;
        uVar6 = uVar6 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
      }
      if ((int)uVar8 < 0x40) {
        uVar10 = (uint)pcVar7[1];
        iVar14 = iVar14 + -1;
        uVar12 = uVar6 >> 0x1f;
        uVar6 = uVar6 * 2;
      }
      else {
        if (uVar8 == 0x40) goto LAB_100046fb;
        uVar8 = uVar6 >> 0x1a;
        iVar14 = iVar14 + -0x12;
        uVar10 = (uVar6 & 0x3ffffff) >> 0xe;
        uVar6 = uVar6 << 0x12;
        if ((uVar10 & 0x7ff) == 0) goto LAB_10004308;
        uVar12 = (uint)(0x7ff < uVar10);
        if (uVar12 != 0) {
          uVar10 = 0x1000 - uVar10;
        }
        do {
          iVar14 = iVar14 + 8;
          bVar1 = *pbVar13;
          bVar5 = (byte)iVar14 & 0x1f;
          pbVar13 = pbVar13 + 1;
          uVar6 = uVar6 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
        } while (iVar14 < 0x19);
      }
      local_10 = local_10 + uVar8;
      if (0x3f < local_10) break;
      iVar4 = (&DAT_10027000)[iVar3 * 0x40 + local_10];
      iVar11 = (int)(uVar10 * iVar2 * *(int *)(local_18 + iVar4 * 4)) >> 4;
      local_14 = local_14 + iVar11;
      sVar9 = (short)iVar11;
      param_4[iVar4] = sVar9;
      if (uVar12 != 0) {
        param_4[iVar4] = -sVar9;
      }
      local_10 = local_10 + 1;
    }
  }
  pcVar7 = s_DCT_coeff_index_out_of_bounds__i_100309c0;
LAB_100046d9:
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_1000bb3c(param_1,pcVar7);
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
LAB_100046fb:
  param_4[0x3f] = param_4[0x3f] ^ (ushort)((byte)local_14 & 1 ^ 1);
  while (iVar14 < 0x19) {
    iVar14 = iVar14 + 8;
    bVar1 = *pbVar13;
    bVar5 = (byte)iVar14 & 0x1f;
    pbVar13 = pbVar13 + 1;
    uVar6 = uVar6 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
  }
  *(int *)(param_1 + 0x67c) = iVar14;
  *(uint *)(param_1 + 0x674) = uVar6;
  *(byte **)(param_1 + 0x670) = pbVar13;
  return;
LAB_100042f8:
  pcVar7 = s_invalid_Huffman_code_in_Decode_M_10030980;
  goto LAB_100046d9;
LAB_10004308:
  pcVar7 = s_invalid_escape_in_Decode_MPEG2_I_10030940;
  goto LAB_100046d9;
}


