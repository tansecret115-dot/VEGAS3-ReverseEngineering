/* Module: vidcap30.exe
   Function: FUN_00457dd0
   Address: 00457dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457dd0(HWND param_1,undefined4 param_2)

{
  HDC hdc;
  HWND hWnd;
  HGDIOBJ h;
  DWORD dw;
  HBITMAP h_00;
  int *piVar1;
  HDC hdc_00;
  tagRECT *lpRect;
  tagRECT local_70;
  tagRECT local_60;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  tagPAINTSTRUCT local_40;
  
  hdc = BeginPaint(param_1,&local_40);
  GetClientRect(param_1,&local_70);
  piVar1 = &DAT_005b601c;
  do {
    lpRect = &local_60;
    hWnd = GetDlgItem(param_1,*piVar1);
    GetWindowRect(hWnd,lpRect);
    MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_60,2);
    ExcludeClipRect(hdc,local_60.left,local_60.top,local_60.right,local_60.bottom);
    piVar1 = piVar1 + 1;
  } while (piVar1 < &DAT_005b6038);
  if (DAT_005bb7b4 == 0) {
    hdc_00 = CreateCompatibleDC(hdc);
  }
  else {
    hdc_00 = (HDC)0x0;
  }
  if (DAT_005bb7b4 == 0) {
    h_00 = CreateCompatibleBitmap(hdc,local_70.right - local_70.left,local_70.bottom - local_70.top)
    ;
  }
  else {
    h_00 = (HBITMAP)0x0;
  }
  if ((hdc_00 == (HDC)0x0) || (h_00 == (HBITMAP)0x0)) {
    dw = GdiSetBatchLimit(1);
    FUN_00458bb0(param_1,hdc,&local_70,param_2);
    GdiSetBatchLimit(dw);
  }
  else {
    local_50 = 0;
    local_4c = 0;
    local_48 = local_70.right - local_70.left;
    local_44 = local_70.bottom - local_70.top;
    h = SelectObject(hdc_00,h_00);
    FUN_00458bb0(param_1,hdc_00,&local_50,param_2);
    BitBlt(hdc,local_70.left,local_70.top,local_70.right - local_70.left,
           local_70.bottom - local_70.top,hdc_00,0,0,0xcc0020);
    h_00 = SelectObject(hdc_00,h);
  }
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc_00 != (HDC)0x0) {
    DeleteDC(hdc_00);
  }
  EndPaint(param_1,&local_40);
  return;
}


