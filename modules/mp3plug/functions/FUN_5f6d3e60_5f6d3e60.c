/* Module: mp3plug.dll
   Function: FUN_5f6d3e60
   Address: 5f6d3e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d3e60(uint *param_1,int *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  
  uVar1 = param_1[1];
  iVar6 = *param_2;
  pfVar2 = (float *)param_2[1];
  local_28 = 0;
  iVar4 = 2;
  *param_4 = *pfVar2 * *param_3;
  iVar5 = 2;
  param_4[1] = pfVar2[1] * param_3[1];
  if (2 < iVar6) {
    iVar7 = 3;
    do {
      param_4[iVar5] = pfVar2[iVar5] * param_3[iVar5] - pfVar2[iVar4 + 1] * param_3[iVar4 + 1];
      param_4[iVar4 + 1] = param_3[iVar4 + 1] * pfVar2[iVar5] + pfVar2[iVar4 + 1] * param_3[iVar5];
      iVar4 = iVar4 + -2;
      if (iVar4 <= local_28) {
        iVar4 = iVar7 * 2;
        local_28 = iVar5;
      }
      iVar5 = iVar5 + 2;
      iVar7 = iVar7 + 2;
    } while (iVar5 < iVar6);
  }
  FUN_5f6e5d60(param_4);
  uVar3 = *param_1;
  iVar4 = 0;
  iVar6 = iVar6 - uVar3;
  if (0 < (int)uVar3) {
    iVar5 = 0;
    if (0 < (int)(uVar3 & 0xfffffffe)) {
      do {
        param_4[iVar4] = *(float *)(uVar1 + iVar4 * 4) + param_4[iVar4];
        *(undefined4 *)(uVar1 + iVar4 * 4) = *(undefined4 *)(iVar5 + iVar6 * 4 + (int)param_4);
        param_4[iVar4 + 1] = *(float *)(uVar1 + 4 + iVar4 * 4) + param_4[iVar4 + 1];
        iVar7 = iVar5 + 4;
        iVar5 = iVar5 + 8;
        *(undefined4 *)(uVar1 + 4 + iVar4 * 4) = *(undefined4 *)(iVar7 + iVar6 * 4 + (int)param_4);
        iVar4 = iVar4 + 2;
      } while (iVar4 < (int)(uVar3 & 0xfffffffe));
    }
    for (; iVar4 < (int)uVar3; iVar4 = iVar4 + 1) {
      param_4[iVar4] = *(float *)(uVar1 + iVar4 * 4) + param_4[iVar4];
      iVar7 = iVar5 + iVar6 * 4;
      iVar5 = iVar5 + 4;
      *(undefined4 *)(uVar1 + iVar4 * 4) = *(undefined4 *)(iVar7 + (int)param_4);
    }
  }
  return;
}


