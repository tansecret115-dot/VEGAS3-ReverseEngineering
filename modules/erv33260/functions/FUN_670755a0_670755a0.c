/* Module: erv33260.dll
   Function: FUN_670755a0
   Address: 670755a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_670755a0(short *param_1,uint param_2,undefined *param_3,undefined *param_4,int param_5,
                 undefined4 *param_6,uint *param_7)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar11;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  uint local_10;
  uint local_c;
  byte bVar4;
  byte bVar5;
  
  pbVar14 = (byte *)*param_6;
  uVar13 = *param_7;
  uVar2 = (uint)*pbVar14 << 0x18;
  if (param_3 == (undefined *)0x0) {
    iVar6 = *(int *)(&DAT_670931c0 + param_5 * 4) * 0xe8e0;
    if (param_4 == (undefined *)0x0) {
      puVar7 = &DAT_6712cb48;
      puVar1 = &DAT_671309a8;
    }
    else {
      puVar7 = &DAT_67131540;
      puVar1 = &DAT_671353a0;
    }
    param_3 = puVar7 + iVar6;
    param_4 = puVar1 + iVar6;
    puVar7 = &DAT_67135f38 + iVar6;
  }
  else {
    iVar6 = *(int *)(&DAT_67093140 + param_5 * 4) * 0x1b770;
    if (param_4 == (undefined *)0x0) {
      param_3 = (undefined *)((int)param_3 * 0x3e60 + iVar6 + 0x670a4988);
      param_4 = &DAT_670b4308 + iVar6;
      puVar7 = &DAT_670b9898 + iVar6;
    }
    else {
      param_3 = &DAT_670b4ea0 + iVar6;
      param_4 = &DAT_670b8d00 + iVar6;
      puVar7 = &DAT_670b9898 + iVar6;
    }
  }
  uVar12 = param_2 >> 0x15 & 0x7f8;
  if ((param_2 & 0xff0000) != 0) {
    uVar12 = uVar12 | 4;
  }
  bVar11 = (byte)(param_2 >> 8);
  if (bVar11 != 0) {
    uVar12 = uVar12 | 2;
  }
  uVar8 = param_2 & 0xff;
  if (uVar8 != 0) {
    uVar12 = uVar12 | 1;
  }
  iVar6 = (0x20 - (uint)(byte)param_3[uVar12]) - uVar13;
  if (iVar6 < 1) {
    pbVar14[3] = 0;
    *pbVar14 = *pbVar14;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    uVar9 = uVar13 & 0xfffffff8;
    pbVar14 = pbVar14 + (uVar13 >> 3);
    uVar13 = uVar13 & 7;
    uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
    iVar6 = iVar6 + uVar9;
  }
  uVar2 = uVar2 | *(int *)(param_3 + uVar12 * 4 + 0x360) << ((byte)iVar6 & 0x1f);
  uVar13 = uVar13 + (byte)param_3[uVar12];
  if ((uVar12 & 0xfffffff8) != 0) {
    iVar6 = (int)*param_1;
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_10 = (uint)bVar15;
      iVar10 = iVar6 + -3;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar5 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de4f)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db4f)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_10 << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar5 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[4];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar5 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[5];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar5 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14[3] = (byte)uVar2;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14[3] = (byte)uVar2;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
  }
  uVar12 = param_2 >> 0x10 & 0xff;
  if (uVar12 != 0) {
    iVar6 = (0x20 - (uint)(byte)param_4[uVar12]) - uVar13;
    if (iVar6 < 1) {
      *pbVar14 = (byte)(uVar2 >> 0x18);
      pbVar14[1] = (byte)(uVar2 >> 0x10);
      pbVar14[2] = (byte)(uVar2 >> 8);
      uVar9 = uVar13 & 0xfffffff8;
      pbVar14[3] = (byte)uVar2;
      pbVar14 = pbVar14 + (uVar13 >> 3);
      uVar13 = uVar13 & 7;
      uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
      iVar6 = iVar6 + uVar9;
    }
    uVar2 = uVar2 | *(int *)(param_4 + uVar12 * 4 + 0x6c) << ((byte)iVar6 & 0x1f);
    uVar13 = uVar13 + (byte)param_4[uVar12];
    iVar6 = (int)param_1[2];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -3;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar5 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de4f)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar5;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db4f)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[3];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar3 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar3;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar3;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[6];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar5 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar3 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar3;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar5;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar3;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar5;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar13) - uVar12;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[7];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar5 = (byte)(uVar2 >> 8);
        bVar4 = (byte)(uVar2 >> 0x10);
        bVar3 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar3;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar5;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar3;
            pbVar14[1] = bVar4;
            pbVar14[2] = bVar5;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar5 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14[3] = (byte)uVar2;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar5 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14[3] = (byte)uVar2;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
  }
  uVar12 = (uint)bVar11;
  if (uVar12 != 0) {
    iVar6 = (0x20 - (uint)(byte)param_4[uVar12]) - uVar13;
    if (iVar6 < 1) {
      *pbVar14 = (byte)(uVar2 >> 0x18);
      pbVar14[1] = (byte)(uVar2 >> 0x10);
      pbVar14[2] = (byte)(uVar2 >> 8);
      uVar9 = uVar13 & 0xfffffff8;
      pbVar14[3] = (byte)uVar2;
      pbVar14 = pbVar14 + (uVar13 >> 3);
      uVar13 = uVar13 & 7;
      uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
      iVar6 = iVar6 + uVar9;
    }
    uVar2 = uVar2 | *(int *)(param_4 + uVar12 * 4 + 0x6c) << ((byte)iVar6 & 0x1f);
    uVar13 = uVar13 + (byte)param_4[uVar12];
    iVar6 = (int)param_1[8];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -3;
      if (-1 < iVar10) {
        bVar11 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de4f)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db4f)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[0xc];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar4 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar11 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[9];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar4 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar11 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[0xd];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      local_c = (uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar11 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar9 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
            iVar10 = iVar10 + uVar9;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar9 = uVar13 & 0xfffffff8;
              pbVar14[3] = (byte)uVar2;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar9 & 0x1f);
              iVar6 = iVar6 + uVar9;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14[3] = (byte)uVar2;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | local_c << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
  }
  if (uVar8 != 0) {
    iVar6 = (0x20 - (uint)(byte)param_4[uVar8 + 0x5cc]) - uVar13;
    if (iVar6 < 1) {
      *pbVar14 = (byte)(uVar2 >> 0x18);
      pbVar14[1] = (byte)(uVar2 >> 0x10);
      pbVar14[2] = (byte)(uVar2 >> 8);
      uVar12 = uVar13 & 0xfffffff8;
      pbVar14[3] = (byte)uVar2;
      pbVar14 = pbVar14 + (uVar13 >> 3);
      uVar13 = uVar13 & 7;
      uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
      iVar6 = iVar6 + uVar12;
    }
    uVar2 = uVar2 | *(int *)(param_4 + uVar8 * 4 + 0x638) << ((byte)iVar6 & 0x1f);
    uVar13 = uVar13 + (byte)param_4[uVar8 + 0x5cc];
    iVar6 = (int)param_1[10];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      param_3 = (undefined *)(uint)bVar15;
      iVar10 = iVar6 + -3;
      if (-1 < iVar10) {
        bVar4 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar11 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de4f)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar11;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar4;
            uVar8 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
            iVar10 = iVar10 + uVar8;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db4f)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar8 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
              iVar6 = iVar6 + uVar8;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | (int)param_3 << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[0xb];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      param_3 = (undefined *)(uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar11 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar8 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
            iVar10 = iVar10 + uVar8;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar8 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
              iVar6 = iVar6 + uVar8;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | (int)param_3 << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[0xe];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      param_3 = (undefined *)(uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar11 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar8 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
            iVar10 = iVar10 + uVar8;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              pbVar14[3] = (byte)uVar2;
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar8 = uVar13 & 0xfffffff8;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
              iVar6 = iVar6 + uVar8;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        pbVar14[3] = (byte)uVar2;
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | (int)param_3 << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
    iVar6 = (int)param_1[0xf];
    if (iVar6 != 0) {
      bVar15 = iVar6 < 0;
      if (bVar15) {
        iVar6 = -iVar6;
      }
      param_4 = (undefined *)(uint)bVar15;
      iVar10 = iVar6 + -2;
      if (-1 < iVar10) {
        bVar11 = (byte)(uVar2 >> 8);
        bVar5 = (byte)(uVar2 >> 0x10);
        bVar4 = (byte)(uVar2 >> 0x18);
        if (iVar10 < 0x16) {
          iVar6 = (0x20 - (uint)(byte)puVar7[iVar10]) - uVar13;
          if (iVar6 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar12 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
            iVar6 = iVar6 + uVar12;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + iVar10 * 4 + 0x20) << ((byte)iVar6 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[iVar10];
        }
        else {
          uVar12 = (uint)(byte)(&DAT_6709de50)[iVar6];
          iVar10 = (0x20 - (uint)(byte)puVar7[uVar12 + 0x16]) - uVar13;
          if (iVar10 < 1) {
            pbVar14[3] = (byte)uVar2;
            *pbVar14 = bVar4;
            pbVar14[1] = bVar5;
            pbVar14[2] = bVar11;
            uVar8 = uVar13 & 0xfffffff8;
            pbVar14 = pbVar14 + (uVar13 >> 3);
            uVar13 = uVar13 & 7;
            uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
            iVar10 = iVar10 + uVar8;
          }
          uVar2 = uVar2 | *(int *)(puVar7 + uVar12 * 4 + 0x78) << ((byte)iVar10 & 0x1f);
          uVar13 = uVar13 + (byte)puVar7[uVar12 + 0x16];
          if (1 < uVar12) {
            bVar11 = (&DAT_6709db50)[iVar6];
            iVar6 = (0x21 - uVar12) - uVar13;
            if (iVar6 < 1) {
              *pbVar14 = (byte)(uVar2 >> 0x18);
              pbVar14[1] = (byte)(uVar2 >> 0x10);
              pbVar14[2] = (byte)(uVar2 >> 8);
              uVar8 = uVar13 & 0xfffffff8;
              pbVar14[3] = (byte)uVar2;
              pbVar14 = pbVar14 + (uVar13 >> 3);
              uVar13 = uVar13 & 7;
              uVar2 = uVar2 << ((byte)uVar8 & 0x1f);
              iVar6 = iVar6 + uVar8;
            }
            uVar13 = (uVar13 - 1) + uVar12;
            uVar2 = uVar2 | (uint)bVar11 << ((byte)iVar6 & 0x1f);
          }
        }
      }
      iVar6 = 0x1f - uVar13;
      if (iVar6 < 1) {
        *pbVar14 = (byte)(uVar2 >> 0x18);
        pbVar14[1] = (byte)(uVar2 >> 0x10);
        pbVar14[2] = (byte)(uVar2 >> 8);
        uVar12 = uVar13 & 0xfffffff8;
        pbVar14[3] = (byte)uVar2;
        pbVar14 = pbVar14 + (uVar13 >> 3);
        uVar13 = uVar13 & 7;
        uVar2 = uVar2 << ((byte)uVar12 & 0x1f);
        iVar6 = iVar6 + uVar12;
      }
      uVar2 = uVar2 | (int)param_4 << ((byte)iVar6 & 0x1f);
      uVar13 = uVar13 + 1;
    }
  }
  *pbVar14 = (byte)(uVar2 >> 0x18);
  pbVar14[3] = (byte)uVar2;
  pbVar14[1] = (byte)(uVar2 >> 0x10);
  pbVar14[2] = (byte)(uVar2 >> 8);
  *param_6 = pbVar14 + (uVar13 >> 3);
  *param_7 = uVar13 & 7;
  return;
}


