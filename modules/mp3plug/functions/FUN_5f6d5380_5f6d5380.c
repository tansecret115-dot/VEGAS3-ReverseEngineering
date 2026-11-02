/* Module: mp3plug.dll
   Function: FUN_5f6d5380
   Address: 5f6d5380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6d5380(float param_1,float *param_2,int param_3,float *param_4,int param_5,uint param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = (param_6 & 1) != 0;
  iVar3 = 0;
  iVar4 = 0;
  if (bVar6) {
    *param_4 = *param_2 * param_1;
    iVar3 = param_3;
    iVar4 = param_5;
  }
  for (uVar5 = (uint)bVar6; (int)uVar5 < (int)param_6; uVar5 = uVar5 + 2) {
    pfVar1 = param_2 + iVar3;
    fVar2 = param_2[param_3 + iVar3];
    iVar3 = iVar3 + param_3 * 2;
    param_4[iVar4] = *pfVar1 * param_1;
    param_4[param_5 + iVar4] = fVar2 * param_1;
    iVar4 = iVar4 + param_5 * 2;
  }
  return;
}


