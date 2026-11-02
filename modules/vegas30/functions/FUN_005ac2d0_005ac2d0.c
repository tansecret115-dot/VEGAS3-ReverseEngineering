/* Module: vegas30.exe
   Function: FUN_005ac2d0
   Address: 005ac2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ac2d0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_18 [4];
  float local_8;
  float local_4;
  
  iVar1 = 0;
  fVar5 = param_2[0xfd];
  if (0 < (int)fVar5) {
    pfVar4 = (float *)(param_1 + 4);
    pfVar3 = param_2;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar1 % (int)fVar5;
      local_18[3] = param_2[iVar2 * 7] - *pfVar3;
      local_8 = param_2[iVar2 * 7 + 1] - pfVar3[1];
      local_4 = param_2[iVar2 * 7 + 2] - pfVar3[2];
      local_18[0] = 0.0;
      local_18[1] = 0.0;
      local_18[2] = -1.0;
      SfVector3DUnitNormal(local_18 + 3,local_18,pfVar4);
      fVar5 = SfVector3DDot(pfVar3,pfVar4);
      pfVar4[-1] = fVar5;
      fVar5 = param_2[0xfd];
      pfVar3 = pfVar3 + 7;
      pfVar4 = pfVar4 + 4;
    } while (iVar1 < (int)fVar5);
  }
  return;
}


