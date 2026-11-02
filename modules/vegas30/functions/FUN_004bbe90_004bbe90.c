/* Module: vegas30.exe
   Function: FUN_004bbe90
   Address: 004bbe90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004bbe90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00647630 != param_1) {
    return false;
  }
  iVar2 = FUN_004bbfa0(param_1,param_1 + 0x6c0,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = FUN_004bbfa0(param_1,param_1 + 0x960,param_2,param_3,param_4,param_5,param_6,param_7);
  bVar1 = iVar3 != 0 || iVar2 != 0;
  if ((DAT_00647aac != 0) &&
     (iVar2 = FUN_004bbfa0(param_1,param_1 + 0x8b8,param_2,param_3,param_4,param_5,param_6,param_7),
     iVar2 != 0)) {
    bVar1 = true;
  }
  if ((DAT_00647ab0 == 0) ||
     (iVar2 = FUN_004bbfa0(param_1,param_1 + 0x90c,param_2,param_3,param_4,param_5,param_6,param_7),
     iVar2 == 0)) {
    if (bVar1 == false) {
      return false;
    }
  }
  else {
    bVar1 = true;
  }
  FUN_004530a0(param_1,5);
  FUN_004ba9e0(param_1);
  return bVar1;
}


