/* Module: vegas30.exe
   Function: FUN_004e3220
   Address: 004e3220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e3220(undefined4 param_1,int param_2,WPARAM param_3,WPARAM param_4)

{
  HWND hWnd;
  int *piVar1;
  DWORD DVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  WPARAM wParam;
  LRESULT LVar5;
  int iVar6;
  WPARAM WVar7;
  
  piVar1 = (int *)FUN_005b8760(DAT_0064b138);
  DVar2 = GetCurrentThreadId();
  hWnd = *(HWND *)(param_2 + 0xf1c);
  if ((param_3 != param_4) && (DVar2 == DAT_00647208)) {
    WVar7 = param_4;
    if ((int)param_4 < (int)param_3) {
      WVar7 = param_3;
      param_3 = param_4;
    }
    LVar3 = SendMessageA(hWnd,0x150,param_3,0);
    LVar4 = SendMessageA(hWnd,0x150,WVar7,0);
    if ((LVar3 != 0) && (LVar4 != 0)) {
      wParam = SendMessageA(hWnd,0x147,0,0);
      if (0 < (int)wParam) {
        LVar5 = SendMessageA(hWnd,0x150,wParam,0);
        if (LVar5 != 0) {
          FUN_004e33d0(param_1,LVar5);
          FUN_004dc360(param_1,LVar5,0);
        }
      }
      SendMessageA(hWnd,0x151,WVar7,0);
      SendMessageA(hWnd,0x144,WVar7,0);
      SendMessageA(hWnd,0x151,param_3,0);
      SendMessageA(hWnd,0x144,param_3,0);
      FUN_004daed0(hWnd,param_3,LVar4);
      FUN_004daed0(hWnd,WVar7,LVar3);
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
      if ((*piVar1 < (int)param_3) || (*piVar1 < (int)WVar7)) {
        iVar6 = -0x7fffbffb;
      }
      else {
        WVar7 = WVar7 - 1;
        iVar6 = _SfList_MoveRange_16(piVar1,WVar7,param_3 - 1,1);
        if ((-1 < iVar6) && (param_3 != WVar7)) {
          iVar6 = _SfList_MoveRange_16(piVar1,param_3,WVar7,1);
        }
      }
      if (piVar1 != (int *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 3));
      }
      if (iVar6 < 0) {
        param_3 = 0;
      }
      SendMessageA(hWnd,0x14e,param_3,0);
      FUN_004dc2b0(param_2,hWnd,param_3);
      *(WPARAM *)(param_2 + 0xf30) = param_3;
    }
  }
  return;
}


