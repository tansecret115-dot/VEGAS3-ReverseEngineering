/* Module: mp3plug.dll
   Function: FUN_5f7099d0
   Address: 5f7099d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f7099d0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  fVar7 = _DAT_5f74b530;
  iVar10 = 0;
  if (*param_1 < 1) {
    return;
  }
LAB_5f7099f1:
  iVar1 = param_1[3];
  fVar3 = (float)*(int *)(param_1[2] + iVar10 * 4);
  fVar2 = ((float)*(int *)(param_1[1] + iVar10 * 4) + fVar3) * (float)param_1[0xed] + fVar7;
  iVar8 = 0;
  fVar3 = fVar3 * (float)param_1[0xed] + fVar7;
  iVar9 = iVar8;
  fVar6 = _DAT_5f7609d0;
  if (0 < iVar1) {
    do {
      iVar9 = iVar8;
      if (((fVar3 <= (float)param_1[iVar8 + 5]) || (iVar9 = iVar8 + 1, iVar1 <= iVar9)) ||
         (fVar3 <= (float)param_1[iVar8 + 6])) break;
      iVar8 = iVar8 + 2;
      iVar9 = iVar8;
    } while (iVar8 < iVar1);
  }
  do {
    if (iVar1 <= iVar9) break;
    fVar4 = (float)param_1[iVar9 + 4];
    if (fVar2 <= fVar4) break;
    if (fVar4 < fVar3) {
      fVar4 = fVar3;
    }
    fVar5 = (float)(param_1[iVar9 + 0x78] + param_1[iVar9 + 4]);
    if (fVar2 < (float)(param_1[iVar9 + 0x78] + param_1[iVar9 + 4])) {
      fVar5 = fVar2;
    }
    iVar8 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    fVar6 = (fVar5 - fVar4) * *(float *)(param_2 + iVar8) + fVar6;
  } while( true );
  *(float *)(param_4 + iVar10 * 4) = fVar6 / (fVar2 - fVar3);
  iVar10 = iVar10 + 1;
  if (*param_1 <= iVar10) {
    return;
  }
  goto LAB_5f7099f1;
}


