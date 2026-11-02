/* Module: mcmpgdec.dll
   Function: FUN_1000474c
   Address: 1000474c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000474c(int param_1,int param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  short sVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint local_30;
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = (int *)(param_1 + 0x45c);
  if (param_2 < 4) {
    local_18 = (int *)(param_1 + 0x25c);
  }
  iVar2 = *(int *)(param_1 + 0x660);
  iVar3 = *(int *)(param_1 + 0x65c);
  iVar12 = *(int *)(param_1 + 0x67c);
  uVar11 = *(uint *)(param_1 + 0x674);
  pbVar10 = *(byte **)(param_1 + 0x670);
  uVar6 = uVar11 >> 0x1e;
  if ((uVar6 & 2) == 0) {
    local_14 = 0;
    local_10 = 0;
  }
  else {
    iVar12 = iVar12 + -2;
    uVar11 = uVar11 << 2;
    sVar8 = (short)(*local_18 * 3 * iVar2 >> 5);
    *param_3 = sVar8;
    if ((uVar6 & 1) != 0) {
      *param_3 = -sVar8;
    }
    local_14 = (int)*param_3;
    *param_3 = *param_3;
    local_10 = 1;
  }
  while( true ) {
    uVar6 = uVar11 >> 0x10;
    if (uVar6 < 0x4000) {
      if (uVar6 < 0x400) {
        if (uVar6 < 0x200) {
          if (uVar6 < 0x100) {
            if (uVar6 < 0x80) {
              if (uVar6 < 0x40) {
                if (uVar6 < 0x20) {
                  if (uVar6 < 0x10) {
                    pcVar7 = s_invalid_Huffman_code_in_Decode_M_10030a40;
                    goto LAB_100049d8;
                  }
                  pcVar7 = &DAT_1003189c + uVar6 * 3;
                }
                else {
                  pcVar7 = &DAT_1003185c + (uVar11 >> 0x11) * 3;
                }
              }
              else {
                pcVar7 = &DAT_1003181c + (uVar11 >> 0x12) * 3;
              }
            }
            else {
              pcVar7 = &DAT_100317dc + (uVar11 >> 0x13) * 3;
            }
          }
          else {
            pcVar7 = &DAT_1003179c + (uVar11 >> 0x14) * 3;
          }
        }
        else {
          pcVar7 = &DAT_10031768 + (uVar11 >> 0x16) * 3;
        }
      }
      else {
        pcVar7 = &DAT_100313c0 + (uVar11 >> 0x18) * 3;
      }
    }
    else {
      pcVar7 = &DAT_10031380 + (uVar11 >> 0x1c) * 3;
    }
    uVar11 = uVar11 << (pcVar7[2] & 0x1fU);
    iVar12 = iVar12 - pcVar7[2];
    uVar6 = (uint)*pcVar7;
    while (iVar12 < 0x19) {
      iVar12 = iVar12 + 8;
      bVar1 = *pbVar10;
      bVar5 = (byte)iVar12 & 0x1f;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar11 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
    }
    if ((int)uVar6 < 0x40) {
      uVar9 = (uint)pcVar7[1];
      iVar12 = iVar12 + -1;
      local_30 = uVar11 >> 0x1f;
      uVar11 = uVar11 * 2;
    }
    else {
      if (uVar6 == 0x40) goto LAB_100049fa;
      uVar6 = uVar11 >> 0x1a;
      iVar12 = iVar12 + -0x12;
      uVar9 = (uVar11 & 0x3ffffff) >> 0xe;
      uVar11 = uVar11 << 0x12;
      if ((uVar9 & 0x7ff) == 0) {
        pcVar7 = s_invalid_escape_in_Decode_MPEG2_N_10030a00;
        goto LAB_100049d8;
      }
      local_30 = (uint)(0x7ff < uVar9);
      if (local_30 != 0) {
        uVar9 = 0x1000 - uVar9;
      }
      do {
        iVar12 = iVar12 + 8;
        bVar1 = *pbVar10;
        bVar5 = (byte)iVar12 & 0x1f;
        pbVar10 = pbVar10 + 1;
        uVar11 = uVar11 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
      } while (iVar12 < 0x19);
    }
    local_10 = local_10 + uVar6;
    if (0x3f < local_10) break;
    iVar4 = (&DAT_10027000)[iVar3 * 0x40 + local_10];
    sVar8 = (short)((int)((uVar9 * 2 + 1) * iVar2 * local_18[iVar4]) >> 5);
    param_3[iVar4] = sVar8;
    if (local_30 != 0) {
      param_3[iVar4] = -sVar8;
    }
    sVar8 = param_3[iVar4];
    param_3[iVar4] = sVar8;
    local_14 = local_14 + sVar8;
    local_10 = local_10 + 1;
  }
  pcVar7 = s_DCT_coeff_index_out_of_bounds_in_10030a80;
LAB_100049d8:
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_1000bb3c(param_1,pcVar7);
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
LAB_100049fa:
  param_3[0x3f] = param_3[0x3f] ^ (ushort)((byte)local_14 & 1 ^ 1);
  while (iVar12 < 0x19) {
    iVar12 = iVar12 + 8;
    bVar1 = *pbVar10;
    bVar5 = (byte)iVar12 & 0x1f;
    pbVar10 = pbVar10 + 1;
    uVar11 = uVar11 | (uint)(bVar1 >> bVar5) | (uint)bVar1 << 0x20 - bVar5;
  }
  *(int *)(param_1 + 0x67c) = iVar12;
  *(uint *)(param_1 + 0x674) = uVar11;
  *(byte **)(param_1 + 0x670) = pbVar10;
  return;
}


