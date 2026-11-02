/* Module: sctplug.dll
   Function: FUN_0041ef10
   Address: 0041ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ef10(uint *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00437f30;
  puStack_10 = &DAT_004304d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((param_1[4] & 0xffff) == 0) {
    ExceptionList = &local_14;
    param_1[4] = CONCAT31((uint3)(param_1[4] >> 8) & 0xffff00,4);
  }
  if ((param_1[4] & 0xffff0000) == 0) {
    param_1[4] = param_1[4] & 0xffff | 0x40000;
  }
  if (((*param_1 & 0x10) == 0) && (param_1[3] == 0)) {
    if ((param_3 < 0) || (((param_3 < 1 && (param_2 == 0)) || ((int)param_4 < 1)))) {
      param_1[3] = param_1[4] & 0xffff;
    }
    else {
      uVar2 = FUN_0041ee80((int)param_1,param_2,param_3,param_4);
      param_1[3] = uVar2;
    }
    uVar2 = *param_1;
    if (((uVar2 & 8) == 0) || ((uVar2 & 4) == 0)) {
      *param_1 = uVar2 | 1;
    }
  }
  bVar1 = false;
  if (((float)param_1[5] < _DAT_00437f2c) || (_DAT_00437f28 < (float)param_1[5])) {
    bVar1 = true;
  }
  if (bVar1) {
    param_1[5] = 0x42f00000;
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffffffb;
    if (param_5 != 0) {
      *param_1 = uVar2 & 0xfffffffb | 1;
    }
  }
  uVar2 = *param_1;
  if (((uVar2 & 4) != 0) && ((uVar2 & 0x10) == 0)) {
    *param_1 = uVar2 | 0x10;
    param_1[3] = 0;
  }
  ExceptionList = local_14;
  return;
}


