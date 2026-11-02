/* Module: sftrans1.dll
   Function: FUN_00487720
   Address: 00487720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00487720(int param_1,int param_2,int param_3)

{
  HMENU hMenu;
  BOOL BVar1;
  
  hMenu = GetSubMenu(*(HMENU *)(param_1 + 300),0);
  ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&param_2);
  BVar1 = TrackPopupMenu(hMenu,0x182,param_2,param_3,0,*(HWND *)(param_1 + 4),(RECT *)0x0);
  switch(BVar1) {
  case 0x9c50:
    FUN_0048a670(*(undefined4 *)(param_1 + 0xcc),0);
    return 1;
  case 0x9c51:
    FUN_0048a750();
    return 1;
  case 0x9c52:
    FUN_0048b850();
    return 1;
  case 0x9c53:
    FUN_0048b890();
    return 1;
  case 0x9c54:
    FUN_0048bbc0();
    break;
  case 0x9c55:
    FUN_0048a8a0(0);
    return 1;
  case 0x9c56:
    FUN_0048a8a0(1);
    return 1;
  case 0x9c57:
    FUN_0048a8a0(2);
    return 1;
  }
  return 1;
}


