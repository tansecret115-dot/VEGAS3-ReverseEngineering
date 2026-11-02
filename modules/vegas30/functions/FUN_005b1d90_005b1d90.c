/* Module: vegas30.exe
   Function: FUN_005b1d90
   Address: 005b1d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b1d90(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float local_868;
  float local_864;
  float local_860;
  float local_85c;
  float local_858;
  float local_854;
  int local_850;
  float local_84c;
  float local_848;
  float local_844;
  undefined4 local_840;
  float local_83c [3];
  tSFMATRIX3D local_830 [64];
  float local_7f0 [253];
  int aiStack_3fc [255];
  
  local_868 = *param_2;
  local_864 = param_2[1];
  local_860 = param_2[2];
  uVar2 = 0;
  fVar6 = SfVector3DDot(param_1,&local_868);
  local_840 = 0x3f800000;
  local_84c = param_3[0x101];
  local_848 = param_3[0x102];
  local_844 = param_3[0x103];
  SfVector3DSubtract(param_1,&local_84c,local_83c);
  SfVector3DDot(local_83c,&local_868);
  local_85c = -local_868;
  local_858 = -local_864;
  local_854 = -local_860;
  FUN_005b1cb0(local_830,&local_85c,fVar6,&local_84c);
  pfVar4 = param_3;
  pfVar5 = local_7f0;
  for (iVar1 = 0xfe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  iVar1 = 0;
  if (0 < (int)param_3[0xfd]) {
    pfVar4 = local_7f0;
    do {
      Sf3DTransformInPlace(pfVar4,local_830);
      SfVector3DHomogenize(pfVar4);
      iVar1 = iVar1 + 1;
      pfVar4 = pfVar4 + 7;
    } while (iVar1 < (int)param_3[0xfd]);
  }
  fVar6 = param_1[0xfd];
  local_850 = 0;
  uVar3 = uVar2;
  pfVar4 = param_1;
  if (0 < (int)fVar6) {
    do {
      local_850 = local_850 + 1;
      SfVector3DSubtract(param_1 + (local_850 % (int)fVar6) * 7,pfVar4,local_83c);
      SfVector3DUnitNormal(local_83c,&local_868,&local_85c);
      fVar6 = SfVector3DDot(pfVar4,&local_85c);
      uVar2 = uVar3 ^ 1;
      iVar1 = FUN_005b1000(local_7f0 + uVar2 * 0xfe,local_7f0 + uVar3 * 0xfe,&local_85c,fVar6);
      if (iVar1 == 0) {
        return 0x80004005;
      }
      fVar6 = param_1[0xfd];
      uVar3 = uVar2;
      pfVar4 = pfVar4 + 7;
    } while (local_850 < (int)fVar6);
  }
  if (2 < aiStack_3fc[uVar2 * 0xfe]) {
    pfVar4 = local_7f0 + uVar2 * 0xfe;
    for (iVar1 = 0xfe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


