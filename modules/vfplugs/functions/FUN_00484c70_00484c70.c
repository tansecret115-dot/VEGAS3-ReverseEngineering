/* Module: vfplugs.dll
   Function: FUN_00484c70
   Address: 00484c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484c70(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[6];
    pbVar3 = (byte *)*param_2;
    iVar9 = param_2[3];
    iVar10 = param_2[2];
    iVar8 = param_2[4] - iVar10;
    param_2 = (int *)(param_2[5] - iVar9);
    if (*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0x1c) {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x10) * iVar9 + iVar10 * 4 + *(int *)(param_1 + 8))
      ;
      if (0 < (int)param_2) {
        do {
          puVar5 = puVar7;
          iVar9 = iVar8;
          if (0 < iVar8) {
            do {
              uVar2 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              *puVar5 = uVar2;
              iVar9 = iVar9 + -1;
              puVar5 = puVar5 + 1;
            } while (iVar9 != 0);
          }
          puVar7 = (undefined4 *)((int)puVar7 + *(int *)(param_1 + 0x10));
          pbVar3 = pbVar3 + iVar1 * 4;
          param_2 = (int *)((int)param_2 + -1);
        } while (param_2 != (int *)0x0);
        return;
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x10) * iVar9 + iVar10 * 0x10 + *(int *)(param_1 + 8);
      if (0 < (int)param_2) {
        do {
          if (0 < iVar8) {
            pbVar4 = pbVar3;
            pfVar6 = (float *)(iVar9 + 8);
            iVar10 = iVar8;
            do {
              pbVar3 = pbVar4 + 4;
              pfVar6[-2] = (float)*pbVar4 * _DAT_0048ca18;
              pfVar6[-1] = (float)pbVar4[1] * _DAT_0048ca18;
              iVar10 = iVar10 + -1;
              *pfVar6 = (float)pbVar4[2] * _DAT_0048ca18;
              pfVar6[1] = (float)pbVar4[3] * _DAT_0048ca18;
              pbVar4 = pbVar3;
              pfVar6 = pfVar6 + 4;
            } while (iVar10 != 0);
          }
          iVar9 = iVar9 + *(int *)(param_1 + 0x10);
          pbVar3 = pbVar3 + iVar1 * 4;
          param_2 = (int *)((int)param_2 + -1);
        } while (param_2 != (int *)0x0);
      }
    }
  }
  return;
}


