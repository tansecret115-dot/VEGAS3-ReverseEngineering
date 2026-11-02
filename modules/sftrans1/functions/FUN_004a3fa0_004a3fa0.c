/* Module: sftrans1.dll
   Function: FUN_004a3fa0
   Address: 004a3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a3fa0(char *param_1,int *param_2,int param_3,undefined4 *param_4,int *param_5,int param_6,
            uint param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int local_18;
  uint local_10;
  
  iVar3 = param_2[1];
  iVar9 = (param_2[3] - iVar3) + 1;
  param_7 = param_7 / ((param_5[2] - *param_5) + 1U);
  local_10 = 0;
  if (param_7 == 0) {
    if (iVar3 <= param_2[3]) {
      do {
        puVar7 = param_4;
        puVar10 = (undefined4 *)param_1;
        for (uVar4 = (param_2[2] - *param_2) * 4 + 4U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        param_1 = (char *)((int)param_1 + param_3 * 4);
        param_4 = param_4 + param_6;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2[3]);
      return 0;
    }
  }
  else {
    iVar3 = *param_2;
    if (iVar3 <= param_2[2]) {
      param_1 = (char *)((int)param_1 + 1);
      do {
        uVar4 = (local_10 & 0x3fff) * 0xff >> 0xe;
        iVar6 = (local_10 >> 0xe) * param_6;
        if (0 < iVar9) {
          pbVar8 = (byte *)((int)param_4 + iVar6 * 4 + 1);
          pbVar11 = (byte *)((int)param_4 + (iVar6 + param_6) * 4 + 1);
          pcVar5 = param_1;
          local_18 = iVar9;
          do {
            iVar6 = ((uint)pbVar11[1] - (uint)pbVar8[1]) * uVar4;
            pcVar5[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar8[1];
            iVar6 = ((uint)*pbVar11 - (uint)*pbVar8) * uVar4;
            *pcVar5 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar8;
            iVar6 = ((uint)pbVar11[-1] - (uint)pbVar8[-1]) * uVar4;
            pcVar5[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar8[-1];
            pbVar1 = pbVar8 + 2;
            pbVar2 = pbVar11 + 2;
            pbVar8 = pbVar8 + param_6 * 4;
            pbVar11 = pbVar11 + param_6 * 4;
            iVar6 = ((uint)*pbVar2 - (uint)*pbVar1) * uVar4;
            pcVar5[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar1;
            pcVar5 = pcVar5 + param_3 * 4;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
        param_1 = param_1 + 4;
        param_4 = param_4 + 1;
        local_10 = local_10 + param_7;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2[2]);
    }
  }
  return 0;
}


