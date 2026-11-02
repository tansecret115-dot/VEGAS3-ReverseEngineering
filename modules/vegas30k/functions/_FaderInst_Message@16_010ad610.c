/* Module: vegas30k.dll
   Function: _FaderInst_Message@16
   Address: 010ad610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _FaderInst_Message_16(int param_1,uint param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 uVar4;
  short sVar5;
  
                    /* 0xad610  657  _FaderInst_Message@16 */
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
      FUN_010aba00(param_1,param_3);
      return 0;
    case 8:
      FUN_010aba60(param_1,param_3);
      return 0;
    case 10:
      FUN_010ac880(param_1,param_3);
      return 0;
    }
  }
  else {
    sVar1 = (short)param_4;
    sVar5 = (short)(param_4 >> 0x10);
    if (param_2 < 0x201) {
      if (param_2 == 0x200) {
        if ((*(uint *)(param_1 + 0xc) & 0x8000) == 0) {
          FUN_010ab550(param_1,(int)sVar1,(int)sVar5,param_3);
          return 0;
        }
        return 0;
      }
      if (param_2 < 0x88) {
        if (param_2 == 0x87) {
          return 0;
        }
        if (param_2 == 0x14) {
          FUN_010a86e0(param_1,param_3,0);
          return 0;
        }
        if (param_2 == 0x1f) {
          FUN_010ab4f0(param_1,0,0,0);
          return 0;
        }
        if (param_2 == 0x20) {
          iVar2 = FUN_010ac8e0(param_1,param_3,param_4 & 0xffff,param_4 >> 0x10);
          if (iVar2 != 0) {
            return 1;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 0x100) {
          FUN_010ab670(param_1,param_3,1,(int)sVar1,param_4 >> 0x10);
          return 0;
        }
        if (param_2 == 0x101) {
          FUN_010ab670(param_1,param_3,0,(int)sVar1,param_4 >> 0x10);
          return 0;
        }
        if (param_2 == 0x113) {
          pHVar3 = GetCapture();
          if (pHVar3 == *(HWND *)(param_1 + 0x30)) {
            FUN_010ab9a0(param_1,param_3);
            return 0;
          }
          return 0;
        }
      }
    }
    else {
      switch(param_2) {
      case 0x201:
        FUN_010aa9c0(param_1,0,(int)sVar1,(int)sVar5,param_3);
        return 0;
      case 0x202:
        FUN_010ab4f0(param_1,(int)sVar1,(int)sVar5,param_3);
        return 0;
      case 0x203:
        FUN_010aa9c0(param_1,1,(int)sVar1,(int)sVar5,param_3);
        return 0;
      case 0x204:
      case 0x206:
        if ((param_3 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff;
          return 0;
        }
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000;
        return 0;
      case 0x205:
        if ((*(uint *)(param_1 + 0xc) & 0x10000) != 0) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff;
          return 0;
        }
        return 0;
      case 0x20a:
        FUN_010ab5a0(param_1,param_3);
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
  uVar4 = FUN_010aceb0(param_1,param_2,param_3,param_4);
  return uVar4;
}


