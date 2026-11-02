/* Module: sfcdi.dll
   Function: ldr_FillInterfaceList
   Address: 5bf08a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall ldr_FillInterfaceList(struct HWND__ *,unsigned int) */

void ldr_FillInterfaceList(HWND__ *param_1,uint param_2)

{
  HWND__ *hWnd;
  int iVar1;
  WPARAM WVar2;
  LPSTR pCVar3;
  HWND__ *lParam;
  ldrcaps_tag local_40 [20];
  CHAR local_2c [44];
  
                    /* 0x8a10  237  ?ldr_FillInterfaceList@@YGXPAUHWND__@@I@Z */
  hWnd = param_1;
  lParam = (HWND__ *)0x0;
  SendMessageA(param_1,0x14b,0,0);
  iVar1 = ldr_GetNumInterfaces();
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
      ldr_GetInterfaceCaps((int)lParam,local_40,0x40);
      WVar2 = FUN_5bf087c0(hWnd,local_2c);
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


