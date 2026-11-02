/* Module: sftrkfx1.dll
   Function: FUN_5cbc8490
   Address: 5cbc8490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc8490(uint *param_1,WPARAM param_2)

{
  uint uVar1;
  uint *puVar2;
  HWND pHVar3;
  uint uVar4;
  UINT Msg;
  HWND *lParam;
  HWND local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = 0;
  switch(param_2) {
  case 0x9c41:
  case 0x9c42:
  case 0x9c43:
  case 0x9c44:
  case 0x9c45:
  case 0x9c46:
  case 0x9c47:
  case 0x9c48:
    uVar1 = *(uint *)(param_2 * 4 + 0x5cbe211c);
    if ((int)param_1[0x1f] <= (int)uVar1) {
      uVar1 = 0;
    }
    if (param_1[0x20] != uVar1) {
      uVar4 = 3;
      param_1[0x20] = uVar1;
    }
    uVar1 = param_1[3];
    local_c = (HWND)param_1[2];
    lParam = &local_c;
    Msg = 0x4e;
    local_4 = 0x66e;
    local_8 = uVar1;
    pHVar3 = GetParent(local_c);
    SendMessageA(pHVar3,Msg,uVar1,(LPARAM)lParam);
    if (uVar4 == 0) {
      return;
    }
    break;
  case 0x9c49:
    if (param_1[0x20] == 0) {
      return;
    }
    uVar4 = 3;
    param_1[0x20] = 0;
    break;
  case 0x9c4a:
    uVar4 = 3;
    *param_1 = *param_1 ^ 0x400;
    break;
  case 0x9c4b:
    uVar4 = 0;
    if (param_1[0x2a] != 0) {
      puVar2 = param_1 + 0x36;
      do {
        uVar4 = uVar4 + 1;
        *puVar2 = puVar2[-3];
        puVar2 = puVar2 + 9;
      } while (uVar4 < param_1[0x2a]);
    }
    uVar4 = 0;
    break;
  case 0x9c4c:
    uVar4 = 0;
    *param_1 = *param_1 ^ 0x200;
    break;
  case 0x9c4d:
    uVar4 = 0;
    *param_1 = *param_1 ^ 0x100;
    break;
  default:
    pHVar3 = (HWND)param_1[4];
    if (pHVar3 == (HWND)0x0) {
      pHVar3 = GetParent((HWND)param_1[2]);
    }
    SendMessageA(pHVar3,0x111,param_2,0);
    return;
  }
  if ((uVar4 & 2) != 0) {
    FUN_5cbc82d0((int)param_1);
  }
  InvalidateRect((HWND)param_1[2],(RECT *)(param_1 + 6),0);
  return;
}


