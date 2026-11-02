/* Module: vegas30k.dll
   Function: FUN_0111e8c0
   Address: 0111e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111e8c0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  HWND hWnd;
  HWND pHVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hWnd = *(HWND *)(param_1 + 0x28);
  pHVar1 = GetCapture();
  if (pHVar1 == hWnd) {
    if (param_2 != 0x1b) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb4);
    FUN_0111e7f0(param_1,0,0,0);
    return;
  }
  if (param_3 == 0) {
    if (param_2 < 0x21) {
      return;
    }
    if (0x28 < param_2) {
      return;
    }
    uVar4 = 0;
    uVar3 = 8;
LAB_0111eaa8:
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),uVar3,uVar4);
switchD_0111e92c_caseD_c:
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
    goto switchD_0111e92c_caseD_c;
  default:
    local_18 = *(WPARAM *)(param_1 + 0x2c);
    pHVar1 = *(HWND *)(param_1 + 0x30);
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
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),2,0);
    return;
  case 0x22:
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),3,0);
    return;
  case 0x23:
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),7,0);
    return;
  case 0x24:
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),6,0);
    return;
  case 0x25:
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),0,0);
    return;
  case 0x26:
  case 0x27:
    uVar2 = ~*(uint *)(param_1 + 0xc);
    break;
  case 0x28:
    uVar2 = *(uint *)(param_1 + 0xc);
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
    if (*(int *)(param_1 + 0xc0) != -1) {
      return;
    }
    FUN_0111e080(param_1,*(int *)(param_1 + 0x10) +
                         (int)(((longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) *
                               (longlong)(int)(param_2 - 0x30)) / 10),1);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = 4;
    goto LAB_0111eaa8;
  }
  (**(code **)(param_1 + 200))
            (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),uVar2 >> 3 & 1,
             0);
  return;
}


