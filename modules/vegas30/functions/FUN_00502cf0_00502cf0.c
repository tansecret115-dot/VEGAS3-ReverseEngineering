/* Module: vegas30.exe
   Function: FUN_00502cf0
   Address: 00502cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502cf0(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  HWND pHVar2;
  HWND hWnd;
  int iVar3;
  uint uVar4;
  tagRECT local_528;
  undefined1 local_518 [20];
  CHAR local_504 [260];
  CHAR local_400 [1024];
  
  _SfSetEditCtrlFont_8(param_1,0);
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  *param_3 = param_1;
  iVar1 = DAT_0064b324;
  iVar3 = DAT_0064b320;
  pHVar2 = (HWND)FUN_0043bc10(param_1,5,&DAT_00619d88,2,0);
  hWnd = GetDlgItem(param_1,0x7d3);
  GetWindowRect(hWnd,&local_528);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_528,2);
  local_528.left = local_528.right + 2;
  local_528.right = local_528.right + 0x14 + iVar3 * 2;
  local_528.bottom = local_528.top + 8 + iVar1;
  SetWindowPos(pHVar2,(HWND)0x0,local_528.left,local_528.top,local_528.right - local_528.left,
               local_528.bottom - local_528.top,0x14);
  SetDlgItemTextA(param_1,0x7fb,(LPCSTR)(param_3 + 0x104));
  SetDlgItemTextA(param_1,0x7fd,(LPCSTR)(param_3 + 4));
  pHVar2 = GetDlgItem(param_1,2000);
  SetWindowTextA(pHVar2,(LPCSTR)(param_3 + 0x204));
  uVar4 = 0x4e34;
  do {
    _SfLoadString_16(DAT_00647204,uVar4,local_518,0x14);
    SendMessageA(pHVar2,0x143,0,(LPARAM)local_518);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x4e41);
  if (DAT_0064b584 == 0) {
    iVar3 = _SfList_CreateExZ_32(&DAT_0064b584,4,0x10,0x10,2,0,0,0);
    if (-1 < iVar3) {
      FUN_00502460();
    }
  }
  pHVar2 = GetDlgItem(param_1,0x7d3);
  FUN_00502ca0(pHVar2);
  iVar3 = FUN_00502eb0(param_3,local_400,0x400);
  if (-1 < iVar3) {
    SetWindowTextA(pHVar2,local_400);
  }
  _SfNanoTimeToText_20(local_504,&DAT_0064b110,param_3[2],param_3[3],0);
  SetDlgItemTextA(param_1,0x7fc,local_504);
  return 1;
}


