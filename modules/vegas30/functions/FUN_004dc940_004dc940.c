/* Module: vegas30.exe
   Function: FUN_004dc940
   Address: 004dc940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dc940(void)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  int *piVar3;
  WPARAM wParam;
  LPARAM lParam;
  WPARAM wParam_00;
  int iVar4;
  
  if (DAT_0064762c != 0) {
    piVar3 = (int *)FUN_005b8760(DAT_0064b138);
    if (piVar3 != (int *)0x0) {
      iVar1 = *(int *)(DAT_0064762c + 0x70);
      if (((iVar1 != 0) && (hWnd = *(HWND *)(iVar1 + 0xf1c), hWnd != (HWND)0x0)) &&
         (iVar2 = *piVar3, iVar2 != 0)) {
        wParam = SendMessageA(hWnd,0x147,0,0);
        if (-1 < (int)wParam) {
          SendMessageA(hWnd,0x14b,0,0);
          SendMessageA(hWnd,0x141,0x104,0);
          lParam = _SfGetString_8(DAT_00647204,0x4ff0);
          wParam_00 = SendMessageA(hWnd,0x14a,0,lParam);
          SendMessageA(hWnd,0x151,wParam_00,0);
          SendMessageA(hWnd,0x14e,0,0);
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
          iVar4 = 0;
          if (0 < iVar2) {
            do {
              FUN_004daed0(hWnd,0xffffffff,*(undefined4 *)(piVar3[2] + iVar4 * 4));
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
          SendMessageA(hWnd,0x14e,wParam,0);
          *(WPARAM *)(iVar1 + 0xf30) = wParam;
        }
      }
    }
  }
  return;
}


