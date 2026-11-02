/* Module: vidcap30.exe
   Function: FUN_0040c100
   Address: 0040c100
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0040c100(int param_1,uint param_2,WPARAM param_3,uint param_4)

{
  bool bVar1;
  WPARAM wParam;
  HWND pHVar2;
  HWND pHVar3;
  undefined4 uVar4;
  LRESULT local_1c;
  tagPOINT local_18;
  tagRECT local_10;
  
  wParam = param_3;
  local_18.x = (LONG)(short)param_4;
  local_18.y = (LONG)(short)(param_4 >> 0x10);
  local_1c = 0;
  if (param_2 < 0x202) {
    if (param_2 == 0x201) {
      return 0;
    }
    if (param_2 < 0xa3) {
      if (param_2 == 0xa2) goto LAB_0040c32c;
      if (param_2 == 0xa0) goto LAB_0040c235;
      if (param_2 != 0xa1) goto switchD_0040c30b_caseD_203;
      if (param_3 == 0x14) {
        SetCapture(*(HWND *)(param_1 + 8));
        FUN_0040bfd0(param_1,1);
        return 0;
      }
      if (param_3 == 9) {
        SetCapture(*(HWND *)(param_1 + 8));
        FUN_0040c060(param_1,1);
        return 0;
      }
      if (param_3 == 2) {
        GetCursorPos(&local_18);
        param_4 = local_18.y << 0x10 | local_18.x & 0xffffU;
      }
      param_2 = 0xa1;
      *(LONG *)(param_1 + 0x70) = local_18.x;
      *(LONG *)(param_1 + 0x74) = local_18.y;
      pHVar3 = *(HWND *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
    else {
      if (param_2 != 0x200) goto switchD_0040c30b_caseD_203;
      param_3 = *(WPARAM *)(param_1 + 0x1c);
      ClientToScreen(*(HWND *)(param_1 + 8),&local_18);
LAB_0040c235:
      pHVar3 = *(HWND *)(param_1 + 8);
      pHVar2 = GetCapture();
      if (pHVar2 == pHVar3) {
        GetWindowRect(pHVar3,&local_10);
        if (param_3 == 0x14) {
          uVar4 = 0;
          if (((local_10.left <= local_18.x) && (local_18.x < local_10.left + 0xf)) &&
             ((local_10.top <= local_18.y && (local_18.y < local_10.top + 0xf)))) {
            uVar4 = 1;
          }
          FUN_0040bfd0(param_1,uVar4);
          return 0;
        }
        if (param_3 != 9) {
          return 0;
        }
        uVar4 = 0;
        if ((((local_10.left <= local_18.x) && (local_18.x < local_10.left + 0xf)) &&
            (local_10.top + 0xf <= local_18.y)) && (local_18.y < local_10.top + 0x1f)) {
          uVar4 = 1;
        }
        FUN_0040c060(param_1,uVar4);
        return 0;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x202:
      param_3 = *(WPARAM *)(param_1 + 0x1c);
      ClientToScreen(*(HWND *)(param_1 + 8),&local_18);
LAB_0040c32c:
      if (param_3 == 0x14) {
        pHVar3 = GetCapture();
        if (pHVar3 != *(HWND *)(param_1 + 8)) {
          return 0;
        }
        ReleaseCapture();
        GetWindowRect(*(HWND *)(param_1 + 8),&local_10);
        bVar1 = false;
        if ((((local_10.left <= local_18.x) && (local_18.x < local_10.left + 0xf)) &&
            (local_10.top <= local_18.y)) && (local_18.y < local_10.top + 0xf)) {
          bVar1 = true;
        }
        FUN_0040bfd0(param_1,0);
        if (!bVar1) {
          return 0;
        }
        SendMessageA(*(HWND *)(param_1 + 8),0x112,0xf060,param_4);
        return 0;
      }
      if (param_3 == 9) {
        pHVar3 = GetCapture();
        if (pHVar3 != *(HWND *)(param_1 + 8)) {
          return 0;
        }
        ReleaseCapture();
        GetWindowRect(*(HWND *)(param_1 + 8),&local_10);
        bVar1 = false;
        if (((local_10.left <= local_18.x) && (local_18.x < local_10.left + 0xf)) &&
           ((local_10.top + 0x10 <= local_18.y && (local_18.y < local_10.top + 0x1f)))) {
          bVar1 = true;
        }
        FUN_0040c060(param_1,0);
        if (!bVar1) {
          return 0;
        }
        SendMessageA(*(HWND *)(param_1 + 8),0x112,0x405,param_4);
        return 0;
      }
      pHVar3 = *(HWND *)(param_1 + 8);
      break;
    default:
switchD_0040c30b_caseD_203:
      pHVar3 = *(HWND *)(param_1 + 8);
      break;
    case 0x204:
    case 0x205:
    case 0x207:
    case 0x208:
      goto switchD_0040c30b_caseD_204;
    }
  }
  local_1c = DefWindowProcA(pHVar3,param_2,wParam,param_4);
switchD_0040c30b_caseD_204:
  return local_1c;
}


