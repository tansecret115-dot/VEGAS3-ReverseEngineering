/* Module: sfcdi.dll
   Function: FUN_5bf1dae0
   Address: 5bf1dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1dae0(HWND param_1,int param_2,HWND param_3,int param_4)

{
  ULONG_PTR *pUVar1;
  WPARAM WVar2;
  DWORD DVar3;
  HWND pHVar4;
  HWND hWnd;
  HWND hWnd_00;
  UINT UVar5;
  ULONG_PTR *lParam;
  CHAR *lParam_00;
  int nIDDlgItem;
  LPARAM lParam_01;
  CHAR local_104 [260];
  
  pUVar1 = (ULONG_PTR *)GetWindowLongA(param_1,8);
  if (param_2 == 9) {
    FUN_5bf35f80(0,param_1,*pUVar1,1,(uchar *)pUVar1[0x43]);
  }
  else if ((param_2 == 0x161) && (param_4 == 1)) {
    WVar2 = SendMessageA(param_3,0x147,0,0);
    if (-1 < (int)WVar2) {
      local_104[0] = '\0';
      SendMessageA(param_3,0x148,WVar2,(LPARAM)local_104);
      DVar3 = GetFileAttributesA(local_104);
      if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) {
        lParam = pUVar1 + 2;
        WVar2 = 0x104;
        UVar5 = 0x464;
        pHVar4 = GetParent(param_1);
        SendMessageA(pHVar4,UVar5,WVar2,(LPARAM)lParam);
        lParam_00 = local_104;
        pUVar1[1] = 1;
        WVar2 = 0x480;
        UVar5 = 0x468;
        pHVar4 = GetParent(param_1);
        SendMessageA(pHVar4,UVar5,WVar2,(LPARAM)lParam_00);
        nIDDlgItem = 0x480;
        pHVar4 = GetParent(param_1);
        hWnd = GetDlgItem(pHVar4,nIDDlgItem);
        lParam_01 = 1;
        UVar5 = 0x28;
        pHVar4 = hWnd;
        hWnd_00 = GetParent(param_1);
        PostMessageA(hWnd_00,UVar5,(WPARAM)pHVar4,lParam_01);
        PostMessageA(hWnd,0x100,0xd,0);
        return;
      }
    }
  }
  return;
}


