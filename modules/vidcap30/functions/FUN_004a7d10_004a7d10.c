/* Module: vidcap30.exe
   Function: FUN_004a7d10
   Address: 004a7d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a7d10(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  LONG LVar2;
  HWND pHVar3;
  WPARAM wParam;
  uint uVar4;
  HWND hWnd;
  LRESULT LVar5;
  uint uVar6;
  UINT Msg;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  pHVar3 = GetCapture();
  if (pHVar3 == param_1) {
    if (param_2 != 0x1b) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(int *)(LVar2 + 4) == 0) {
      SendMessageA(param_1,0x602,0,0);
      return;
    }
    SendMessageA(param_1,0x1f,0,0);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  switch(param_2) {
  case 0x21:
  case 0x25:
  case 0x26:
    LVar5 = SendMessageA(param_1,0x601,0,0);
    wParam = LVar5 - 1;
    if ((int)wParam < 0) {
      wParam = *(int *)(LVar2 + 0xb0) - 1;
    }
    break;
  case 0x22:
  case 0x27:
  case 0x28:
    LVar5 = SendMessageA(param_1,0x601,0,0);
    wParam = LVar5 + 1;
    if (*(int *)(LVar2 + 0xb0) + -1 < (int)wParam) {
      wParam = 0;
    }
    break;
  case 0x23:
    param_2 = *(int *)(LVar2 + 0xb0);
    goto LAB_004a7dac;
  case 0x24:
    wParam = 0;
    break;
  default:
    goto switchD_004a7d94_caseD_29;
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
    param_2 = param_2 + -0x30;
    goto LAB_004a7d9e;
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
    param_2 = param_2 + -0x60;
LAB_004a7d9e:
    if ((param_2 < 1) || (*(int *)(LVar2 + 0xb0) < param_2)) goto switchD_004a7d94_caseD_29;
LAB_004a7dac:
    wParam = param_2 - 1;
  }
  SendMessageA(param_1,0x602,wParam,0);
switchD_004a7d94_caseD_29:
  iVar1 = *(int *)(LVar2 + 0x10);
  uVar6 = 0xffff;
  if ((-1 < iVar1) && (iVar1 < *(int *)(LVar2 + 0xb0))) {
    uVar6 = (uint)*(ushort *)(LVar2 + 0x154 + iVar1 * 0x38);
  }
  pHVar3 = param_1;
  uVar4 = GetDlgCtrlID(param_1);
  uVar6 = uVar4 & 0xffff | uVar6 << 0x10;
  Msg = 0x111;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,uVar6,(LPARAM)pHVar3);
  return;
}


