/* Module: vegas30.exe
   Function: FUN_005ac380
   Address: 005ac380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ac380(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_c [3];
  
  fVar4 = param_3[0xfd];
  if ((int)fVar4 + 1 <= param_2) {
    iVar1 = 0;
    if (0 < (int)fVar4) {
      pfVar3 = (float *)(param_1 + 4);
      pfVar2 = param_3;
      do {
        iVar1 = iVar1 + 1;
        SfVector3DSubtract(param_3 + (iVar1 % (int)fVar4) * 7,pfVar2,local_c);
        SfVector3DUnitNormal(pfVar2,local_c,pfVar3);
        fVar4 = SfVector3DDot(pfVar2,pfVar3);
        pfVar3[-1] = fVar4;
        fVar4 = param_3[0xfd];
        pfVar2 = pfVar2 + 7;
        pfVar3 = pfVar3 + 4;
      } while (iVar1 < (int)fVar4);
    }
    *(undefined4 *)((int)param_3[0xfd] * 0x10 + 4 + param_1) = 0;
    *(undefined4 *)((int)param_3[0xfd] * 0x10 + 8 + param_1) = 0;
    *(undefined4 *)((int)param_3[0xfd] * 0x10 + 0xc + param_1) = 0x3f800000;
    *(undefined4 *)((int)param_3[0xfd] * 0x10 + param_1) = 0x3c23d70a;
    return 1;
  }
  return 0;
}


