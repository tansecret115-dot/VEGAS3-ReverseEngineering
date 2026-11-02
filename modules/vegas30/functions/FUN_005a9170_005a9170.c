/* Module: vegas30.exe
   Function: FUN_005a9170
   Address: 005a9170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a9170(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = *(int *)(param_1 + 8) != 0;
  if (_DAT_00610f20 < *(float *)(param_1 + 0x13b0)) {
    fVar1 = *(float *)(param_1 + 0x13c0) * *(float *)(param_1 + 0x13b0);
  }
  else {
    fVar1 = (float)_DAT_00610fd8;
  }
  switch(*(undefined4 *)(param_1 + 0x1394)) {
  case 0:
  case 4:
    if ((bVar3) || (_DAT_00610f20 != fVar1)) {
      if (_DAT_00610f20 != *(float *)(param_1 + 0x1390)) {
        return 0;
      }
      return 1;
    }
    break;
  case 1:
  case 2:
    if (((bVar3) || (_DAT_00610f20 != fVar1)) && (_DAT_00610f20 != *(float *)(param_1 + 0x1390))) {
      return 0;
    }
    break;
  default:
    goto switchD_005a91b7_caseD_3;
  }
  uVar2 = 1;
switchD_005a91b7_caseD_3:
  return uVar2;
}


