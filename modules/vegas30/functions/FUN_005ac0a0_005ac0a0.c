/* Module: vegas30.exe
   Function: FUN_005ac0a0
   Address: 005ac0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005ac0a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float local_10;
  float local_8;
  
  local_10 = 0.0;
  local_8 = SfVector3DDot(param_2,param_3 + 1);
  iVar3 = 0;
  fVar6 = 0.0;
  if (0 < (int)param_2[0xfd]) {
    pfVar5 = param_2 + 2;
    pfVar8 = param_1;
    bVar2 = *param_3 <= local_8;
    do {
      pfVar7 = pfVar8;
      if (bVar2 != false) {
        pfVar7 = pfVar5 + -2;
        pfVar9 = pfVar8;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        local_10 = (float)((int)local_10 + 1);
        pfVar7 = pfVar8 + 7;
      }
      iVar3 = iVar3 + 1;
      pfVar9 = param_2 + (iVar3 % (int)param_2[0xfd]) * 7;
      fVar10 = SfVector3DDot(pfVar9,param_3 + 1);
      fVar1 = *param_3;
      pfVar8 = pfVar7;
      if (bVar2 != fVar1 <= fVar10) {
        fVar6 = (*param_3 - local_8) / (fVar10 - local_8);
        local_10 = (float)((int)local_10 + 1);
        pfVar8 = pfVar7 + 7;
        *pfVar7 = (*pfVar9 - pfVar5[-2]) * fVar6 + pfVar5[-2];
        pfVar7[1] = (pfVar9[1] - pfVar5[-1]) * fVar6 + pfVar5[-1];
        pfVar7[2] = (pfVar9[2] - *pfVar5) * fVar6 + *pfVar5;
        pfVar7[3] = (pfVar9[3] - pfVar5[1]) * fVar6 + pfVar5[1];
        pfVar7[4] = (pfVar9[4] - pfVar5[2]) * fVar6 + pfVar5[2];
        pfVar7[5] = (pfVar9[5] - pfVar5[3]) * fVar6 + pfVar5[3];
        pfVar7[6] = (pfVar9[6] - pfVar5[4]) * fVar6 + pfVar5[4];
      }
      pfVar5 = pfVar5 + 7;
      fVar6 = local_10;
      local_8 = fVar10;
      bVar2 = fVar1 <= fVar10;
    } while (iVar3 < (int)param_2[0xfd]);
  }
  param_1[0xfd] = fVar6;
  return 2 < (int)fVar6;
}


