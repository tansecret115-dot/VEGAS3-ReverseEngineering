/* Module: sftrans1.dll
   Function: FUN_004879b0
   Address: 004879b0
   Source: Ghidra pseudocode (Stage 10 batch) */


char __thiscall FUN_004879b0(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  WPARAM WVar3;
  SHORT SVar4;
  SHORT SVar5;
  BOOL BVar6;
  tagMSG local_1c;
  
  cVar2 = '\0';
  do {
    do {
      bVar1 = false;
      BVar6 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      WVar3 = local_1c.wParam;
    } while (BVar6 == 0);
    if (local_1c.message < 0xa8) {
      if (0xa5 < local_1c.message) goto switchD_00487a0c_caseD_a1;
      switch(local_1c.message) {
      case 6:
        if ((local_1c.hwnd == *(HWND *)(param_1 + 0x10c)) && ((short)local_1c.wParam == 0)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
          return '\0';
        }
        break;
      case 8:
        if (local_1c.hwnd == *(HWND *)(param_1 + 0x10c)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
          return '\x02';
        }
        break;
      case 0x12:
        PostQuitMessage(local_1c.wParam);
        return '\0';
      case 0x1f:
        goto switchD_00487a0c_caseD_1f;
      case 0xa1:
      case 0xa3:
      case 0xa4:
        goto switchD_00487a0c_caseD_a1;
      }
    }
    else {
      if (local_1c.message < 0x205) {
        if ((local_1c.message < 0x203) && (local_1c.message != 0xa9)) {
          if (local_1c.message == 0x100) {
            SVar4 = GetKeyState(0x11);
            if (local_1c.wParam == 0x1b) {
              return '\0';
            }
            if (local_1c.wParam == 0xd) {
              *param_3 = 1;
              return '\x01';
            }
            SVar5 = VkKeyScanA('~');
            if ((char)SVar5 == (char)local_1c.wParam) {
              bVar1 = true;
            }
            else if (((((local_1c.wParam == 0x26) || (local_1c.wParam == 0x28)) ||
                      (local_1c.wParam == 0x21)) ||
                     (((local_1c.wParam == 0x22 || (local_1c.wParam == 9)) ||
                      (local_1c.wParam == 0x2d)))) ||
                    ((SVar4 < 0 && (((WVar3 == 0x53 || (WVar3 == 0x44)) || (WVar3 == 0x48)))))) {
              PostMessageA(*(HWND *)(param_1 + 4),local_1c.message,local_1c.wParam,local_1c.lParam);
              return (param_2 == -1) + '\x01';
            }
          }
          else if (local_1c.message == 0x201) goto switchD_00487a0c_caseD_a1;
          goto switchD_00487a0c_caseD_7;
        }
      }
      else if ((local_1c.message < 0x206) ||
              ((0x207 < local_1c.message && (local_1c.message != 0x209))))
      goto switchD_00487a0c_caseD_7;
switchD_00487a0c_caseD_a1:
      if (local_1c.hwnd != *(HWND *)(param_1 + 0x10c)) {
        cVar2 = '\x01';
        PostMessageA(local_1c.hwnd,local_1c.message,local_1c.wParam,local_1c.lParam);
switchD_00487a0c_caseD_1f:
        return cVar2;
      }
    }
switchD_00487a0c_caseD_7:
    if (((((local_1c.hwnd == *(HWND *)(param_1 + 0x10c)) || (local_1c.message == 0xf)) ||
         (local_1c.message == 0x85)) || (local_1c.message == 0x113)) && (!bVar1)) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
    }
  } while( true );
}


