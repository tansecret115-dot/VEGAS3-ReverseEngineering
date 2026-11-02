/* Module: vidcap30.exe
   Function: FUN_0045e5f0
   Address: 0045e5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045e5f0(HWND param_1)

{
  HMENU hMenu;
  HWND hWnd;
  LRESULT LVar1;
  WPARAM wParam;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar6 = false;
  hMenu = (HMENU)FUN_00404200(0x1e5,0);
  if (hMenu == (HMENU)0x0) {
    return 0x8004e003;
  }
  hWnd = GetDlgItem(param_1,0x4d1);
  pcVar4 = SendMessageA_exref;
  LVar1 = SendMessageA(hWnd,0x1032,0,0);
  if (LVar1 == 0) {
    local_18 = 0x1e6;
    local_14 = 0x4bb;
    local_10 = 0x4d4;
    local_c = 0x9d7e;
    local_8 = 0x4bc;
    local_4 = 0x4bd;
    _SfCullMenu_16(hMenu,&local_18,6,6);
  }
  else {
    local_1c = 0x4ba;
    _SfCullMenu_16(hMenu,&local_1c,1,1);
    wParam = SendMessageA(hWnd,0x1042,0,0);
    bVar5 = wParam != 0xffffffff;
    if (bVar5) {
      LVar1 = SendMessageA(hWnd,0x1004,0,0);
      bVar6 = wParam != LVar1 - 1U;
      uVar2 = SendMessageA(hWnd,0x102c,wParam,0xf000);
      CheckMenuItem(hMenu,0x1e6,-(uint)(uVar2 >> 0xc != 1) & 8);
    }
    EnableMenuItem(hMenu,0x1e6,(uint)!bVar5);
    EnableMenuItem(hMenu,0x4bb,(uint)!bVar5);
    EnableMenuItem(hMenu,0x4d4,(uint)!bVar5);
    EnableMenuItem(hMenu,0x9d7e,(uint)!bVar5);
    EnableMenuItem(hMenu,0x4bc,(uint)(!bVar5 || wParam == 0));
    EnableMenuItem(hMenu,0x4bd,(uint)!bVar6);
    SetMenuDefaultItem(hMenu,0x9d7e,0);
    pcVar4 = SendMessageA_exref;
  }
  uVar3 = FUN_00404270(param_1,hMenu,&stack0x00000008,2);
  (*pcVar4)(param_1,0x111,uVar3,0);
  return 0;
}


