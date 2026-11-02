/* Module: sfppack1.dll
   Function: FUN_5cde1f90
   Address: 5cde1f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde1f90(uint *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  HWND hWnd;
  HWND pHVar1;
  undefined4 uVar2;
  uint uVar3;
  HWND local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hWnd = (HWND)param_1[10];
  pHVar1 = GetCapture();
  if (pHVar1 == hWnd) {
    if (param_2 != 0x1b) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    param_1[7] = param_1[0x2d];
    FUN_5cde1ec0(param_1,0,0);
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
LAB_5cde2178:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],uVar2,uVar3);
switchD_5cde1ffc_caseD_c:
    return;
  }
  switch(param_2) {
  case 0xc:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
    goto switchD_5cde1ffc_caseD_c;
  default:
    local_18 = param_1[0xb];
    pHVar1 = (HWND)param_1[0xc];
    local_10 = param_2;
    local_14 = 0xffffff9a;
    local_c = param_4;
    local_8 = param_5;
    local_1c = hWnd;
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = GetParent(hWnd);
    }
    SendMessageA(pHVar1,0x4e,local_18,(LPARAM)&local_1c);
    return;
  case 0x21:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],2,0);
    return;
  case 0x22:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],3,0);
    return;
  case 0x23:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],7,0);
    return;
  case 0x24:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],6,0);
    return;
  case 0x25:
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],0,0);
    return;
  case 0x26:
  case 0x27:
    uVar3 = ~param_1[3];
    break;
  case 0x28:
    uVar3 = param_1[3];
    break;
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
    if (param_1[0x30] != 0xffffffff) {
      return;
    }
    FUN_5cde1750(param_1,param_1[4] +
                         (int)(((longlong)(int)(param_1[5] - param_1[4]) *
                               (longlong)(int)(param_2 - 0x30)) / 10),1);
    uVar3 = param_1[7];
    uVar2 = 4;
    goto LAB_5cde2178;
  }
  (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],uVar3 >> 3 & 1,0);
  return;
}


