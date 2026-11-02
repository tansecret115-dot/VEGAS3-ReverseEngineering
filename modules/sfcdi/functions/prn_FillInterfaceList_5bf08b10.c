/* Module: sfcdi.dll
   Function: prn_FillInterfaceList
   Address: 5bf08b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall prn_FillInterfaceList(struct HWND__ *,unsigned int) */

void prn_FillInterfaceList(HWND__ *param_1,uint param_2)

{
  HWND__ *hWnd;
  int iVar1;
  WPARAM WVar2;
  LPSTR pCVar3;
  HWND__ *lParam;
  prncaps_tag local_38 [20];
  CHAR local_24 [36];
  
                    /* 0x8b10  250  ?prn_FillInterfaceList@@YGXPAUHWND__@@I@Z */
  hWnd = param_1;
  lParam = (HWND__ *)0x0;
  SendMessageA(param_1,0x14b,0,0);
  iVar1 = prn_GetNumInterfaces();
  param_1 = (HWND__ *)0x0;
  if (iVar1 == 0) {
    pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xd0);
    WVar2 = SendMessageA(hWnd,0x14a,0,(LPARAM)pCVar3);
    SendMessageA(hWnd,0x151,WVar2,-1);
    SendMessageA(hWnd,0x14e,0,0);
    return;
  }
  if (0 < iVar1) {
    do {
      prn_GetInterfaceCaps((int)lParam,local_38,0x38);
      WVar2 = FUN_5bf087c0(hWnd,local_24);
      SendMessageA(hWnd,0x151,WVar2,(LPARAM)lParam);
      if ((HWND__ *)param_2 == lParam) {
        param_1 = lParam;
      }
      lParam = (HWND__ *)((int)&lParam->unused + 1);
    } while ((int)lParam < iVar1);
  }
  pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xd0);
  WVar2 = SendMessageA(hWnd,0x14a,0,(LPARAM)pCVar3);
  SendMessageA(hWnd,0x151,WVar2,-1);
  if (param_2 == 0xffffffff) {
    SendMessageA(hWnd,0x14e,0,0);
    return;
  }
  SendMessageA(hWnd,0x14e,(WPARAM)param_1,0);
  return;
}


