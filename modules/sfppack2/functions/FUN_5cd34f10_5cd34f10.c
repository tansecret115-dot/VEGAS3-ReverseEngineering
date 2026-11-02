/* Module: sfppack2.dll
   Function: FUN_5cd34f10
   Address: 5cd34f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd34f10(int param_1,int param_2,float param_3,float param_4)

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
  float fVar11;
  float *pfVar12;
  uint uVar13;
  
  fVar11 = param_3 + _DAT_5cd5344c;
  if (param_2 != 0) {
    uVar13 = param_2 + 3U >> 2;
    pfVar12 = (float *)(param_1 + 0x34);
    do {
      fVar3 = (pfVar12[-5] - pfVar12[-1]) * fVar11 - (pfVar12[-3] - pfVar12[1]) * param_4;
      fVar9 = (pfVar12[-5] - pfVar12[-1]) * param_4 + (pfVar12[-3] - pfVar12[1]) * fVar11;
      fVar4 = (pfVar12[-4] - *pfVar12) * fVar11 - (pfVar12[-2] - pfVar12[2]) * param_4;
      fVar10 = (pfVar12[-4] - *pfVar12) * param_4 + (pfVar12[-2] - pfVar12[2]) * fVar11;
      fVar1 = pfVar12[-0xd];
      fVar2 = pfVar12[-0xd];
      pfVar12[-0xd] = pfVar12[-1] + pfVar12[-5] + fVar1 + pfVar12[-9];
      pfVar12[-5] = (fVar1 + pfVar12[-9]) - (pfVar12[-1] + pfVar12[-5]);
      pfVar12[-1] = (fVar2 - pfVar12[-9]) - fVar3;
      pfVar12[-9] = (fVar2 - pfVar12[-9]) + fVar3;
      fVar1 = pfVar12[-0xc];
      fVar2 = pfVar12[-0xc];
      pfVar12[-0xc] = *pfVar12 + pfVar12[-4] + pfVar12[-8] + fVar1;
      pfVar12[-4] = (pfVar12[-8] + fVar1) - (*pfVar12 + pfVar12[-4]);
      *pfVar12 = (fVar2 - pfVar12[-8]) - fVar4;
      pfVar12[-8] = (fVar2 - pfVar12[-8]) + fVar4;
      fVar1 = pfVar12[-0xb];
      fVar2 = pfVar12[-7];
      fVar3 = pfVar12[-7];
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[-6];
      fVar6 = pfVar12[-10];
      fVar7 = pfVar12[-6];
      uVar13 = uVar13 - 1;
      fVar8 = pfVar12[2];
      pfVar12[-7] = (pfVar12[-0xb] - fVar3) + fVar9;
      pfVar12[-6] = (pfVar12[-10] - fVar7) + fVar10;
      pfVar12[1] = (pfVar12[-0xb] - fVar3) - fVar9;
      pfVar12[2] = (pfVar12[-10] - fVar7) - fVar10;
      pfVar12[-0xb] = pfVar12[-3] + fVar4 + fVar1 + fVar2;
      pfVar12[-10] = pfVar12[-2] + fVar8 + fVar5 + fVar6;
      pfVar12[-3] = (fVar1 + fVar2) - (pfVar12[-3] + fVar4);
      pfVar12[-2] = (fVar5 + fVar6) - (pfVar12[-2] + fVar8);
      pfVar12 = pfVar12 + 0x10;
    } while (uVar13 != 0);
  }
  return;
}


