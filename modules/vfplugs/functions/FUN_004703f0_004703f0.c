/* Module: vfplugs.dll
   Function: FUN_004703f0
   Address: 004703f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004703f0(void *param_1)

{
  HWND pHVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  BOOL BVar4;
  uint uVar5;
  tagMSG local_1c;
  
  do {
    do {
      BVar4 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      pHVar1 = local_1c.hwnd;
    } while (BVar4 == 0);
    if (local_1c.message < 0x101) {
      if (local_1c.message == 0x100) {
        if (local_1c.wParam == 0x1b) {
          return 0;
        }
        if (local_1c.wParam == 0xd) {
          return 1;
        }
        if ((local_1c.wParam == 0x26) && (local_1c.hwnd == *(HWND *)((int)param_1 + 0x10))) {
          return 1;
        }
      }
      else {
        switch(local_1c.message) {
        case 0x12:
          PostQuitMessage(local_1c.wParam);
          return 0;
        case 0x1f:
          return 0;
        case 0xa1:
        case 0xa3:
        case 0xa4:
        case 0xa6:
        case 0xa7:
        case 0xa9:
          goto switchD_00470442_caseD_a1;
        }
      }
    }
    else {
      switch(local_1c.message) {
      case 0x111:
        if (((((local_1c.hwnd == *(HWND *)((int)param_1 + 8)) ||
              (local_1c.hwnd == *(HWND *)((int)param_1 + 0xc))) ||
             (local_1c.hwnd == *(HWND *)((int)param_1 + 0x10))) ||
            (BVar4 = IsChild(*(HWND *)((int)param_1 + 0xc),local_1c.hwnd), BVar4 != 0)) &&
           (pHVar1 != (HWND)0x0)) {
          if (local_1c.wParam >> 0x10 == 0x700) {
            SendMessageA(*(HWND *)((int)param_1 + 0xc),0x702,0,(int)param_1 + 0x44);
            uVar2 = ftol();
            uVar3 = ftol();
            uVar5 = ftol();
            FUN_0046f570(param_1,(uint)CONCAT11(uVar2,uVar3) << 8 | uVar5 & 0xff);
            InvalidateRect(*(HWND *)((int)param_1 + 0x10),(RECT *)((int)param_1 + 0x24),0);
            uVar5 = GetWindowLongA(*(HWND *)((int)param_1 + 0x10),-0x10);
            if ((uVar5 & 0x1000) != 0) {
              FUN_00470ce0(param_1,0xa0a);
            }
          }
          else if (local_1c.wParam >> 0x10 == 0xa0b) {
            uVar5 = GetWindowLongA(*(HWND *)((int)param_1 + 0x10),-0x10);
            if ((uVar5 & 0x1000) == 0) {
              return 0;
            }
            FUN_00470ce0(param_1,0xa0b);
            return 0;
          }
        }
        break;
      case 0x201:
      case 0x203:
      case 0x204:
      case 0x206:
      case 0x207:
      case 0x209:
switchD_00470442_caseD_a1:
        if ((((local_1c.hwnd != *(HWND *)((int)param_1 + 8)) &&
             (local_1c.hwnd != *(HWND *)((int)param_1 + 0xc))) &&
            ((local_1c.hwnd != *(HWND *)((int)param_1 + 0x10) &&
             (BVar4 = IsChild(*(HWND *)((int)param_1 + 0xc),local_1c.hwnd), BVar4 == 0)))) ||
           (pHVar1 == (HWND)0x0)) {
          PostMessageA(local_1c.hwnd,local_1c.message,local_1c.wParam,local_1c.lParam);
          return 1;
        }
        if (local_1c.hwnd == *(HWND *)((int)param_1 + 0x10)) {
          return 1;
        }
      }
    }
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
  } while( true );
}


