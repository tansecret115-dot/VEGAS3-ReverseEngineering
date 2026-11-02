/* Module: vegas30.exe
   Function: FUN_0053e680
   Address: 0053e680
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0053e680(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    SendMessageA(*(HWND *)(param_1 + 4),0x1f,0,0);
  }
  if (param_2 < 0x7ea) {
    if (param_2 != 0x7e9) {
      switch(param_2) {
      case 0x300:
        FUN_0053a320(param_1);
        return false;
      case 0x301:
        FUN_0053a500(param_1);
        return false;
      case 0x302:
        FUN_0053a690(param_1);
        return false;
      case 0x303:
        FUN_00539d30(param_1);
        return false;
      case 0x304:
        break;
      case 0x305:
        FUN_0053a0a0(param_1,param_3);
        return false;
      case 0x306:
        FUN_0053a0a0(param_1,0);
        return false;
      default:
        goto switchD_0053e6c2_default;
      }
    }
    SendMessageA(DAT_00647624,0x111,(param_2 != 0x304) + 0x9d08,0);
    return false;
  }
  switch(param_2) {
  case 0x7f01:
  case 0x7f02:
  case 0x7f04:
  case 0x7f08:
    iVar1 = FUN_00538d10(param_1 + 0xe80,0);
    return 0 < iVar1;
  case 0x7f09:
    if (param_3 == 0) {
      uVar2 = FUN_00538780(param_1 + 0xe80);
      FUN_00538900(param_1 + 0xe80,0,0,0,uVar2);
      return false;
    }
    FUN_00538900(param_1 + 0xe80,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  }
switchD_0053e6c2_default:
  return false;
}


