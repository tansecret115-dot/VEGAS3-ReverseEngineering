/* Module: vegas30.exe
   Function: FUN_004dadf0
   Address: 004dadf0
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_004dadf0(undefined4 param_1,HWND param_2,WPARAM param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  LPARAM lParam;
  WPARAM wParam;
  int iVar5;
  
  piVar4 = (int *)FUN_005b8760(param_1);
  if (param_2 == (HWND)0x0) {
    wParam = 0xffffffff;
  }
  else {
    SendMessageA(param_2,0x14b,0,0);
    SendMessageA(param_2,0x141,0x104,0);
    lParam = _SfGetString_8(DAT_00647204,0x4ff0);
    wParam = SendMessageA(param_2,0x14a,0,lParam);
    SendMessageA(param_2,0x151,wParam,0);
  }
  if (piVar4 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
    iVar1 = *piVar4;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(piVar4[2] + iVar5 * 4);
        if (iVar2 != 0) {
          wParam = FUN_004daed0(param_2,0xffffffff,iVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
    bVar3 = (int)wParam < (int)param_3;
    wParam = param_3;
    if (bVar3) {
      wParam = 0;
    }
  }
  SendMessageA(param_2,0x14e,wParam,0);
  return wParam;
}


