/* Module: vegas30.exe
   Function: FUN_0052bd70
   Address: 0052bd70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052bd70(undefined4 param_1,undefined4 param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = FUN_0052bc70(param_3);
  if (iVar1 == 0) {
    uVar3 = FUN_0052bcd0(param_3);
  }
  iVar2 = FUN_0052b710(param_1,param_2,param_3);
  if (iVar2 == 0) {
    if ((param_4 & 2) == 0) {
      uVar3 = FUN_0052b9d0(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else if (iVar1 != 0) {
    if ((param_4 & 1) == 0) {
      uVar3 = FUN_0052b7f0(param_1,param_2,param_3);
      return uVar3;
    }
    if ((param_3 < 0) || (0x1e < param_3)) {
      if ((0x3f < param_3) && (param_3 < 0x60)) {
        DAT_00648698 = DAT_00648698 & ~(1 << ((byte)param_3 - 0x40 & 0x1f));
        return uVar3;
      }
    }
    else {
      DAT_00648690 = DAT_00648690 & ~(1 << ((byte)param_3 & 0x1f));
    }
  }
  return uVar3;
}


