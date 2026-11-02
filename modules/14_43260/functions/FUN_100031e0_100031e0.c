/* Module: 14_43260.dll
   Function: FUN_100031e0
   Address: 100031e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100031e0(float *param_1,ushort param_2,short param_3,short *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  short *psVar3;
  short *psVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  
  if (0 < param_3) {
    _param_3 = (int)param_3;
    do {
      psVar4 = param_4;
      pfVar6 = param_1;
      fVar1 = _DAT_10010c24;
      fVar2 = _DAT_10010c24;
      if (0 < (short)param_2 >> 1) {
        iVar7 = (int)((short)param_2 >> 1);
        do {
          psVar3 = psVar4 + -1;
          pfVar5 = pfVar6 + 1;
          fVar1 = (float)(int)*psVar4 * *pfVar6 + fVar1;
          psVar4 = psVar4 + -2;
          pfVar6 = pfVar6 + 2;
          iVar7 = iVar7 + -1;
          fVar2 = (float)(int)*psVar3 * *pfVar5 + fVar2;
        } while (iVar7 != 0);
      }
      if ((param_2 & 1) != 0) {
        fVar1 = (float)(int)*psVar4 * *pfVar6 + fVar1;
      }
      param_4 = param_4 + 1;
      *param_5 = (fVar2 + fVar1) * _DAT_10010c28;
      _param_3 = _param_3 + -1;
      param_5 = param_5 + 1;
    } while (_param_3 != 0);
  }
  return 0;
}


