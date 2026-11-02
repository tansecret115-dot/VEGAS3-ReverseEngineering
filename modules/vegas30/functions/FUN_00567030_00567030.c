/* Module: vegas30.exe
   Function: FUN_00567030
   Address: 00567030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567030(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  int iVar3;
  WPARAM wParam;
  WPARAM WVar4;
  CHAR aCStack_30c [259];
  undefined1 uStack_209;
  WCHAR local_208 [260];
  
  hWnd = GetDlgItem(param_1,0x436);
  LVar1 = SendMessageA(hWnd,0x146,0,0);
  wParam = 0xffffffff;
  WVar4 = 0;
  if (0 < LVar1) {
    do {
      wParam = WVar4;
      LVar2 = SendMessageA(hWnd,0x150,wParam,0);
      if (LVar2 == param_4) {
        if (-1 < (int)wParam) goto LAB_00567140;
        break;
      }
      WVar4 = wParam + 1;
      wParam = 0xffffffff;
    } while ((int)WVar4 < LVar1);
  }
  iVar3 = (**(code **)(*DAT_0064b510 + 0x80))(DAT_0064b510,param_3,param_4,local_208,0x104);
  if (-1 < iVar3) {
    if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_208,-1,aCStack_30c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x30c) {
      aCStack_30c[0] = '\0';
    }
    uStack_209 = 0;
    wParam = SendMessageA(hWnd,0x143,0,(LPARAM)aCStack_30c);
    if (wParam == 0xffffffff) {
      return;
    }
    SendMessageA(hWnd,0x151,wParam,param_4);
  }
  if (-1 < (int)wParam) {
LAB_00567140:
    SendMessageA(hWnd,0x14e,wParam,0);
    SendMessageA(param_1,0x111,0x10436,(LPARAM)hWnd);
    *(int *)(param_2 + 0xd4) = param_4;
  }
  return;
}


