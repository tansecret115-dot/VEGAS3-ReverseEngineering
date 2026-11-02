/* Module: vegas30k.dll
   Function: _SpinnerInst_Message@16
   Address: 01113340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SpinnerInst_Message_16(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  
                    /* 0x113340  1329  _SpinnerInst_Message@16 */
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      return 0;
    }
    switch(param_2) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 7:
      FUN_01111f20(param_1,param_3);
      return 0;
    case 8:
      FUN_01111f80(param_1,param_3);
      return 0;
    case 10:
      FUN_01112170(param_1,param_3);
      return 0;
    }
  }
  else {
    sVar1 = (short)param_4;
    if (param_2 < 0x114) {
      if (param_2 == 0x113) {
        FUN_01111e70(param_1,param_3);
        return 0;
      }
      switch(param_2) {
      case 0x14:
        FUN_01111510(param_1,0);
        return 0;
      case 0x1f:
        FUN_01111c30(param_1,0,0,0);
        return 0;
      case 0x20:
        iVar2 = FUN_01111ec0(param_1,param_3,param_4 & 0xffff,param_4 >> 0x10);
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      case 0x87:
        return 0;
      case 0x100:
        FUN_01111ce0(param_1,param_3,1,(int)sVar1,param_4 >> 0x10);
        return 0;
      case 0x101:
        FUN_01111ce0(param_1,param_3,0,(int)sVar1,param_4 >> 0x10);
        return 0;
      }
    }
    else {
      sVar4 = (short)(param_4 >> 0x10);
      switch(param_2) {
      case 0x200:
        if (*(int *)(param_1 + 0x70) != 0) {
          return 0;
        }
        FUN_01111c80(param_1,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x201:
        FUN_01111b80(param_1,0,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x202:
        FUN_01111c30(param_1,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x203:
        FUN_01111b80(param_1,1,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x20a:
        FUN_011130c0(param_1,param_3);
        return 0x69;
      }
    }
  }
  if (param_2 < 0x400) {
    return 0;
  }
  if (0x7fff < param_2) {
    return 0;
  }
  uVar3 = FUN_01112780(param_1,param_2,param_3,param_4);
  return uVar3;
}


