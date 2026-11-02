/* Module: encn3260.dll
   Function: FUN_664cb530
   Address: 664cb530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664cb530(undefined4 *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  DWORD DVar2;
  tagMSG local_20;
  
  if ((*(int *)((int)param_1 + 0x1a) == 0) && (*(short *)(param_1 + 6) == 0)) {
    hWnd = (HWND)param_1[1];
    while( true ) {
      if ((hWnd == (HWND)0x0) || (BVar1 = PeekMessageA(&local_20,hWnd,0,0,1), BVar1 == 0))
      goto LAB_664cb58a;
      if (local_20.message == 0x12) break;
      hWnd = (HWND)param_1[1];
    }
    PostQuitMessage(0);
LAB_664cb58a:
    FUN_664cb610(param_1);
    DVar2 = GetCurrentThreadId();
    if (param_1[3] == DVar2) {
      SendMessageA((HWND)param_1[1],DAT_664f2a50,0,0);
      return 1;
    }
    PostMessageA((HWND)param_1[1],DAT_664f2a50,0,0);
    Sleep(0);
  }
  return 1;
}


