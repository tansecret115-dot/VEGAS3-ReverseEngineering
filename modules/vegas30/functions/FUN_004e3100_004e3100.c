/* Module: vegas30.exe
   Function: FUN_004e3100
   Address: 004e3100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e3100(undefined4 param_1,int param_2,WPARAM param_3)

{
  HWND hWnd;
  undefined4 uVar1;
  DWORD DVar2;
  LRESULT LVar3;
  int *piVar4;
  WPARAM WVar5;
  bool bVar6;
  
  WVar5 = param_3;
  uVar1 = DAT_0064b138;
  DVar2 = GetCurrentThreadId();
  bVar6 = DVar2 == DAT_00647208;
  hWnd = *(HWND *)(param_2 + 0xf1c);
  LVar3 = SendMessageA(hWnd,0x150,param_3,0);
  if (param_3 == 0) {
    if (LVar3 != 0) {
      return;
    }
  }
  else {
    if (LVar3 == 0) {
      return;
    }
    if (1 < (int)param_3) {
      SendMessageA(hWnd,0x151,param_3,0);
      SendMessageA(hWnd,0x144,param_3,0);
      FUN_004daed0(hWnd,1,LVar3);
      piVar4 = (int *)FUN_005b8760(uVar1);
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
      if (bVar6) {
        if (*piVar4 < (int)param_3) {
          param_3 = -0x7fffbffb;
        }
        else {
          param_3 = _SfList_MoveRange_16(piVar4,param_3 - 1,0,1);
          if (-1 < (int)param_3) {
            WVar5 = 1;
          }
        }
      }
      else {
        param_3 = -0x7fffbffb;
      }
      if (piVar4 != (int *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 3));
      }
      bVar6 = (int)param_3 < 0;
      param_3 = WVar5;
      if (bVar6) {
        param_3 = 0;
      }
    }
  }
  SendMessageA(hWnd,0x14e,param_3,0);
  FUN_004dc2b0(param_2,hWnd,param_3);
  return;
}


