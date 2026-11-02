/* Module: vegas30.exe
   Function: FUN_005b1a90
   Address: 005b1a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b1a90(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5,
                undefined4 param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  int local_850;
  float local_844 [3];
  float local_838 [3];
  float local_82c [3];
  float local_820 [257];
  float local_41c;
  float local_418;
  float local_414 [3];
  int local_408;
  float local_404 [3];
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  int local_4;
  
  SfVector3DSubtract(param_2,param_5,local_844);
  fVar7 = SfVector3DDot(local_844,param_3);
  fVar2 = param_2[0xfd];
  local_850 = 0;
  if ((int)fVar2 < 1) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (_DAT_00610f20 <= fVar7) {
        iVar1 = (local_850 + 1) % (int)fVar2;
        iVar4 = local_850;
      }
      else {
        iVar4 = (local_850 + 1) % (int)fVar2;
        iVar1 = local_850;
      }
      pfVar5 = local_820;
      for (iVar3 = 0x208; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
      fVar2 = *param_5;
      pfVar5 = param_2;
      pfVar6 = local_820;
      for (iVar3 = 0xfe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_418 = param_5[1];
      local_414[0] = param_5[2];
      local_414[1] = (float)param_6;
      local_3f8 = *param_5;
      local_414[2] = (float)param_4;
      local_3f4 = param_5[1];
      local_3f0 = param_5[2];
      local_408 = local_850;
      local_4 = 3;
      local_3dc = param_2[iVar1 * 7];
      local_3d8 = param_2[iVar1 * 7 + 1];
      local_3d4 = param_2[iVar1 * 7 + 2];
      local_3c0 = param_2[iVar4 * 7];
      local_3bc = param_2[iVar4 * 7 + 1];
      local_3b8 = param_2[iVar4 * 7 + 2];
      local_41c = fVar2;
      SfVector3DSubtract(&local_3dc,&local_3f8,local_838);
      SfVector3DSubtract(&local_3f8,local_414 + local_4 * 7,local_82c);
      SfVector3DUnitNormal(local_838,local_82c,local_404);
      iVar1 = FUN_005b18f0(param_1,local_820);
      if (iVar1 < 0) break;
      fVar2 = param_2[0xfd];
      local_850 = local_850 + 1;
      if ((int)fVar2 <= local_850) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


