/* Module: sftrans1.dll
   Function: FUN_004890d0
   Address: 004890d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004890d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  HMENU hMenu;
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  BOOL BVar4;
  uint uFlags;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    return 0;
  }
  if (param_3 != *(int *)(param_1 + 0x10c)) {
    return 0;
  }
  hMenu = CreatePopupMenu();
  if (hMenu == (HMENU)0x0) {
    return 0;
  }
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x10c),0x432,0,0);
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x10c),0x442,0,0);
  LVar3 = SendMessageA(*(HWND *)(param_1 + 0x10c),0xc6,0,0);
  AppendMenuA(hMenu,(uint)(LVar3 == 0),1,"&Undo");
  AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
  uFlags = (uint)(LVar2 == 0);
  AppendMenuA(hMenu,uFlags,2,"Cu&t");
  AppendMenuA(hMenu,uFlags,3,"&Copy");
  AppendMenuA(hMenu,(uint)(LVar1 == 0),4,"&Paste");
  AppendMenuA(hMenu,uFlags,5,"&Delete");
  AppendMenuA(hMenu,0x800,0,(LPCSTR)0x0);
  AppendMenuA(hMenu,0,6,"Select &All");
  BVar4 = TrackPopupMenu(hMenu,0x182,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10),0,
                         *(HWND *)(param_1 + 4),(RECT *)0x0);
  switch(BVar4) {
  case 1:
    hWnd = *(HWND *)(param_1 + 0x10c);
    lParam = 0;
    Msg = 0x304;
    break;
  case 2:
    hWnd = *(HWND *)(param_1 + 0x10c);
    lParam = 0;
    Msg = 0x300;
    break;
  case 3:
    lParam = 0;
    Msg = 0x301;
    goto LAB_00489263;
  case 4:
    hWnd = *(HWND *)(param_1 + 0x10c);
    lParam = 0;
    Msg = 0x302;
    break;
  case 5:
    hWnd = *(HWND *)(param_1 + 0x10c);
    lParam = 0;
    Msg = 0x303;
    break;
  case 6:
    lParam = -1;
    Msg = 0xb1;
LAB_00489263:
    hWnd = *(HWND *)(param_1 + 0x10c);
    break;
  default:
    goto switchD_00489200_default;
  }
  SendMessageA(hWnd,Msg,0,lParam);
switchD_00489200_default:
  DestroyMenu(hMenu);
  return 0;
}


