/* Module: vidcap30.exe
   Function: FUN_004161e0
   Address: 004161e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004161e0(HWND param_1,LONG param_2)

{
  HWND hWnd;
  int iVar1;
  int *piVar2;
  int local_1c;
  int local_18 [4];
  int local_8;
  int local_4;
  
  local_18[0] = 0xe54;
  local_18[1] = 0xe55;
  piVar2 = local_18;
  local_1c = 2;
  do {
    iVar1 = *piVar2;
    hWnd = GetDlgItem(param_1,iVar1);
    SendMessageA(hWnd,0x60d,1,100);
    FUN_00416380(param_1,iVar1,0);
    piVar2 = piVar2 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  iVar1 = _SfGetMetricBinary_16(DAT_005ba29c,0x475,local_18 + 2,0x10);
  if (iVar1 == 0x10) {
    SetWindowPos(param_1,(HWND)0xffffffff,local_18[2],local_18[3],local_8 - local_18[2],
                 local_4 - local_18[3],4);
  }
  else {
    _SfWndCenter_16(param_1,0,0,0x8001);
  }
  SetWindowLongA(param_1,8,param_2);
  FUN_004041c0(param_1);
  BringWindowToTop(param_1);
  UpdateWindow(param_1);
  return;
}


