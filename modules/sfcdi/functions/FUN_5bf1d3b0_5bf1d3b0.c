/* Module: sfcdi.dll
   Function: FUN_5bf1d3b0
   Address: 5bf1d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1d3b0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  ULONG_PTR *pUVar1;
  HWND pHVar2;
  WPARAM wParam;
  DWORD DVar3;
  HWND hWnd;
  HWND hWnd_00;
  int iVar4;
  UINT UVar5;
  ULONG_PTR *lpString;
  char *pcVar6;
  int cchMax;
  LPARAM lParam;
  CHAR *pCVar7;
  CHAR local_104 [260];
  
  pUVar1 = (ULONG_PTR *)GetWindowLongA(param_1,8);
  if (param_2 == 1) {
    UVar5 = GetDlgItemTextA(param_1,0x440,local_104,0x104);
    if (UVar5 != 0) {
      pCVar7 = local_104;
      pcVar6 = s_MRU_Folders_5bf64f08;
      pHVar2 = GetDlgItem(param_1,0x161);
      FUN_5bf1d530(pHVar2,pcVar6,pCVar7);
    }
  }
  else {
    if (param_2 == 9) {
      FUN_5bf35f80(0,param_1,*pUVar1,1,(uchar *)pUVar1[0x43]);
      return;
    }
    if ((param_2 == 0x161) && (param_4 == 1)) {
      pHVar2 = GetDlgItem(param_1,0x161);
      wParam = SendMessageA(pHVar2,0x147,0,0);
      if (-1 < (int)wParam) {
        local_104[0] = '\0';
        SendMessageA(pHVar2,0x148,wParam,(LPARAM)local_104);
        DVar3 = GetFileAttributesA(local_104);
        if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) {
          lpString = pUVar1 + 2;
          cchMax = 0x104;
          iVar4 = 0x480;
          pHVar2 = GetParent(param_1);
          GetDlgItemTextA(pHVar2,iVar4,(LPSTR)lpString,cchMax);
          pCVar7 = local_104;
          pUVar1[1] = 1;
          iVar4 = 0x480;
          pHVar2 = GetParent(param_1);
          SetDlgItemTextA(pHVar2,iVar4,pCVar7);
          iVar4 = 0x480;
          pHVar2 = GetParent(param_1);
          hWnd = GetDlgItem(pHVar2,iVar4);
          lParam = 1;
          UVar5 = 0x28;
          pHVar2 = hWnd;
          hWnd_00 = GetParent(param_1);
          PostMessageA(hWnd_00,UVar5,(WPARAM)pHVar2,lParam);
          PostMessageA(hWnd,0x100,0xd,0);
          return;
        }
      }
    }
  }
  return;
}


