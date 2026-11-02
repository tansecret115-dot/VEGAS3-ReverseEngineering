/* Module: sfppack2.dll
   Function: FUN_5cd33170
   Address: 5cd33170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd33170(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  
  fVar5 = param_3 + _DAT_5cd5344c;
  if (param_2 != 0) {
    uVar7 = param_2 + 3U >> 2;
    pfVar6 = (float *)(param_1 + 0x1c);
    do {
      uVar7 = uVar7 - 1;
      fVar4 = (pfVar6[-3] - pfVar6[-1]) * fVar5 - (pfVar6[-2] - *pfVar6) * param_4;
      fVar3 = (pfVar6[-3] - pfVar6[-1]) * param_4 + (pfVar6[-2] - *pfVar6) * fVar5;
      fVar1 = pfVar6[-7];
      fVar2 = pfVar6[-7];
      pfVar6[-7] = pfVar6[-1] + pfVar6[-3] + pfVar6[-5] + fVar1;
      pfVar6[-3] = (pfVar6[-5] + fVar1) - (pfVar6[-1] + pfVar6[-3]);
      pfVar6[-1] = (fVar2 - pfVar6[-5]) - fVar4;
      pfVar6[-5] = (fVar2 - pfVar6[-5]) + fVar4;
      fVar1 = pfVar6[-6];
      fVar2 = pfVar6[-6];
      pfVar6[-6] = *pfVar6 + pfVar6[-2] + pfVar6[-4] + fVar1;
      pfVar6[-2] = (pfVar6[-4] + fVar1) - (*pfVar6 + pfVar6[-2]);
      *pfVar6 = (fVar2 - pfVar6[-4]) - fVar3;
      pfVar6[-4] = (fVar2 - pfVar6[-4]) + fVar3;
      pfVar6 = pfVar6 + 8;
    } while (uVar7 != 0);
  }
  return;
}


