/* Module: vidcap30.exe
   Function: FUN_004ad760
   Address: 004ad760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad760(int param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  pHVar1 = GetCapture();
  if (pHVar1 == *(HWND *)(param_1 + 0x38)) {
    if (param_2 != 0x1b) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    (**(code **)(param_1 + 0xc0))
              (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),5,uVar3);
    FUN_004ad200(param_1,0,0,8);
    return;
  }
  if (param_3 == 0) {
    if (param_2 < 0x21) {
      return;
    }
    if (0x28 < param_2) {
      return;
    }
    uVar3 = 0;
    uVar2 = 8;
LAB_004ad89b:
    (**(code **)(param_1 + 0xc0))
              (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),uVar2,uVar3);
switchD_004ad7dd_caseD_29:
    return;
  }
  switch(param_2) {
  case 0x21:
    uVar3 = 2;
    break;
  case 0x22:
    uVar3 = 3;
    break;
  case 0x23:
    uVar3 = 7;
    break;
  case 0x24:
    uVar3 = 6;
    break;
  case 0x25:
  case 0x26:
    uVar3 = 0;
    break;
  case 0x27:
  case 0x28:
    uVar3 = 1;
    break;
  default:
    goto switchD_004ad7dd_caseD_29;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if (*(int *)(param_1 + 0x90) != -1) {
      return;
    }
    FUN_004ad090(param_1,*(int *)(param_1 + 0x44) +
                         (int)(((longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) *
                               (longlong)(int)(param_2 - 0x30)) / 10),1);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    uVar2 = 4;
    goto LAB_004ad89b;
  }
  if ((param_5 & 0x40000000) == 0) {
    (**(code **)(param_1 + 0xc0))
              (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),9,0);
  }
  (**(code **)(param_1 + 0xc0))
            (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),uVar3,0);
  return;
}


