/* Module: rmme3260.dll
   Function: FUN_6625f910
   Address: 6625f910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625f910(undefined4 *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  DWORD DVar2;
  tagMSG local_20;
  
  if ((*(int *)((int)param_1 + 0x1a) == 0) && (*(short *)(param_1 + 6) == 0)) {
    hWnd = (HWND)param_1[1];
    while( true ) {
      if ((hWnd == (HWND)0x0) || (BVar1 = PeekMessageA(&local_20,hWnd,0,0,1), BVar1 == 0))
      goto LAB_6625f96a;
      if (local_20.message == 0x12) break;
      hWnd = (HWND)param_1[1];
    }
    PostQuitMessage(0);
LAB_6625f96a:
    FUN_6625f9f0(param_1);
    DVar2 = GetCurrentThreadId();
    if (param_1[3] == DVar2) {
      SendMessageA((HWND)param_1[1],DAT_6627f260,0,0);
      return 1;
    }
    PostMessageA((HWND)param_1[1],DAT_6627f260,0,0);
    Sleep(0);
  }
  return 1;
}


