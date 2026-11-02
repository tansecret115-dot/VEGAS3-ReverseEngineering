/* Module: mcmpgdec.dll
   Function: FUN_10003cc8
   Address: 10003cc8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003cc8(int param_1,int param_2,int *param_3,undefined2 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint local_20;
  int local_10;
  
  if (param_2 < 4) {
    uVar3 = FUN_1000a798(param_1);
    iVar4 = uVar3 + *param_3;
    *param_3 = iVar4;
  }
  else if (param_2 == 4) {
    uVar3 = FUN_1000a848(param_1);
    iVar4 = uVar3 + param_3[1];
    param_3[1] = iVar4;
  }
  else {
    uVar3 = FUN_1000a848(param_1);
    iVar4 = uVar3 + param_3[2];
    param_3[2] = iVar4;
  }
  *param_4 = (short)(iVar4 << 3);
  if ((*(int *)(param_1 + 0x5c) != 0) || (*(int *)(param_1 + 0x5c0) == 4)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x660);
  iVar11 = *(int *)(param_1 + 0x67c);
  uVar3 = *(uint *)(param_1 + 0x674);
  pbVar9 = *(byte **)(param_1 + 0x670);
  local_10 = 1;
  do {
    uVar6 = uVar3 >> 0x10;
    if (uVar6 < 0x4000) {
      if (uVar6 < 0x400) {
        if (uVar6 < 0x200) {
          if (uVar6 < 0x100) {
            if (uVar6 < 0x80) {
              if (uVar6 < 0x40) {
                if (uVar6 < 0x20) {
                  if (uVar6 < 0x10) {
                    pcVar5 = s_invalid_Huffman_code_in_Decode_M_10030840;
                    goto LAB_10003f78;
                  }
                  pcVar5 = &DAT_1003189c + uVar6 * 3;
                }
                else {
                  pcVar5 = &DAT_1003185c + (uVar3 >> 0x11) * 3;
                }
              }
              else {
                pcVar5 = &DAT_1003181c + (uVar3 >> 0x12) * 3;
              }
            }
            else {
              pcVar5 = &DAT_100317dc + (uVar3 >> 0x13) * 3;
            }
          }
          else {
            pcVar5 = &DAT_1003179c + (uVar3 >> 0x14) * 3;
          }
        }
        else {
          pcVar5 = &DAT_10031768 + (uVar3 >> 0x16) * 3;
        }
      }
      else {
        pcVar5 = &DAT_100313c0 + (uVar3 >> 0x18) * 3;
      }
    }
    else {
      pcVar5 = &DAT_10031380 + (uVar3 >> 0x1c) * 3;
    }
    uVar6 = uVar3 << (pcVar5[2] & 0x1fU);
    iVar10 = iVar11 - pcVar5[2];
    uVar7 = (uint)*pcVar5;
    while (iVar10 < 0x19) {
      iVar10 = iVar10 + 8;
      bVar1 = *pbVar9;
      bVar2 = (byte)iVar10 & 0x1f;
      pbVar9 = pbVar9 + 1;
      uVar6 = uVar6 | (uint)(bVar1 >> bVar2) | (uint)bVar1 << 0x20 - bVar2;
    }
    if ((int)uVar7 < 0x40) {
      uVar8 = (uint)pcVar5[1];
      iVar11 = iVar10 + -1;
      local_20 = uVar6 >> 0x1f;
      uVar3 = uVar6 * 2;
    }
    else {
      if (uVar7 == 0x40) goto LAB_10003faa;
      uVar7 = uVar6 >> 0x1a;
      iVar11 = iVar10 + -0xe;
      uVar8 = (uVar6 & 0x3ffffff) >> 0x12;
      uVar3 = uVar6 << 0xe;
      if (uVar8 == 0) {
        iVar11 = iVar10 + -0x16;
        uVar8 = (uVar6 & 0x3ffff) >> 10;
        uVar3 = uVar6 << 0x16;
      }
      else {
        if (uVar8 == 0x80) {
          iVar11 = iVar10 + -0x16;
          uVar8 = (uVar6 & 0x3ffff) >> 10;
          uVar3 = uVar6 << 0x16;
        }
        else if (uVar8 < 0x81) goto LAB_10003edd;
        uVar8 = uVar8 - 0x100;
      }
LAB_10003edd:
      local_20 = -((int)uVar8 >> 0x1f);
      if (local_20 != 0) {
        uVar8 = -uVar8;
      }
      do {
        iVar11 = iVar11 + 8;
        bVar1 = *pbVar9;
        bVar2 = (byte)iVar11 & 0x1f;
        pbVar9 = pbVar9 + 1;
        uVar3 = uVar3 | (uint)(bVar1 >> bVar2) | (uint)bVar1 << 0x20 - bVar2;
      } while (iVar11 < 0x19);
    }
    local_10 = local_10 + uVar7;
    if (0x3f < local_10) {
      pcVar5 = s_DCT_coeff_index_out_of_bounds_in_10030880;
LAB_10003f78:
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_1000bb3c(param_1,pcVar5);
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
      uVar6 = uVar3;
      iVar10 = iVar11;
LAB_10003faa:
      while (iVar10 < 0x19) {
        iVar10 = iVar10 + 8;
        bVar1 = *pbVar9;
        bVar2 = (byte)iVar10 & 0x1f;
        pbVar9 = pbVar9 + 1;
        uVar6 = uVar6 | (uint)(bVar1 >> bVar2) | (uint)bVar1 << 0x20 - bVar2;
      }
      *(int *)(param_1 + 0x67c) = iVar10;
      *(uint *)(param_1 + 0x674) = uVar6;
      *(byte **)(param_1 + 0x670) = pbVar9;
      return;
    }
    iVar10 = (&DAT_10027000)[local_10];
    uVar6 = ((int)(uVar8 * iVar4 * *(int *)(param_1 + 0x15c + iVar10 * 4)) >> 3) - 1U | 1;
    if (local_20 == 0) {
      if (0x7ff < (int)uVar6) {
        uVar6 = 0x7ff;
      }
      param_4[iVar10] = (short)uVar6;
    }
    else if ((int)uVar6 < 0x801) {
      param_4[iVar10] = -(short)uVar6;
    }
    else {
      param_4[iVar10] = 0xf800;
    }
    local_10 = local_10 + 1;
  } while( true );
}


