/* Module: vegas30.exe
   Function: FUN_005b1000
   Address: 005b1000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005b1000(float *param_1,float *param_2,float *param_3,float param_4)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float local_18;
  float local_c;
  
  local_18 = 0.0;
  local_c = SfVector3DDot(param_2,param_3);
  fVar2 = param_4 + _DAT_00629ff8;
  bVar1 = fVar2 <= local_c;
  iVar3 = 0;
  pfVar8 = param_2;
  pfVar9 = param_1;
  fVar10 = 0.0;
  if (0 < (int)param_2[0xfd]) {
    do {
      if (bVar1 != false) {
        pfVar6 = pfVar8;
        pfVar4 = pfVar9;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar4 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar4 = pfVar4 + 1;
        }
        local_18 = (float)((int)local_18 + 1);
        pfVar9 = pfVar9 + 7;
      }
      iVar3 = iVar3 + 1;
      pfVar6 = param_2 + (iVar3 % (int)param_2[0xfd]) * 7;
      fVar11 = SfVector3DDot(pfVar6,param_3);
      if (bVar1 != fVar2 <= fVar11) {
        iVar5 = 7;
        pfVar4 = pfVar8;
        pfVar7 = pfVar9;
        do {
          fVar10 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          iVar5 = iVar5 + -1;
          *pfVar7 = (fVar10 - *pfVar4) * ((param_4 - local_c) / (fVar11 - local_c)) + *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar5 != 0);
        local_18 = (float)((int)local_18 + 1);
        pfVar9 = pfVar9 + 7;
      }
      pfVar8 = pfVar8 + 7;
      fVar10 = local_18;
      local_c = fVar11;
      bVar1 = fVar2 <= fVar11;
    } while (iVar3 < (int)param_2[0xfd]);
  }
  param_1[0xfd] = fVar10;
  return 2 < (int)fVar10;
}


