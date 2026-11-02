/* Module: 28_83260.dll
   Function: FUN_10004990
   Address: 10004990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004990(float *param_1,short param_2,short param_3,short *param_4,float *param_5)

{
  short sVar1;
  bool bVar2;
  float fVar3;
  short *psVar4;
  int iVar5;
  float *pfVar6;
  
  pfVar6 = param_5;
  for (iVar5 = (int)param_3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 1;
  }
  bVar2 = 0 < param_3;
  _param_3 = (int)param_3;
  if (bVar2) {
    do {
      fVar3 = _DAT_100070e8;
      if (0 < param_2) {
        iVar5 = (int)param_2;
        psVar4 = param_4;
        pfVar6 = param_1;
        do {
          sVar1 = *psVar4;
          psVar4 = psVar4 + -1;
          iVar5 = iVar5 + -1;
          fVar3 = (float)(int)sVar1 * *pfVar6 + fVar3;
          pfVar6 = pfVar6 + 1;
        } while (iVar5 != 0);
      }
      param_4 = param_4 + 1;
      _param_3 = _param_3 + -1;
      *param_5 = fVar3 * _DAT_100070e4;
      param_5 = param_5 + 1;
    } while (_param_3 != 0);
  }
  return 0;
}


