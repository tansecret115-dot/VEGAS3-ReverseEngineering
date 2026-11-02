/* Module: vegas30.exe
   Function: FUN_004dc660
   Address: 004dc660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dc660(undefined4 param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  int *piVar3;
  LRESULT LVar4;
  LPARAM lParam;
  WPARAM WVar5;
  int iVar6;
  WPARAM local_14;
  
  if ((((DAT_0064762c != 0) && (piVar3 = (int *)FUN_005b8760(DAT_0064b138), piVar3 != (int *)0x0))
      && (iVar1 = *(int *)(DAT_0064762c + 0x70), iVar1 != 0)) &&
     (((hWnd = *(HWND *)(iVar1 + 0xf1c), hWnd != (HWND)0x0 && (iVar2 = *piVar3, iVar2 != 0)) &&
      (local_14 = SendMessageA(hWnd,0x147,0,0), -1 < (int)local_14)))) {
    LVar4 = SendMessageA(hWnd,0x150,local_14,0);
    SendMessageA(hWnd,0x14b,0,0);
    SendMessageA(hWnd,0x141,0x104,0);
    lParam = _SfGetString_8(DAT_00647204,0x4ff0);
    WVar5 = SendMessageA(hWnd,0x14a,0,lParam);
    SendMessageA(hWnd,0x151,WVar5,0);
    SendMessageA(hWnd,0x14e,0,0);
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
    iVar6 = _SfList_Sort_12(piVar3,param_2 == 0,&LAB_004dc7e0);
    if (iVar6 < 0) {
      local_14 = 0;
    }
    else {
      param_2 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = *(int *)(piVar3[2] + param_2 * 4);
          WVar5 = FUN_004daed0(hWnd,0xffffffff,iVar6);
          if (LVar4 == iVar6) {
            local_14 = WVar5;
          }
          param_2 = param_2 + 1;
        } while (param_2 < iVar2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
    SendMessageA(hWnd,0x14e,local_14,0);
    *(WPARAM *)(iVar1 + 0xf30) = local_14;
  }
  return;
}


