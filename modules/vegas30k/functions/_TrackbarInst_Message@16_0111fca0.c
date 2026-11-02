/* Module: vegas30k.dll
   Function: _TrackbarInst_Message@16
   Address: 0111fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _TrackbarInst_Message_16(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  HWND pHVar2;
  undefined4 uVar3;
  short sVar4;
  
                    /* 0x11fca0  1351  _TrackbarInst_Message@16 */
  if (param_1 == 0) {
    return 0;
  }
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
      FUN_0111eba0(param_1,param_3);
      return 0;
    case 8:
      FUN_0111ec00(param_1,param_3);
      return 0;
    case 10:
      FUN_0111f0c0(param_1,param_3);
      return 0;
    }
  }
  else {
    sVar1 = (short)param_4;
    if (param_2 < 0x114) {
      if (param_2 == 0x113) {
        pHVar2 = GetCapture();
        if (pHVar2 == *(HWND *)(param_1 + 0x28)) {
          FUN_0111eb50(param_1,param_3);
          return 0;
        }
        return 0;
      }
      switch(param_2) {
      case 0x14:
        FUN_0111df80(param_1,param_3,0);
        return 0;
      case 0x1f:
        FUN_0111e7f0(param_1,0,0,0);
        return 0;
      case 0x87:
        return 0;
      case 0x100:
        FUN_0111e8c0(param_1,param_3,1,(int)sVar1,param_4 >> 0x10);
        return 0;
      case 0x101:
        FUN_0111e8c0(param_1,param_3,0,(int)sVar1,param_4 >> 0x10);
        return 0;
      }
    }
    else {
      sVar4 = (short)(param_4 >> 0x10);
      switch(param_2) {
      case 0x200:
        if ((*(uint *)(param_1 + 0xc) & 0x40000) == 0) {
          FUN_0111e850(param_1,(int)sVar1,(int)sVar4,param_3);
          return 0;
        }
        return 0;
      case 0x201:
        FUN_0111e740(param_1,0,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x202:
        FUN_0111e7f0(param_1,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x203:
        FUN_0111e740(param_1,1,(int)sVar1,(int)sVar4,param_3);
        return 0;
      case 0x20a:
        FUN_0111fad0(param_1,param_3);
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
  uVar3 = FUN_0111f3a0(param_1,param_2,param_3,param_4);
  return uVar3;
}


