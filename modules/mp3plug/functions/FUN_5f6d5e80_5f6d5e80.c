/* Module: mp3plug.dll
   Function: FUN_5f6d5e80
   Address: 5f6d5e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6d5e80(float *param_1,int param_2,float *param_3,int param_4,float *param_5,int param_6,
            uint param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  if ((param_7 & 1) != 0) {
    fVar1 = *param_3;
    if (*param_1 <= fVar1) {
      fVar1 = *param_1;
    }
    *param_5 = fVar1;
    iVar6 = 1;
    iVar3 = param_2;
    iVar4 = param_4;
    iVar5 = param_6;
  }
  for (; iVar6 < (int)param_7; iVar6 = iVar6 + 2) {
    fVar1 = param_3[iVar4];
    if (param_1[iVar3] <= fVar1) {
      fVar1 = param_1[iVar3];
    }
    fVar2 = param_3[param_4 + iVar4];
    if (param_1[param_2 + iVar3] <= fVar2) {
      fVar2 = param_1[param_2 + iVar3];
    }
    param_5[iVar5] = fVar1;
    param_5[param_6 + iVar5] = fVar2;
    iVar3 = iVar3 + param_2 * 2;
    iVar4 = iVar4 + param_4 * 2;
    iVar5 = iVar5 + param_6 * 2;
  }
  return;
}


