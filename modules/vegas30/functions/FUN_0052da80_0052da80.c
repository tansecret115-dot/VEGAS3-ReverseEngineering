/* Module: vegas30.exe
   Function: FUN_0052da80
   Address: 0052da80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052da80(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 < 0x7f03) {
    if (0x7f00 < param_2) {
switchD_0052db71_caseD_7f04:
      uVar2 = FUN_0052d940(param_1);
      return uVar2;
    }
    switch(param_2) {
    case 0x300:
      FUN_0052d140(param_1,1);
      return 0;
    case 0x301:
      FUN_0052d140(param_1,0);
      return 0;
    case 0x302:
      FUN_0052d4a0(param_1,0,1);
      return 0;
    case 0x303:
      FUN_0052d350(param_1);
      return 0;
    case 0x304:
      SendMessageA(DAT_00647624,0x111,(param_3 != 0) + 0x9d08,0);
      return 0;
    case 0x305:
      FUN_0046dc70(param_1,param_3);
      return 0;
    case 0x306:
      FUN_0046dc70(param_1,0);
      return 0;
    case 0x307:
      FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
      return 0;
    }
  }
  else {
    switch(param_2) {
    case 0x7f03:
    case 0x7f06:
      uVar2 = FUN_004690d0(param_1);
      return uVar2;
    case 0x7f04:
      goto switchD_0052db71_caseD_7f04;
    case 0x7f05:
      FUN_005b8630(*(undefined4 *)(param_1 + 0xbc8));
      iVar1 = FUN_005b51d0();
      return (uint)(iVar1 != 0);
    case 0x7f07:
      FUN_0052d4a0(param_1,param_3 == 0,(-(uint)(param_3 != 1) & 2) - 1);
      return 0;
    case 0x7f08:
      uVar2 = FUN_0052d9b0(param_1);
      break;
    case 0x7f09:
      FUN_0052d8e0(param_1,param_3 == 0);
      return 0;
    }
  }
  return uVar2;
}


