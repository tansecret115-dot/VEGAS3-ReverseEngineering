/* Module: sfppack1.dll
   Function: FUN_5cde7940
   Address: 5cde7940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde7940(RECT *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  HWND hWnd;
  HWND pHVar1;
  undefined4 uVar2;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  hWnd = (HWND)param_1[3].left;
  pHVar1 = GetCapture();
  if (pHVar1 == hWnd) {
    if (param_2 != 0x1b) {
      return;
    }
    if (param_3 != 0) {
      FUN_5cde3ad0((int)param_1,&param_1[1].bottom,(int)&param_1[10].right);
      FUN_5cde77c0(param_1,0,0);
      return;
    }
    return;
  }
  if (param_3 != 0) {
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
      return;
    default:
      if ((param_1->left & 2) != 0) {
        switch(param_2) {
        case 0x42:
        case 0x43:
        case 0x47:
        case 0x53:
          if ((param_1->bottom & 0x10) != 0) {
            param_1[0x10].top = 0;
            param_1[0x10].left = 3;
            FUN_5cde6bc0((byte *)param_1,1);
            return;
          }
          return;
        case 0x4c:
          if ((param_1->bottom & 0x10) != 0) {
            param_1[0x10].top = 0;
            param_1[0x10].left = 1;
            FUN_5cde6bc0((byte *)param_1,1);
            return;
          }
          return;
        case 0x52:
          if ((param_1->bottom & 0x10) != 0) {
            param_1[0x10].top = 1;
            param_1[0x10].left = 2;
            FUN_5cde6bc0((byte *)param_1,1);
            return;
          }
          return;
        }
      }
      local_18 = param_1[3].top;
      pHVar1 = (HWND)param_1[3].right;
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
      uVar2 = 2;
      break;
    case 0x22:
      uVar2 = 3;
      break;
    case 0x23:
      uVar2 = 7;
      break;
    case 0x24:
      uVar2 = 6;
      break;
    case 0x25:
    case 0x28:
      uVar2 = 1;
      break;
    case 0x26:
    case 0x27:
      uVar2 = 0;
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
      if (param_1[0xb].left != -1) {
        return;
      }
      FUN_5cde3ba0((int)param_1,&param_1[1].bottom,
                   param_1[1].left +
                   (int)(((longlong)(param_1[1].top - param_1[1].left) *
                         (longlong)(int)(param_2 - 0x30)) / 10),param_1[0x10].left);
      FUN_5cde6bc0((byte *)param_1,1);
      (*(code *)param_1[0x12].left)
                (param_1,param_1[3].top,param_1[0x11].bottom,4,&param_1[1].bottom,param_1[0x10].left
                );
      return;
    }
    if ((param_1->left & 2) != 0) {
      FUN_5cde7690((int)param_1,uVar2,param_1[0x10].left);
      FUN_5cde6bc0((byte *)param_1,1);
    }
    (*(code *)param_1[0x12].left)
              (param_1,param_1[3].top,param_1[0x11].bottom,uVar2,&param_1[1].bottom,
               param_1[0x10].left);
    return;
  }
  if (0x20 < param_2) {
    if (param_2 < 0x29) {
      (*(code *)param_1[0x12].left)
                (param_1,param_1[3].top,param_1[0x11].bottom,8,&param_1[1].bottom,param_1[0x10].left
                );
      return;
    }
    return;
  }
  return;
}


