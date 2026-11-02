/* Module: vidcap30.exe
   Function: _SfHelp_HitTestToolbar@8
   Address: 004a3350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfHelp_HitTestToolbar_8(HWND param_1,int param_2)

{
  POINT pt;
  LRESULT LVar1;
  LRESULT LVar2;
  BOOL BVar3;
  WPARAM wParam;
  tagPOINT local_2c;
  RECT local_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xa3350  455  _SfHelp_HitTestToolbar@8 */
  local_2c.x = *(LONG *)(param_2 + 0x14);
  local_2c.y = *(LONG *)(param_2 + 0x18);
  wParam = 0;
  ScreenToClient(param_1,&local_2c);
  LVar1 = SendMessageA(param_1,0x418,0,0);
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x41d,wParam,(LPARAM)&local_24);
      if ((LVar2 != 0) &&
         (pt.y = local_2c.y, pt.x = local_2c.x, BVar3 = PtInRect(&local_24,pt), BVar3 != 0)) {
        SendMessageA(param_1,0x417,wParam,(LPARAM)&local_14);
        break;
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  if (local_10 == 0) {
    return 0;
  }
  *(int *)(param_2 + 8) = local_10;
  return 1;
}


