/* Module: vegas30.exe
   Function: FUN_0053eb50
   Address: 0053eb50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053eb50(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0053a0a0(param_1,0);
  if (DAT_0064a508 == 0) {
    *(undefined1 *)(param_1 + 0x424) = 4;
  }
  else {
    *(undefined1 *)(param_1 + 0x424) = 5;
  }
  *(int *)(param_1 + 0xe80) = *param_2;
  *(int *)(param_1 + 0xe84) = param_2[1];
  *(int *)(param_1 + 0xe88) = param_2[2];
  *(int *)(param_1 + 0xe8c) = param_2[3];
  iVar1 = *(int *)(param_1 + 0xe80);
  if ((iVar1 == 5) || (iVar1 == 6)) {
    *(undefined1 *)(param_1 + 0x424) = 0x10;
  }
  uVar3 = FUN_00538780(param_2);
  FUN_00457e90(param_1,uVar3);
  switch(*param_2) {
  case 1:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = uVar3;
    break;
  case 2:
  case 3:
  case 4:
    uVar2 = *(undefined8 *)(DAT_00647630 + 0xb90);
    uVar5 = *(undefined4 *)(DAT_00647630 + 0xb8c);
    uVar4 = *(undefined4 *)(DAT_00647630 + 0xb88);
    break;
  default:
    goto switchD_0053ebcd_default;
  }
  FUN_004543c0(param_1,uVar4,uVar5,uVar2,0);
switchD_0053ebcd_default:
  FUN_00457e90(param_1,uVar3);
  FUN_00453030(param_1);
  FUN_0053eb20(param_1);
  FUN_005385d0(param_1);
  return;
}


