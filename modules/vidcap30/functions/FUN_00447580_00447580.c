/* Module: vidcap30.exe
   Function: FUN_00447580
   Address: 00447580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447580(int param_1,uint param_2,int param_3,LPARAM param_4)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  UINT Msg;
  WPARAM wParam;
  uint wParam_00;
  undefined1 *lParam;
  
  uVar5 = 0;
  if (param_2 < 0x9d43) {
    if (param_2 == 0x9d42) {
      uVar5 = FUN_0044aa10(param_1,1);
      FUN_00404910(uVar5,0xb);
      return;
    }
    switch(param_2) {
    case 0x9c61:
    case 0x9c62:
    case 0x9c67:
      wParam_00 = param_3 << 0x10 | param_2 & 0xffff;
      goto LAB_00447746;
    default:
      goto switchD_004475b3_caseD_9c63;
    case 0x9cc4:
      lParam = (undefined1 *)0x0;
      wParam = 0;
      Msg = 0x611;
      break;
    case 0x9cc5:
      SendMessageA(*(HWND *)(param_1 + 0x88),0x610,0,0);
      FUN_00404910(0,0);
      return;
    case 0x9cc6:
      lParam = (undefined1 *)0x0;
      wParam = 0x9c68;
      Msg = 0x111;
      break;
    case 0x9cc8:
      param_4 = 0;
      wParam_00 = 0x9c6a;
LAB_00447746:
      SendMessageA(*(HWND *)(param_1 + 0x88),0x111,wParam_00,param_4);
      FUN_00404910(0,0);
      return;
    case 0x9cc9:
      *(undefined4 *)(param_1 + 0x2fc) = 1;
      *(undefined4 *)(param_1 + 0x300) = 0;
      SendMessageA(*(HWND *)(param_1 + 0x88),0x111,0x9c6b,0);
      FUN_00404910(0,0);
      return;
    case 0x9cca:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(undefined4 *)(param_1 + 0x300) = 0;
      SendMessageA(*(HWND *)(param_1 + 0x88),0x111,0x9c70,0);
      FUN_00404910(0,0);
      return;
    case 0x9ccb:
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(undefined4 *)(param_1 + 0x300) = 1;
      SendMessageA(*(HWND *)(param_1 + 0x88),0x111,0x9c71,0);
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
      FUN_00420150(pHVar1);
      FUN_00404910(0,0);
      return;
    case 0x9ccc:
      lParam = &DAT_00586c70;
      wParam = 0;
      Msg = 0x60c;
      break;
    case 0x9ccd:
      SendMessageA(*(HWND *)(param_1 + 0x88),0x614,0,0);
      FUN_00404910(0,0);
      return;
    case 0x9cd0:
      uVar5 = 0;
      goto LAB_0044770e;
    }
    SendMessageA(*(HWND *)(param_1 + 0x88),Msg,wParam,(LPARAM)lParam);
    FUN_00404910(0,0);
    return;
  }
  switch(param_2) {
  case 0x9d52:
    uVar5 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    FUN_004489b0(param_1,uVar5);
    FUN_00404910(0,0);
    return;
  case 0x9d53:
    uVar5 = 1;
LAB_0044770e:
    FUN_0044a060(param_1,*(undefined4 *)(param_1 + 0x8c),uVar5);
    FUN_00404910(0,0);
    return;
  case 0x9d56:
    uVar5 = 0x16;
    uVar3 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),0);
    iVar4 = FUN_0044c6e0(uVar3);
    if (iVar4 != 0) {
      uVar5 = FUN_00441060(*(undefined4 *)(iVar4 + 0x14));
      FUN_00404910(uVar5,0x16);
      return;
    }
    break;
  case 0x9d57:
    uVar5 = FUN_0044aa10(param_1,0);
    FUN_00404910(uVar5,0x16);
    return;
  case 0x9d7f:
    if (DAT_005bba94 != 0) break;
    iVar4 = FUN_0044a5c0(param_1);
    goto LAB_004478cd;
  case 0x9d82:
    FUN_00449f50(param_1,*(undefined4 *)(param_1 + 0x8c));
    FUN_00404910(0,0);
    return;
  case 0x9d88:
    if ((DAT_005bba30 == 4) && (DAT_005bb800 != 0)) {
      FUN_00464c20(DAT_005ba4bc,7);
      FUN_00404910(0,0);
      return;
    }
    iVar4 = FUN_00434f90(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
    if (iVar4 != 0) {
      SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,
               "The selected clips cannot be batch captured.\n\nA capture is already in progress.");
      FUN_00404910(0,0);
      return;
    }
    iVar4 = FUN_00434fc0(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
    if (iVar4 != 0) {
      SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,
               "The selected clips cannot be batch captured.\n\nA print to tape is in progress.");
      FUN_00404910(0,0);
      return;
    }
    iVar4 = FUN_0044a310(param_1);
LAB_004478cd:
    if (iVar4 != 0) {
      FUN_00434920(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
      FUN_00404910(0,0);
      return;
    }
    break;
  case 0x9d89:
    FUN_00449e60(param_1);
    FUN_00404910(0,0);
    return;
  case 0x9d8a:
    FUN_00448a40(param_1);
    FUN_00404910(0,0);
    return;
  case 0x9d8f:
    uVar5 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),1);
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc50e);
    uVar2 = FUN_0044c610(*(undefined4 *)(param_1 + 0x80));
    uVar3 = FUN_0044c4e0(uVar2,uVar3);
    uVar5 = FUN_0044e6e0(uVar5,uVar3);
    FUN_00404910(uVar5,0);
    return;
  case 0x9d91:
    uVar3 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),0);
    iVar4 = FUN_0044c6e0(uVar3);
    if (iVar4 != 0) {
      FUN_004351e0(*(undefined4 *)(DAT_005ba4c0 + 0x6c),iVar4);
    }
  }
switchD_004475b3_caseD_9c63:
  FUN_00404910(0,uVar5);
  return;
}


