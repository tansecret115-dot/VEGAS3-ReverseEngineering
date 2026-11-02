/* Module: vidcap30.exe
   Function: FUN_00453960
   Address: 00453960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00453960(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (((0x1ff < param_2) && (param_2 < 0x20b)) && (param_2 != 0x20a)) {
    FUN_00454b30(param_1,param_2,param_3,param_4);
    return 0;
  }
  if (param_2 < 0x605) {
    if (param_2 == 0x604) {
      uVar2 = FUN_00454740(param_1,param_4);
      return uVar2;
    }
    sVar1 = (short)param_4;
    sVar3 = (short)((uint)param_4 >> 0x10);
    if (param_2 < 0x31) {
      if (param_2 == 0x30) {
        uVar2 = FUN_004547f0(param_1,param_3,param_4);
        return uVar2;
      }
      switch(param_2) {
      case 2:
        FUN_00453ce0(param_1);
        return 0;
      case 3:
        FUN_00453d30(param_1,(int)sVar1,(int)sVar3);
        FUN_004544d0(param_1,0);
        return 0;
      case 5:
        FUN_00453d90(param_1,(int)sVar1,(int)sVar3);
        FUN_004544d0(param_1,0);
        return 0;
      case 10:
        if (((*(byte *)(param_1 + 0x58) & 1) != 0) && (*(int *)(param_1 + 0x24) != param_3)) {
          *(int *)(param_1 + 0x24) = param_3;
          InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
          return 0;
        }
        break;
      case 0xf:
        FUN_00453de0(param_1,param_4);
        return 0;
      case 0x18:
        FUN_00454250(param_1,param_3);
        return 0;
      }
    }
    else if (param_2 < 0x602) {
      if (param_2 == 0x601) {
        uVar2 = FUN_004542a0(param_1,param_3,param_4);
        return uVar2;
      }
      if (param_2 == 0x47) {
        FUN_004549b0(param_1,param_4);
        FUN_004544d0(param_1,0);
        return 0;
      }
      if (param_2 == 0x53) {
        FUN_00454e50(param_1,param_4);
        return 0;
      }
      if (param_2 == 0x84) {
        uVar2 = FUN_00454710(param_1,(int)sVar1,(int)sVar3);
        return uVar2;
      }
    }
    else {
      if (param_2 == 0x602) {
        FUN_00454360(param_1,param_3,param_4);
        return 0;
      }
      if (param_2 == 0x603) {
        return **(undefined4 **)(param_1 + 0x2c);
      }
    }
  }
  else {
    switch(param_2) {
    case 0x605:
      FUN_00454770(param_1,param_3,param_4);
      return 0;
    case 0x606:
      uVar2 = FUN_00454840(param_1);
      return uVar2;
    case 0x607:
      uVar2 = FUN_004548d0(param_1,param_3,param_4);
      return uVar2;
    case 0x608:
      uVar2 = FUN_00454920(param_1,param_3,param_4);
      return uVar2;
    case 0x609:
      uVar2 = FUN_00454910(param_1);
      return uVar2;
    case 0x60a:
      uVar2 = FUN_00454960(param_1);
      return uVar2;
    case 0x60b:
      uVar2 = FUN_00454970(param_1,param_3,param_4);
      return uVar2;
    case 0x60c:
      uVar2 = FUN_004549f0(param_1,param_3,param_4);
      return uVar2;
    case 0x60d:
      uVar2 = FUN_00454a90(param_1,param_3);
      return uVar2;
    case 0x60e:
      uVar2 = FUN_00454ac0(param_1,param_3,param_4);
      return uVar2;
    case 0x60f:
      FUN_00454c70(param_1,param_4);
      return 0;
    case 0x610:
      FUN_00454dd0(param_1,param_4);
      break;
    case 0x611:
      uVar2 = FUN_004548a0(param_1);
      return uVar2;
    }
  }
  return 0;
}


