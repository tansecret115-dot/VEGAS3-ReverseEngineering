/* Module: vegas30k.dll
   Function: SfMatrix3DRotate
   Address: 0107ca60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __stdcall SfMatrix3DRotate(float,float,float,float,struct tSFMATRIX3D *) */

void SfMatrix3DRotate(float param_1,float param_2,float param_3,float param_4,tSFMATRIX3D *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
                    /* 0x7ca60  417  ?SfMatrix3DRotate@@YGXMMMMPAUtSFMATRIX3D@@@Z */
  fVar5 = (float10)fcos((float10)param_4);
  fVar1 = (float)((float10)_DAT_011dad58 - fVar5);
  fVar6 = (float10)fsin((float10)param_4);
  fVar2 = (float)fVar6;
  fVar3 = (float)fVar5;
  SfMatrix3DMakeIdentity((tSFMATRIX3D *)&local_40);
  fVar4 = fVar1 * param_1;
  local_40 = fVar4 * param_1 + fVar3;
  local_3c = fVar2 * param_3 + fVar4 * param_2;
  local_38 = fVar4 * param_3 - fVar2 * param_2;
  local_30 = fVar4 * param_2 - fVar2 * param_3;
  local_2c = fVar1 * param_2 * param_2 + fVar3;
  local_1c = fVar1 * param_2 * param_3;
  local_28 = fVar2 * param_1 + local_1c;
  local_20 = fVar2 * param_2 + fVar4 * param_3;
  local_1c = local_1c - fVar2 * param_1;
  local_18 = fVar1 * param_3 * param_3 + fVar3;
  SfMatrix3DConcatenate((tSFMATRIX3D *)&local_40,param_5);
  return;
}


