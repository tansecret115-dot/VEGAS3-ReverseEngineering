/* Module: sftrans1.dll
   Function: FUN_0047d840
   Address: 0047d840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0047d840(int param_1,undefined4 param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  HMENU hMenu;
  LRESULT LVar2;
  LRESULT LVar3;
  BOOL BVar4;
  uint uFlags;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = GetDlgCtrlID(param_3);
  if (iVar1 != 0x643) {
    return 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return 0;
  }
  LVar2 = SendMessageA(hWnd,0x432,0,0);
  LVar3 = SendMessageA(hWnd,0x442,0,0);
  uFlags = (uint)(LVar3 == 0);
  AppendMenuA(hMenu,uFlags,2,"Cu&t");
  AppendMenuA(hMenu,uFlags,3,"&Copy");
  AppendMenuA(hMenu,(uint)(LVar2 == 0),4,"&Paste");
  AppendMenuA(hMenu,uFlags,5,"&Delete");
  AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
  AppendMenuA(hMenu,0,6,"Select &All");
  BVar4 = TrackPopupMenu(hMenu,0x182,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10),0,
                         *(HWND *)(param_1 + 4),(RECT *)0x0);
  switch(BVar4) {
  case 2:
    lParam = 0;
    Msg = 0x300;
    break;
  case 3:
    lParam = 0;
    Msg = 0x301;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x54) = 1;
    SendMessageA(hWnd,0x302,0,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
    DestroyMenu(hMenu);
    return 0;
  case 5:
    lParam = 0;
    Msg = 0x303;
    break;
  case 6:
    lParam = -1;
    Msg = 0xb1;
    break;
  default:
    goto switchD_0047d948_default;
  }
  SendMessageA(hWnd,Msg,0,lParam);
switchD_0047d948_default:
  DestroyMenu(hMenu);
  return 0;
}


