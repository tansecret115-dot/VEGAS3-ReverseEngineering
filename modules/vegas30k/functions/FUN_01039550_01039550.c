/* Module: vegas30k.dll
   Function: FUN_01039550
   Address: 01039550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01039550(HWND param_1,int param_2,uint param_3,int param_4)

{
  LONG LVar1;
  UINT UVar2;
  HWND hWnd;
  undefined4 uVar3;
  uint uVar4;
  int nIndex;
  undefined1 *dwNewLong;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 2) {
    if (LVar1 != 0) {
      DeleteObject(*(HGDIOBJ *)(LVar1 + 0x18));
      *(undefined4 *)(LVar1 + 0x18) = 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      SetWindowLongA(param_1,8,param_4);
      _SfWndCenter_16(param_1,0,0,0x8001);
      CheckDlgButton(param_1,0x3eb,*(UINT *)(param_4 + 0x10));
      dwNewLong = &LAB_01039480;
      nIndex = -4;
      hWnd = GetDlgItem(param_1,0x3ec);
      LVar1 = SetWindowLongA(hWnd,nIndex,(LONG)dwNewLong);
      *(LONG *)(param_4 + 0x14) = LVar1;
      uVar3 = _SfLoadBitmap_8(DAT_0120e5c8,2);
      *(undefined4 *)(param_4 + 0x18) = uVar3;
      if (*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0xc)) {
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_4 + 4);
      }
      FUN_01039510(param_1,param_4);
      return 1;
    }
    if (param_2 == 0x111) {
      param_3 = param_3 & 0xffff;
      if (param_3 < 0x3eb) {
        if (param_3 == 0x3ea) {
          uVar4 = *(int *)(LVar1 + 0xc) + 1;
          *(uint *)(LVar1 + 0xc) = uVar4;
          if (*(uint *)(LVar1 + 8) < uVar4) {
            *(undefined4 *)(LVar1 + 0xc) = *(undefined4 *)(LVar1 + 4);
          }
          FUN_01039510(param_1,LVar1);
          return 1;
        }
        if ((param_3 != 0) && ((param_3 < 3 || (param_3 == 0x3e9)))) {
          EndDialog(param_1,param_3);
          return 1;
        }
      }
      else if (param_3 == 0x3eb) {
        UVar2 = IsDlgButtonChecked(param_1,0x3eb);
        *(UINT *)(LVar1 + 0x10) = UVar2;
        return 1;
      }
    }
  }
  return 0;
}


