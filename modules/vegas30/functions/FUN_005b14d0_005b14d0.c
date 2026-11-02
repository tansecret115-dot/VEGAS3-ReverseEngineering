/* Module: vegas30.exe
   Function: FUN_005b14d0
   Address: 005b14d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b14d0(int *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  float *pfVar3;
  int local_438;
  undefined4 local_434;
  float afStack_430 [3];
  float afStack_424 [7];
  float afStack_408 [246];
  int iStack_30;
  float afStack_2c [7];
  byte bStack_10;
  
  local_434 = 0;
  *param_1 = 0;
  iVar1 = FUN_005b1230(&local_438);
  if (-1 < iVar1) {
    *param_1 = local_438;
    *(undefined4 *)(local_438 + 0x54) = param_2;
    *(undefined4 *)(local_438 + 0x58) = 0;
    pfVar3 = afStack_424 + 3;
    for (iVar2 = 0x106; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 1;
    }
    iVar2 = (*param_3)(afStack_424 + 3,param_2,&local_434);
    while (iVar2 != 0) {
      if ((bStack_10 & 2) == 0) {
        SfVector3DSubtract(afStack_408,afStack_424,afStack_430);
        SfVector3DSubtract(afStack_424,afStack_424 + iStack_30 * 7 + -7,(float *)&stack0xfffffbc4);
        SfVector3DUnitNormal(afStack_430,(float *)&stack0xfffffbc4,afStack_2c);
      }
      iVar1 = _SfList_InsertList_16(unaff_ESI,0xffffffff,afStack_424,1);
      if (iVar1 < 0) {
        return iVar1;
      }
      pfVar3 = afStack_424;
      for (iVar2 = 0x106; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar3 = 0.0;
        pfVar3 = pfVar3 + 1;
      }
      iVar2 = (*param_3)(afStack_424,param_2,&stack0xfffffbc0);
    }
    if (-1 < iVar1) {
      iVar1 = FUN_005b12b0(unaff_ESI,0);
      return iVar1;
    }
  }
  return iVar1;
}


