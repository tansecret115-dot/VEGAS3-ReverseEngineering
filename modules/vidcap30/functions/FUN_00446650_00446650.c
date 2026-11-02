/* Module: vidcap30.exe
   Function: FUN_00446650
   Address: 00446650
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00446650(int param_1,uint param_2,HDC param_3,int param_4)

{
  DWORD color;
  COLORREF color_00;
  HWND pHVar1;
  int iVar2;
  LPARAM lParam;
  LRESULT LVar3;
  tagPOINT local_8;
  
  local_8.x = 0;
  if (param_2 < 0x4f) {
    if (param_2 == 0x4e) {
      LVar3 = FUN_00447b00(param_1,param_3,param_4);
      return LVar3;
    }
    switch(param_2) {
    case 1:
      LVar3 = FUN_00446cc0(param_1);
      return LVar3;
    case 2:
      FUN_00447230(param_1);
      return local_8.x;
    case 5:
      FUN_00447380(param_1,param_4);
      return local_8.x;
    case 7:
      if (*(HWND *)(DAT_005ba4c0 + 0x90) == (HWND)0x0) {
        SetFocus(*(HWND *)(param_1 + 0x88));
        FUN_004041e0(0);
        return local_8.x;
      }
      SetFocus(*(HWND *)(DAT_005ba4c0 + 0x90));
      return local_8.x;
    case 0xf:
      FUN_00447490(param_1);
      return local_8.x;
    case 0x14:
      color = GetSysColor(0xf);
      color_00 = SetBkColor(param_3,color);
      ExtTextOutA(param_3,0,0,2,(RECT *)(param_1 + 0x1a8),(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_3,color_00);
      return 1;
    case 0x15:
      SendMessageA(*(HWND *)(param_1 + 0x88),param_2,(WPARAM)param_3,param_4);
      SendMessageA(*(HWND *)(param_1 + 0x194),param_2,(WPARAM)param_3,param_4);
      return local_8.x;
    }
  }
  else if (param_2 < 0x120) {
    if (param_2 == 0x11f) {
      SendMessageA(DAT_005ba4bc,0x11f,(WPARAM)param_3,param_4);
      return 1;
    }
    if (param_2 == 0x53) {
      if (*(int *)(param_4 + 4) == 1) {
        local_8.x = *(int *)(param_4 + 0x14);
        local_8.y = *(int *)(param_4 + 0x18);
        ScreenToClient(*(HWND *)(param_1 + 8),&local_8);
        if ((((local_8.x < *(int *)(param_1 + 0x1a8)) || (*(int *)(param_1 + 0x1b0) <= local_8.x))
            || (local_8.y < *(int *)(param_1 + 0x1ac))) || (*(int *)(param_1 + 0x1b4) <= local_8.y))
        {
          if (((local_8.x < *(int *)(param_1 + 0x198)) || (*(int *)(param_1 + 0x1a0) <= local_8.x))
             || ((local_8.y < *(int *)(param_1 + 0x19c) || (*(int *)(param_1 + 0x1a4) <= local_8.y))
                )) {
            LVar3 = FUN_0041f690(0,*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(param_4 + 8),
                                 &DAT_005b58d0,0);
            return LVar3;
          }
          *(undefined4 *)(param_4 + 8) = 0x1ff;
          pHVar1 = *(HWND *)(param_1 + 8);
          param_2 = 0x53;
          goto LAB_00446a61;
        }
        _SfHelp_HitTestToolbar_8(*(undefined4 *)(param_1 + 0x194),param_4);
      }
      pHVar1 = *(HWND *)(param_1 + 8);
      param_2 = 0x53;
      goto LAB_00446a61;
    }
    if (param_2 == 0x111) {
      FUN_00447580(param_1,(uint)param_3 & 0xffff,(uint)param_3 >> 0x10,param_4);
      return local_8.x;
    }
    if (param_2 == 0x113) {
      if (param_3 != (HDC)0xa) {
        return 0;
      }
      KillTimer(*(HWND *)(param_1 + 8),10);
      *(undefined4 *)(param_1 + 0x308) = 1;
      if (*(int *)(param_1 + 0x300) == 0) {
        return local_8.x;
      }
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
      InvalidateRect(pHVar1,(RECT *)0x0,0);
      return local_8.x;
    }
  }
  else {
    if ((param_2 == 0x201) || (param_2 == 0x204)) {
      if (*(HWND *)(DAT_005ba4c0 + 0x90) == (HWND)0x0) {
        SetFocus(*(HWND *)(param_1 + 0x88));
        FUN_004041e0(0);
      }
      else {
        SetFocus(*(HWND *)(DAT_005ba4c0 + 0x90));
      }
      pHVar1 = *(HWND *)(param_1 + 8);
      goto LAB_00446a61;
    }
    if (param_2 == 0x414) {
      iVar2 = FUN_004464b0(*(undefined4 *)(DAT_005ba4c0 + 0x70));
      if ((iVar2 == 0) || (iVar2 = FUN_00435280(*(undefined4 *)(DAT_005ba4c0 + 0x6c),0), iVar2 == 0)
         ) {
        lParam = 0;
      }
      else {
        lParam = 1;
      }
      SendMessageA(*(HWND *)(param_1 + 0x194),0x401,0x9d88,lParam);
      return local_8.x;
    }
  }
  pHVar1 = *(HWND *)(param_1 + 8);
LAB_00446a61:
  LVar3 = DefWindowProcA(pHVar1,param_2,(WPARAM)param_3,param_4);
  return LVar3;
}


