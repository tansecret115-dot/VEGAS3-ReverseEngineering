/* Module: sftrans1.dll
   Function: FUN_004a3d80
   Address: 004a3d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004a3d80(undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4,int param_5,
            int param_6,uint param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar2 = param_2;
  iVar3 = *(int *)(param_5 + 4);
  iVar7 = param_2[2];
  iVar1 = *param_2;
  param_7 = param_7 / ((*(int *)(param_5 + 0xc) - iVar3) + 1U);
  param_2 = (int *)0x0;
  if (param_7 == 0) {
    iVar3 = piVar2[1];
    if (iVar3 <= piVar2[3]) {
      do {
        puVar11 = param_4;
        puVar13 = param_1;
        for (uVar6 = (piVar2[2] - *piVar2) * 4 + 4U >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= piVar2[3]);
      return 0;
    }
  }
  else if (iVar3 <= *(int *)(param_5 + 0xc)) {
    do {
      uVar9 = ((uint)param_2 & 0x3fff) * 0xff >> 0xe;
      uVar4 = (uint)param_2 >> 0xe;
      uVar6 = uVar4 + (iVar7 - iVar1) + 1;
      if (uVar4 < uVar6) {
        iVar10 = uVar6 - uVar4;
        pbVar8 = (byte *)((int)param_4 + uVar4 * 4 + 6);
        pcVar12 = (char *)((int)param_1 + 1);
        do {
          local_18 = (uint)pbVar8[-4];
          iVar5 = (*pbVar8 - local_18) * uVar9;
          pcVar12[1] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar8[-4];
          local_14 = (uint)pbVar8[-5];
          iVar5 = (pbVar8[-1] - local_14) * uVar9;
          *pcVar12 = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar8[-5];
          local_10 = (uint)pbVar8[-6];
          iVar5 = (pbVar8[-2] - local_10) * uVar9;
          pcVar12[-1] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar8[-6];
          local_c = (uint)pbVar8[-3];
          iVar5 = (pbVar8[1] - local_c) * uVar9;
          iVar10 = iVar10 + -1;
          pcVar12[2] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar8[-3];
          pbVar8 = pbVar8 + 4;
          pcVar12 = pcVar12 + 4;
        } while (iVar10 != 0);
      }
      param_1 = param_1 + param_3;
      param_2 = (int *)((int)param_2 + param_7);
      iVar3 = iVar3 + 1;
      param_4 = param_4 + param_6;
    } while (iVar3 <= *(int *)(param_5 + 0xc));
  }
  return 0;
}


