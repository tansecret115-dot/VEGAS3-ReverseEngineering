/* Module: mp3plug.dll
   Function: FUN_5f709b20
   Address: 5f709b20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f709b20(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  fVar8 = _DAT_5f74b530;
  iVar9 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[3];
      fVar3 = (float)*(int *)(param_1[2] + iVar9 * 4);
      fVar2 = ((float)*(int *)(param_1[1] + iVar9 * 4) + fVar3) * (float)param_1[0xed] + fVar8;
      iVar10 = 0;
      fVar3 = fVar3 * (float)param_1[0xed] + fVar8;
      iVar11 = iVar10;
      fVar7 = _DAT_5f7609d8;
      if (0 < iVar1) {
        do {
          iVar11 = iVar10;
          if (((fVar3 <= (float)param_1[iVar10 + 5]) || (iVar11 = iVar10 + 1, iVar1 <= iVar11)) ||
             (fVar3 <= (float)param_1[iVar10 + 6])) break;
          iVar10 = iVar10 + 2;
          iVar11 = iVar10;
        } while (iVar10 < iVar1);
      }
      while ((iVar11 < iVar1 && (fVar4 = (float)param_1[iVar11 + 4], fVar4 < fVar2))) {
        if (fVar4 < fVar3) {
          fVar4 = fVar3;
        }
        fVar5 = (float)param_1[iVar11 + 5];
        if (fVar2 < (float)param_1[iVar11 + 5]) {
          fVar5 = fVar2;
        }
        iVar6 = iVar11 + 0x78;
        iVar10 = iVar11 * 4;
        iVar11 = iVar11 + 1;
        fVar7 = ((fVar5 - fVar4) / (float)param_1[iVar6]) * *(float *)(param_2 + iVar10) + fVar7;
      }
      iVar9 = iVar9 + 1;
      *(float *)(param_4 + -4 + iVar9 * 4) = fVar7;
    } while (iVar9 < *param_1);
  }
  return;
}


