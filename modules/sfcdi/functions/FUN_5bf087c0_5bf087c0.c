/* Module: sfcdi.dll
   Function: FUN_5bf087c0
   Address: 5bf087c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf087c0(HWND param_1,LPCSTR param_2)

{
  LRESULT LVar1;
  int iVar2;
  WPARAM wParam;
  CHAR local_200 [512];
  
  LVar1 = SendMessageA(param_1,0x146,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      local_200[0] = '\0';
      SendMessageA(param_1,0x148,wParam,(LPARAM)local_200);
      iVar2 = lstrcmpA(param_2,local_200);
      if (iVar2 < 1) break;
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  SendMessageA(param_1,0x14a,wParam,(LPARAM)param_2);
  return;
}


