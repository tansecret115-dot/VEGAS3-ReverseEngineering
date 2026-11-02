/* Module: vegas30.exe
   Function: FUN_004815a0
   Address: 004815a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004815a0(int param_1,HWND param_2,uint param_3,short param_4,int param_5)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  UINT Msg;
  undefined4 uVar4;
  WPARAM wParam;
  undefined4 uVar5;
  LPARAM lParam;
  LONG dwNewLong;
  
  if (param_3 < 0x54) {
    if (param_3 == 0x53) {
      _SfHelp_ContextPopupHelp_24(0,param_2,0,*(undefined4 *)(param_5 + 8),&DAT_0063e328,0);
      return 1;
    }
    if (param_3 == 0xf) {
      FUN_00481470(param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
      return 0;
    }
    if (param_3 == 0x4e) {
      iVar1 = *(int *)(param_5 + 8);
      if (iVar1 == -0xcf) {
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 3) {
          dwNewLong = 0x2278;
        }
        else {
          dwNewLong = 0x2273;
        }
      }
      else {
        if (iVar1 != -0xce) {
          if (iVar1 != -200) {
            return 0;
          }
          if (*(int *)(*(int *)(param_1 + 0x10) + 0x228) == 0) {
            lParam = 3;
            wParam = 0;
            Msg = 0x470;
            pHVar2 = GetParent(param_2);
          }
          else {
            uVar5 = 0x8001;
            uVar4 = 0;
            uVar3 = 0;
            pHVar2 = GetParent(param_2);
            _SfWndCenter_16(pHVar2,uVar3,uVar4,uVar5);
            lParam = 2;
            wParam = 0;
            Msg = 0x470;
            pHVar2 = GetParent(param_2);
          }
          PostMessageA(pHVar2,Msg,wParam,lParam);
          CheckDlgButton(param_2,0x639,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 2));
          CheckDlgButton(param_2,0x63a,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 3));
          SetWindowLongA(param_2,0,0);
          return 1;
        }
        dwNewLong = 0;
      }
      SetWindowLongA(param_2,0,dwNewLong);
      return 1;
    }
  }
  else if (param_3 == 0x110) {
    _SfSetEditCtrlFont_8(param_2,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x234);
    if ((iVar1 != 3) && (iVar1 != 2)) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 2;
    }
  }
  else if (param_3 == 0x111) {
    if (param_4 == 0x639) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 2;
    }
    else if (param_4 == 0x63a) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x234) = 3;
    }
    CheckDlgButton(param_2,0x639,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 2));
    CheckDlgButton(param_2,0x63a,(uint)(*(int *)(*(int *)(param_1 + 0x10) + 0x234) == 3));
    return 0;
  }
  return 0;
}


