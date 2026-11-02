/* Module: espr3260.dll
   Function: FUN_632f6fa0
   Address: 632f6fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f6fa0(float *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 2;
  *param_2 = 0x3f800000;
  param_2[1] = *param_1 * _DAT_632fa420;
  if (1 < param_3) {
    iVar3 = 8;
    do {
      param_1 = param_1 + 2;
      fVar1 = *param_1 * _DAT_632fa420;
      *(float *)((int)param_2 + iVar3) =
           *(float *)((int)param_2 + iVar3 + -4) * fVar1 -
           *(float *)((int)param_2 + iVar3 + -8) * _DAT_632fa420;
      if (1 < iVar4 + -1) {
        iVar6 = iVar4 + -2;
        pfVar2 = (float *)((int)param_2 + iVar3 + -4);
        iVar5 = iVar3 + -4;
        do {
          iVar6 = iVar6 + -1;
          *pfVar2 = pfVar2[-1] * fVar1 + *(float *)((int)param_2 + iVar5 + -8) + *pfVar2;
          pfVar2 = pfVar2 + -1;
          iVar5 = iVar5 + -4;
        } while (iVar6 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      param_2[1] = fVar1 + (float)param_2[1];
    } while (iVar4 <= param_3);
  }
  return;
}


