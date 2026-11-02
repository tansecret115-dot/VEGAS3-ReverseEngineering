/* Module: mcmpgdec.dll
   Function: FUN_10003fd0
   Address: 10003fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003fd0(int param_1,undefined4 param_2,ushort *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_20;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x660);
  iVar11 = *(int *)(param_1 + 0x67c);
  uVar10 = *(uint *)(param_1 + 0x674);
  pbVar9 = *(byte **)(param_1 + 0x670);
  uVar4 = uVar10 >> 0x1e;
  if ((uVar4 & 2) == 0) {
    local_10 = 0;
  }
  else {
    iVar11 = iVar11 + -2;
    uVar10 = uVar10 << 2;
    uVar6 = (short)(*(int *)(param_1 + 0x25c) * 3 * iVar2 >> 4) - 1U | 1;
    if ((uVar4 & 1) == 0) {
      *param_3 = uVar6;
    }
    else {
      *param_3 = -uVar6;
    }
    local_10 = 1;
  }
  do {
    uVar4 = uVar10 >> 0x10;
    if (uVar4 < 0x4000) {
      if (uVar4 < 0x400) {
        if (uVar4 < 0x200) {
          if (uVar4 < 0x100) {
            if (uVar4 < 0x80) {
              if (uVar4 < 0x40) {
                if (uVar4 < 0x20) {
                  if (uVar4 < 0x10) {
                    pcVar5 = s_invalid_Huffman_code_in_Decode_M_100308c0;
                    goto LAB_10004248;
                  }
                  pcVar5 = &DAT_1003189c + uVar4 * 3;
                }
                else {
                  pcVar5 = &DAT_1003185c + (uVar10 >> 0x11) * 3;
                }
              }
              else {
                pcVar5 = &DAT_1003181c + (uVar10 >> 0x12) * 3;
              }
            }
            else {
              pcVar5 = &DAT_100317dc + (uVar10 >> 0x13) * 3;
            }
          }
          else {
            pcVar5 = &DAT_1003179c + (uVar10 >> 0x14) * 3;
          }
        }
        else {
          pcVar5 = &DAT_10031768 + (uVar10 >> 0x16) * 3;
        }
      }
      else {
        pcVar5 = &DAT_100313c0 + (uVar10 >> 0x18) * 3;
      }
    }
    else {
      pcVar5 = &DAT_10031380 + (uVar10 >> 0x1c) * 3;
    }
    uVar4 = uVar10 << (pcVar5[2] & 0x1fU);
    iVar12 = iVar11 - pcVar5[2];
    uVar7 = (uint)*pcVar5;
    while (iVar12 < 0x19) {
      iVar12 = iVar12 + 8;
      bVar1 = *pbVar9;
      bVar3 = (byte)iVar12 & 0x1f;
      pbVar9 = pbVar9 + 1;
      uVar4 = uVar4 | (uint)(bVar1 >> bVar3) | (uint)bVar1 << 0x20 - bVar3;
    }
    if ((int)uVar7 < 0x40) {
      uVar8 = (uint)pcVar5[1];
      iVar11 = iVar12 + -1;
      local_20 = uVar4 >> 0x1f;
      uVar10 = uVar4 * 2;
    }
    else {
      if (uVar7 == 0x40) goto LAB_1000427a;
      uVar7 = uVar4 >> 0x1a;
      iVar11 = iVar12 + -0xe;
      uVar8 = (uVar4 & 0x3ffffff) >> 0x12;
      uVar10 = uVar4 << 0xe;
      if (uVar8 == 0) {
        iVar11 = iVar12 + -0x16;
        uVar8 = (uVar4 & 0x3ffff) >> 10;
        uVar10 = uVar4 << 0x16;
      }
      else {
        if (uVar8 == 0x80) {
          iVar11 = iVar12 + -0x16;
          uVar8 = (uVar4 & 0x3ffff) >> 10;
          uVar10 = uVar4 << 0x16;
        }
        else if (uVar8 < 0x81) goto LAB_100041ad;
        uVar8 = uVar8 - 0x100;
      }
LAB_100041ad:
      local_20 = -((int)uVar8 >> 0x1f);
      if (local_20 != 0) {
        uVar8 = -uVar8;
      }
      do {
        iVar11 = iVar11 + 8;
        bVar1 = *pbVar9;
        bVar3 = (byte)iVar11 & 0x1f;
        pbVar9 = pbVar9 + 1;
        uVar10 = uVar10 | (uint)(bVar1 >> bVar3) | (uint)bVar1 << 0x20 - bVar3;
      } while (iVar11 < 0x19);
    }
    local_10 = local_10 + uVar7;
    if (0x3f < local_10) {
      pcVar5 = s_DCT_coeff_index_out_of_bounds_in_10030900;
LAB_10004248:
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_1000bb3c(param_1,pcVar5);
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
      uVar4 = uVar10;
      iVar12 = iVar11;
LAB_1000427a:
      while (iVar12 < 0x19) {
        iVar12 = iVar12 + 8;
        bVar1 = *pbVar9;
        bVar3 = (byte)iVar12 & 0x1f;
        pbVar9 = pbVar9 + 1;
        uVar4 = uVar4 | (uint)(bVar1 >> bVar3) | (uint)bVar1 << 0x20 - bVar3;
      }
      *(int *)(param_1 + 0x67c) = iVar12;
      *(uint *)(param_1 + 0x674) = uVar4;
      *(byte **)(param_1 + 0x670) = pbVar9;
      return;
    }
    iVar12 = (&DAT_10027000)[local_10];
    uVar4 = ((int)((uVar8 * 2 + 1) * iVar2 * *(int *)(param_1 + 0x25c + iVar12 * 4)) >> 4) - 1U | 1;
    if (local_20 == 0) {
      if (0x7ff < (int)uVar4) {
        uVar4 = 0x7ff;
      }
      param_3[iVar12] = (ushort)uVar4;
    }
    else if ((int)uVar4 < 0x801) {
      param_3[iVar12] = -(short)uVar4;
    }
    else {
      param_3[iVar12] = 0xf800;
    }
    local_10 = local_10 + 1;
  } while( true );
}


