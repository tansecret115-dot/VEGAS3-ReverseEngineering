/* Module: erv23260.dll
   Function: FUN_63800580
   Address: 63800580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63800580(byte *param_1,byte *param_2,int param_3,byte *param_4,int param_5,undefined1 *param_6,
            int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  
  iVar6 = param_3 - (int)param_2;
  iVar8 = param_7 - iVar6;
  bVar1 = param_1[1];
  iVar5 = (uint)*param_1 * 2 + 2 + (uint)*param_4 + (uint)*param_2;
  bVar2 = param_4[1];
  *param_6 = (char)(iVar5 >> 2);
  bVar3 = param_1[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)param_2[1];
  bVar1 = param_4[2];
  param_6[1] = (char)(iVar9 >> 3);
  bVar2 = param_1[3];
  iVar5 = CONCAT31((int3)(iVar5 >> 10),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)param_2[2];
  bVar1 = param_4[3];
  param_6[2] = (char)(iVar5 >> 3);
  bVar3 = param_1[4];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)param_2[3];
  bVar1 = param_4[4];
  param_6[3] = (char)(iVar9 >> 3);
  bVar2 = param_1[5];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 +
          (uint)*(byte *)(param_3 + 4);
  bVar1 = param_4[5];
  param_6[4] = (char)(iVar5 >> 3);
  bVar3 = param_1[6];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
          (uint)*(byte *)(param_3 + 5);
  bVar1 = param_4[6];
  param_6[5] = (char)(iVar9 >> 3);
  bVar2 = param_1[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 +
          (uint)*(byte *)(param_3 + 6);
  bVar1 = *(byte *)(param_3 + 7);
  pbVar11 = param_1 + param_7;
  pbVar10 = (byte *)(param_3 + iVar8);
  param_6[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  param_6[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 2 + 2 + (uint)bVar1 +
                           (uint)param_4[7]) >> 2);
  pbVar7 = param_4 + param_7;
  puVar12 = param_6 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar4 * 2 + (uint)*pbVar7;
  bVar2 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar7[7]) >> 3);
  pbVar7 = pbVar7 + param_7;
  puVar12 = puVar12 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar4 * 2 + (uint)*pbVar7;
  bVar2 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar7[7]) >> 3);
  pbVar7 = pbVar7 + param_7;
  puVar12 = puVar12 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar4 * 2 + (uint)*pbVar7;
  bVar2 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[7];
  bVar1 = *pbVar10;
  puVar12[7] = (char)(iVar9 >> 3);
  pbVar7 = pbVar7 + (param_5 - (int)param_4) + param_7;
  puVar12 = puVar12 + param_7;
  bVar2 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)*pbVar7;
  bVar1 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar7[7]) >> 3);
  pbVar7 = pbVar7 + param_7;
  puVar12 = puVar12 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar4 * 2 + (uint)*pbVar7;
  bVar2 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = (uint)bVar1 + (CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = (uint)bVar1 + (CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 3 + 2) * 2 +
          (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar7[7]) >> 3);
  pbVar7 = pbVar7 + param_7;
  puVar12 = puVar12 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar4 * 2 + (uint)*pbVar7;
  bVar2 = pbVar10[1];
  *puVar12 = (char)(iVar5 >> 3);
  bVar3 = pbVar11[2];
  iVar9 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar7[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar9 = CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar10[iVar6 + 6];
  puVar12[5] = (char)(iVar9 >> 3);
  bVar2 = pbVar11[7];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar7[6];
  bVar1 = pbVar10[iVar6 + 7];
  pbVar11 = pbVar11 + param_7;
  pbVar10 = pbVar10 + iVar8 + iVar6;
  puVar12[6] = (char)(iVar5 >> 3);
  bVar3 = *pbVar11;
  bVar4 = *pbVar10;
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar9 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar7[7]) >> 3);
  pbVar7 = pbVar7 + param_7;
  puVar12 = puVar12 + param_7;
  bVar1 = pbVar11[1];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 2 + 2 + (uint)bVar4 + (uint)*pbVar7;
  bVar2 = pbVar7[1];
  *puVar12 = (char)(iVar5 >> 2);
  bVar3 = pbVar11[2];
  iVar8 = (uint)bVar1 * 5 + 4 + (uint)bVar2 * 2 + (uint)pbVar10[1];
  bVar1 = pbVar7[2];
  puVar12[1] = (char)(iVar8 >> 3);
  bVar2 = pbVar11[3];
  iVar5 = CONCAT31((int3)(iVar5 >> 10),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[2];
  bVar1 = pbVar7[3];
  puVar12[2] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[4];
  iVar8 = CONCAT31((int3)(iVar8 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[3];
  bVar1 = pbVar7[4];
  puVar12[3] = (char)(iVar8 >> 3);
  bVar2 = pbVar11[5];
  iVar5 = CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 4];
  bVar1 = pbVar7[5];
  puVar12[4] = (char)(iVar5 >> 3);
  bVar3 = pbVar11[6];
  iVar8 = CONCAT31((int3)(iVar8 >> 0xb),bVar2) * 5 + 4 + (uint)bVar1 * 2 + (uint)pbVar10[iVar6 + 5];
  bVar1 = pbVar7[6];
  puVar12[5] = (char)(iVar8 >> 3);
  bVar2 = pbVar11[7];
  bVar4 = pbVar10[iVar6 + 7];
  puVar12[6] = (char)((int)(CONCAT31((int3)(iVar5 >> 0xb),bVar3) * 5 + 4 + (uint)bVar1 * 2 +
                           (uint)pbVar10[iVar6 + 6]) >> 3);
  puVar12[7] = (char)((int)(CONCAT31((int3)(iVar8 >> 0xb),bVar2) * 2 + 2 + (uint)bVar4 +
                           (uint)pbVar7[7]) >> 2);
  return;
}


