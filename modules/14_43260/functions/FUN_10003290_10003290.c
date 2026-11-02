/* Module: 14_43260.dll
   Function: FUN_10003290
   Address: 10003290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10003290(float *param_1,short param_2,short param_3,int param_4,float *param_5,short param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  short sVar6;
  int iVar7;
  
  sVar6 = 0;
  if (0 < param_3) {
    do {
      pfVar4 = (float *)(param_4 + sVar6 * 4);
      fVar3 = _DAT_10010c24;
      if (0 < param_2) {
        iVar7 = (int)param_2;
        pfVar5 = param_1;
        do {
          fVar1 = *pfVar4;
          fVar2 = *pfVar5;
          pfVar4 = pfVar4 + -1;
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -1;
          fVar3 = fVar1 * fVar2 + fVar3;
        } while (iVar7 != 0);
      }
      *param_5 = fVar3;
      sVar6 = sVar6 + param_6;
      param_5 = param_5 + 1;
    } while (sVar6 < param_3);
  }
  return 0;
}


