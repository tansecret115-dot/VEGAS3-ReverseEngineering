/* Module: vidpcore.dll
   Function: FUN_5df00cc0
   Address: 5df00cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5df00cc0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  
  param_3 = param_3 + _DAT_5df205c8;
  if (param_2 != 0) {
    uVar12 = param_2 + 3U >> 2;
    pfVar11 = (float *)(param_1 + 0x34);
    do {
      fVar3 = (pfVar11[-5] - pfVar11[-1]) * param_3 - (pfVar11[-3] - pfVar11[1]) * param_4;
      fVar9 = (pfVar11[-5] - pfVar11[-1]) * param_4 + (pfVar11[-3] - pfVar11[1]) * param_3;
      fVar4 = (pfVar11[-4] - *pfVar11) * param_3 - (pfVar11[-2] - pfVar11[2]) * param_4;
      fVar10 = (pfVar11[-4] - *pfVar11) * param_4 + (pfVar11[-2] - pfVar11[2]) * param_3;
      fVar1 = pfVar11[-0xd];
      fVar2 = pfVar11[-0xd];
      pfVar11[-0xd] = pfVar11[-1] + pfVar11[-5] + fVar1 + pfVar11[-9];
      pfVar11[-5] = (fVar1 + pfVar11[-9]) - (pfVar11[-1] + pfVar11[-5]);
      pfVar11[-1] = (fVar2 - pfVar11[-9]) - fVar3;
      pfVar11[-9] = (fVar2 - pfVar11[-9]) + fVar3;
      fVar1 = pfVar11[-0xc];
      fVar2 = pfVar11[-0xc];
      pfVar11[-0xc] = *pfVar11 + pfVar11[-4] + pfVar11[-8] + fVar1;
      pfVar11[-4] = (pfVar11[-8] + fVar1) - (*pfVar11 + pfVar11[-4]);
      *pfVar11 = (fVar2 - pfVar11[-8]) - fVar4;
      pfVar11[-8] = (fVar2 - pfVar11[-8]) + fVar4;
      fVar1 = pfVar11[-0xb];
      fVar2 = pfVar11[-7];
      fVar3 = pfVar11[-7];
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[-6];
      fVar6 = pfVar11[-10];
      fVar7 = pfVar11[-6];
      uVar12 = uVar12 - 1;
      fVar8 = pfVar11[2];
      pfVar11[-7] = (pfVar11[-0xb] - fVar3) + fVar9;
      pfVar11[-6] = (pfVar11[-10] - fVar7) + fVar10;
      pfVar11[1] = (pfVar11[-0xb] - fVar3) - fVar9;
      pfVar11[2] = (pfVar11[-10] - fVar7) - fVar10;
      pfVar11[-0xb] = pfVar11[-3] + fVar4 + fVar1 + fVar2;
      pfVar11[-10] = pfVar11[-2] + fVar8 + fVar5 + fVar6;
      pfVar11[-3] = (fVar1 + fVar2) - (pfVar11[-3] + fVar4);
      pfVar11[-2] = (fVar5 + fVar6) - (pfVar11[-2] + fVar8);
      pfVar11 = pfVar11 + 0x10;
    } while (uVar12 != 0);
  }
  return;
}


