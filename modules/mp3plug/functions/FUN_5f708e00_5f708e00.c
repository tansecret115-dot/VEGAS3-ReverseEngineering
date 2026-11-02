/* Module: mp3plug.dll
   Function: FUN_5f708e00
   Address: 5f708e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f708e00(int param_1,int param_2,int param_3,int *param_4,float *param_5,int param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  
  if (param_2 == 0) {
    if (0 < param_3) {
      pfVar7 = param_5 + param_3;
      do {
        iVar10 = param_4[1];
        pfVar11 = (float *)param_4[2];
        fVar4 = DAT_5f760950;
        if (0 < *param_4) {
          pfVar2 = pfVar11 + *param_4;
          iVar9 = 0;
          iVar8 = ((int)pfVar2 - (int)pfVar11 & 0xfffffff8U) + (int)pfVar11;
          fVar5 = DAT_5f760950;
          if ((int)pfVar11 < iVar8) {
            while( true ) {
              fVar5 = *pfVar11 * *(float *)(iVar9 + iVar10 * 4 + param_1) + fVar5;
              iVar12 = iVar9 + 4;
              iVar9 = iVar9 + 8;
              fVar4 = *(float *)(iVar12 + iVar10 * 4 + param_1) * pfVar11[1];
              pfVar11 = pfVar11 + 2;
              if (iVar8 <= (int)pfVar11) break;
              fVar5 = fVar4 + fVar5;
            }
            fVar4 = fVar4 + fVar5;
          }
          if ((int)pfVar11 < (int)pfVar2) {
            while( true ) {
              iVar8 = iVar9 + iVar10 * 4;
              iVar9 = iVar9 + 4;
              fVar5 = *(float *)(iVar8 + param_1) * *pfVar11;
              pfVar11 = pfVar11 + 1;
              if ((int)pfVar2 <= (int)pfVar11) break;
              fVar4 = fVar5 + fVar4;
            }
            fVar4 = fVar5 + fVar4;
          }
        }
        *param_5 = fVar4;
        param_5 = param_5 + 1;
        param_4 = param_4 + 3;
      } while ((int)param_5 < (int)pfVar7);
    }
  }
  else if (DAT_5f7529a4 == 0) {
    iVar10 = 0;
    if (0 < param_3) {
      do {
        iVar9 = param_4[1];
        pfVar7 = (float *)param_4[2];
        fVar4 = DAT_5f760950;
        fVar5 = _DAT_5f760958;
        if (0 < *param_4) {
          pfVar11 = pfVar7 + *param_4;
          iVar8 = 0;
          iVar12 = ((int)pfVar11 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
          fVar6 = _DAT_5f760958;
          if ((int)pfVar7 < iVar12) {
            while( true ) {
              iVar1 = iVar8 + iVar9 * 4;
              fVar6 = *pfVar7 * *(float *)(param_2 + iVar1) + fVar6;
              iVar3 = iVar8 + 4 + iVar9 * 4;
              fVar4 = pfVar7[1] * *(float *)(param_1 + iVar3) +
                      *pfVar7 * *(float *)(param_1 + iVar1) + fVar4;
              fVar5 = pfVar7[1] * *(float *)(param_2 + iVar3);
              pfVar7 = pfVar7 + 2;
              iVar8 = iVar8 + 8;
              if (iVar12 <= (int)pfVar7) break;
              fVar6 = fVar5 + fVar6;
            }
            fVar5 = fVar5 + fVar6;
          }
          if ((int)pfVar7 < (int)pfVar11) {
            while( true ) {
              iVar12 = iVar8 + iVar9 * 4;
              iVar8 = iVar8 + 4;
              fVar4 = *(float *)(param_1 + iVar12) * *pfVar7 + fVar4;
              fVar6 = *pfVar7 * *(float *)(param_2 + iVar12);
              pfVar7 = pfVar7 + 1;
              if ((int)pfVar11 <= (int)pfVar7) break;
              fVar5 = fVar6 + fVar5;
            }
            fVar5 = fVar6 + fVar5;
          }
        }
        param_4 = param_4 + 3;
        param_5[iVar10] = fVar4;
        *(float *)(param_6 + iVar10 * 4) = fVar5;
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_3);
    }
  }
  else {
    FUN_5f708c1c(param_3,param_2);
  }
  return;
}


