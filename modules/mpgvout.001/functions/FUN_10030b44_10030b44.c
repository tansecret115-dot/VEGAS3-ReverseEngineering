/* Module: mpgvout.001
   Function: FUN_10030b44
   Address: 10030b44
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10030b44(undefined1 *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int local_1c;
  
  iVar4 = param_3 >> 1;
  iVar1 = param_5 >> 1;
  iVar9 = iVar4 * 2 - iVar1;
  iVar10 = param_3 * 4 - param_5;
  iVar11 = param_2 * 4 + param_5 * -2;
  puVar7 = param_1 + param_2 * 2;
  puVar5 = (undefined1 *)*param_4;
  puVar14 = (undefined1 *)param_4[2];
  puVar8 = (undefined1 *)param_4[1];
  iVar2 = param_6 >> 2;
  if (0 < iVar2) {
    iVar3 = (param_5 >> 4) << 3;
    iVar12 = 0;
    puVar6 = param_1;
    do {
      iVar12 = iVar12 + 1;
      local_1c = 0;
      if (0 < iVar3) {
        puVar13 = puVar5 + param_3 * 2;
        do {
          *puVar5 = *puVar6;
          *puVar13 = *puVar7;
          *puVar8 = puVar6[1];
          puVar5[1] = puVar6[2];
          *puVar14 = puVar6[3];
          puVar13[1] = puVar7[2];
          puVar5[2] = puVar6[4];
          puVar13[2] = puVar7[4];
          puVar8[1] = puVar6[5];
          puVar5[3] = puVar6[6];
          puVar14[1] = puVar6[7];
          puVar13[3] = puVar7[6];
          puVar5[4] = puVar6[8];
          puVar13[4] = puVar7[8];
          puVar8[2] = puVar6[9];
          puVar5[5] = puVar6[10];
          puVar14[2] = puVar6[0xb];
          puVar13[5] = puVar7[10];
          puVar5[6] = puVar6[0xc];
          puVar13[6] = puVar7[0xc];
          puVar8[3] = puVar6[0xd];
          puVar5[7] = puVar6[0xe];
          puVar14[3] = puVar6[0xf];
          puVar13[7] = puVar7[0xe];
          puVar5[8] = puVar6[0x10];
          puVar13[8] = puVar7[0x10];
          puVar8[4] = puVar6[0x11];
          puVar5[9] = puVar6[0x12];
          puVar14[4] = puVar6[0x13];
          puVar13[9] = puVar7[0x12];
          puVar5[10] = puVar6[0x14];
          puVar13[10] = puVar7[0x14];
          puVar8[5] = puVar6[0x15];
          puVar5[0xb] = puVar6[0x16];
          puVar14[5] = puVar6[0x17];
          puVar13[0xb] = puVar7[0x16];
          puVar5[0xc] = puVar6[0x18];
          puVar13[0xc] = puVar7[0x18];
          puVar8[6] = puVar6[0x19];
          puVar5[0xd] = puVar6[0x1a];
          puVar14[6] = puVar6[0x1b];
          puVar13[0xd] = puVar7[0x1a];
          puVar5[0xe] = puVar6[0x1c];
          puVar13[0xe] = puVar7[0x1c];
          puVar8[7] = puVar6[0x1d];
          puVar5[0xf] = puVar6[0x1e];
          puVar14[7] = puVar6[0x1f];
          puVar13[0xf] = puVar7[0x1e];
          puVar13 = puVar13 + 0x10;
          puVar5 = puVar5 + 0x10;
          puVar14 = puVar14 + 8;
          puVar8 = puVar8 + 8;
          puVar6 = puVar6 + 0x20;
          puVar7 = puVar7 + 0x20;
          local_1c = local_1c + 8;
        } while (local_1c < iVar3);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          *puVar5 = *puVar6;
          puVar5[param_3 * 2] = *puVar7;
          *puVar8 = puVar6[1];
          puVar5[1] = puVar6[2];
          *puVar14 = puVar6[3];
          puVar5[param_3 * 2 + 1] = puVar7[2];
          puVar5 = puVar5 + 2;
          puVar14 = puVar14 + 1;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar5 = puVar5 + iVar10;
      puVar14 = puVar14 + iVar9;
      puVar8 = puVar8 + iVar9;
      puVar6 = puVar6 + iVar11;
      puVar7 = puVar7 + iVar11;
    } while (iVar12 < iVar2);
  }
  puVar14 = param_1 + param_2;
  puVar7 = puVar14 + param_2 * 2;
  puVar5 = (undefined1 *)(param_3 + *param_4);
  puVar6 = (undefined1 *)(iVar4 + param_4[2]);
  puVar8 = (undefined1 *)(iVar4 + param_4[1]);
  if (0 < iVar2) {
    iVar4 = (param_5 >> 4) << 3;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      local_1c = 0;
      if (0 < iVar4) {
        puVar13 = puVar5 + param_3 * 2;
        do {
          *puVar5 = *puVar14;
          *puVar13 = *puVar7;
          *puVar8 = puVar14[1];
          puVar5[1] = puVar14[2];
          *puVar6 = puVar14[3];
          puVar13[1] = puVar7[2];
          puVar5[2] = puVar14[4];
          puVar13[2] = puVar7[4];
          puVar8[1] = puVar14[5];
          puVar5[3] = puVar14[6];
          puVar6[1] = puVar14[7];
          puVar13[3] = puVar7[6];
          puVar5[4] = puVar14[8];
          puVar13[4] = puVar7[8];
          puVar8[2] = puVar14[9];
          puVar5[5] = puVar14[10];
          puVar6[2] = puVar14[0xb];
          puVar13[5] = puVar7[10];
          puVar5[6] = puVar14[0xc];
          puVar13[6] = puVar7[0xc];
          puVar8[3] = puVar14[0xd];
          puVar5[7] = puVar14[0xe];
          puVar6[3] = puVar14[0xf];
          puVar13[7] = puVar7[0xe];
          puVar5[8] = puVar14[0x10];
          puVar13[8] = puVar7[0x10];
          puVar8[4] = puVar14[0x11];
          puVar5[9] = puVar14[0x12];
          puVar6[4] = puVar14[0x13];
          puVar13[9] = puVar7[0x12];
          puVar5[10] = puVar14[0x14];
          puVar13[10] = puVar7[0x14];
          puVar8[5] = puVar14[0x15];
          puVar5[0xb] = puVar14[0x16];
          puVar6[5] = puVar14[0x17];
          puVar13[0xb] = puVar7[0x16];
          puVar5[0xc] = puVar14[0x18];
          puVar13[0xc] = puVar7[0x18];
          puVar8[6] = puVar14[0x19];
          puVar5[0xd] = puVar14[0x1a];
          puVar6[6] = puVar14[0x1b];
          puVar13[0xd] = puVar7[0x1a];
          puVar5[0xe] = puVar14[0x1c];
          puVar13[0xe] = puVar7[0x1c];
          puVar8[7] = puVar14[0x1d];
          puVar5[0xf] = puVar14[0x1e];
          puVar6[7] = puVar14[0x1f];
          puVar13[0xf] = puVar7[0x1e];
          puVar13 = puVar13 + 0x10;
          puVar5 = puVar5 + 0x10;
          puVar6 = puVar6 + 8;
          puVar8 = puVar8 + 8;
          puVar14 = puVar14 + 0x20;
          puVar7 = puVar7 + 0x20;
          local_1c = local_1c + 8;
        } while (local_1c < iVar4);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          *puVar5 = *puVar14;
          puVar5[param_3 * 2] = *puVar7;
          *puVar8 = puVar14[1];
          puVar5[1] = puVar14[2];
          *puVar6 = puVar14[3];
          puVar5[param_3 * 2 + 1] = puVar7[2];
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 4;
          puVar7 = puVar7 + 4;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar5 = puVar5 + iVar10;
      puVar6 = puVar6 + iVar9;
      puVar8 = puVar8 + iVar9;
      puVar14 = puVar14 + iVar11;
      puVar7 = puVar7 + iVar11;
    } while (iVar3 < iVar2);
  }
  return;
}


