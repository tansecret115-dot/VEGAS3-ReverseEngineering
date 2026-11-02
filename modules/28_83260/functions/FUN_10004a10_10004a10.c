/* Module: 28_83260.dll
   Function: FUN_10004a10
   Address: 10004a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_10004a10(int param_1,undefined4 param_2,short param_3,int param_4,int param_5,short param_6,
            short param_7)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  float *pfVar9;
  
  pfVar9 = (float *)(param_5 + -4);
  if (param_6 == 0xb) {
    sVar7 = 0;
    if (0 < param_3) {
      do {
        iVar5 = (int)sVar7;
        sVar6 = sVar7 % 0xb;
        sVar7 = sVar7 + param_7;
        pfVar9 = pfVar9 + 1;
        iVar4 = (int)sVar6;
        iVar5 = iVar5 - iVar4;
        pfVar1 = (float *)(param_4 + iVar5 * 4);
        *pfVar9 = *(float *)(param_1 + iVar4 * 4) * *pfVar1 +
                  pfVar1[-0x2c] * *(float *)(param_1 + 0xb0 + iVar4 * 4) +
                  pfVar1[-0x42] * *(float *)(param_1 + 0x108 + iVar4 * 4) +
                  pfVar1[-0x16] * *(float *)(param_1 + 0x58 + iVar4 * 4) +
                  *(float *)(param_1 + 0x134 + iVar4 * 4) * pfVar1[-0x4d] +
                  *(float *)(param_1 + 0xdc + iVar4 * 4) * pfVar1[-0x37] +
                  *(float *)(param_1 + 0x84 + iVar4 * 4) * *(float *)(param_4 + -0x84 + iVar5 * 4) +
                  *(float *)(param_1 + 0x2c + iVar4 * 4) * *(float *)(param_4 + -0x2c + iVar5 * 4);
      } while (sVar7 < param_3);
      return 0;
    }
  }
  else if (param_6 == 8) {
    uVar8 = 0;
    if (0 < param_3) {
      do {
        iVar4 = (int)(short)uVar8;
        uVar3 = (short)uVar8 >> 0xf;
        uVar2 = uVar8 ^ uVar3;
        uVar8 = uVar8 + param_7;
        pfVar9 = pfVar9 + 1;
        iVar5 = (int)(short)((uVar2 - uVar3 & 7 ^ uVar3) - uVar3);
        iVar4 = iVar4 - iVar5;
        pfVar1 = (float *)(param_4 + iVar4 * 4);
        *pfVar9 = *(float *)(param_1 + iVar5 * 4) * *pfVar1 +
                  *(float *)(param_1 + 0xc0 + iVar5 * 4) * pfVar1[-0x30] +
                  *(float *)(param_1 + 0x40 + iVar5 * 4) * pfVar1[-0x10] +
                  *(float *)(param_1 + 0xe0 + iVar5 * 4) * pfVar1[-0x38] +
                  *(float *)(param_1 + 0xa0 + iVar5 * 4) * pfVar1[-0x28] +
                  *(float *)(param_1 + 0x60 + iVar5 * 4) * pfVar1[-0x18] +
                  *(float *)(param_1 + 0x20 + iVar5 * 4) * *(float *)(param_4 + -0x20 + iVar4 * 4) +
                  *(float *)(param_4 + -0x80 + iVar4 * 4) * *(float *)(param_1 + 0x80 + iVar5 * 4);
      } while ((short)uVar8 < param_3);
      return 0;
    }
  }
  else if (param_6 == 4) {
    uVar8 = 0;
    if (0 < param_3) {
      do {
        iVar4 = (int)(short)uVar8;
        uVar3 = (short)uVar8 >> 0xf;
        uVar2 = uVar8 ^ uVar3;
        uVar8 = uVar8 + param_7;
        pfVar9 = pfVar9 + 1;
        iVar5 = (int)(short)((uVar2 - uVar3 & 3 ^ uVar3) - uVar3);
        iVar4 = iVar4 - iVar5;
        pfVar1 = (float *)(param_4 + iVar4 * 4);
        *pfVar9 = *(float *)(param_1 + iVar5 * 4) * *pfVar1 +
                  *(float *)(param_1 + 0x40 + iVar5 * 4) * pfVar1[-0x10] +
                  *(float *)(param_1 + 0x60 + iVar5 * 4) * pfVar1[-0x18] +
                  *(float *)(param_1 + 0x20 + iVar5 * 4) * pfVar1[-8] +
                  pfVar1[-0x14] * *(float *)(param_1 + 0x50 + iVar5 * 4) +
                  pfVar1[-0xc] * *(float *)(param_1 + 0x30 + iVar5 * 4) +
                  *(float *)(param_4 + -0x10 + iVar4 * 4) * *(float *)(param_1 + 0x10 + iVar5 * 4) +
                  *(float *)(param_4 + -0x78 + iVar4 * 4) * *(float *)(param_1 + 0x78 + iVar5 * 4);
      } while ((short)uVar8 < param_3);
      return 0;
    }
  }
  else if ((param_6 == 2) && (uVar8 = 0, 0 < param_3)) {
    do {
      iVar4 = (int)(short)uVar8;
      uVar3 = (short)uVar8 >> 0xf;
      uVar2 = uVar8 ^ uVar3;
      uVar8 = uVar8 + param_7;
      pfVar9 = pfVar9 + 1;
      iVar5 = (int)(short)((uVar2 - uVar3 & 1 ^ uVar3) - uVar3);
      iVar4 = iVar4 - iVar5;
      pfVar1 = (float *)(param_4 + iVar4 * 4);
      *pfVar9 = *(float *)(param_1 + iVar5 * 4) * *pfVar1 +
                *(float *)(param_1 + 0x20 + iVar5 * 4) * pfVar1[-8] +
                pfVar1[-0xc] * *(float *)(param_1 + 0x30 + iVar5 * 4) +
                pfVar1[-4] * *(float *)(param_1 + 0x10 + iVar5 * 4) +
                pfVar1[-0xe] * *(float *)(param_1 + 0x38 + iVar5 * 4) +
                pfVar1[-10] * *(float *)(param_1 + 0x28 + iVar5 * 4) +
                *(float *)(param_4 + -0x18 + iVar4 * 4) * *(float *)(param_1 + 0x18 + iVar5 * 4) +
                *(float *)(param_4 + -8 + iVar4 * 4) * *(float *)(param_1 + 8 + iVar5 * 4);
    } while ((short)uVar8 < param_3);
  }
  return 0;
}


