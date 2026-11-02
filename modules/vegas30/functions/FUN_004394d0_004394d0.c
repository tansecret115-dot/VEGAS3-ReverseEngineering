/* Module: vegas30.exe
   Function: FUN_004394d0
   Address: 004394d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004394d0(int param_1)

{
  HWND hWnd;
  HDC hdc;
  BOOL BVar1;
  HGDIOBJ h;
  HDC hdc_00;
  HBITMAP h_00;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  tagPAINTSTRUCT local_40;
  
  hWnd = *(HWND *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 0x90);
  hdc_00 = (HDC)0x0;
  h_00 = (HBITMAP)0x0;
  local_4c = *(undefined4 *)(param_1 + 0x94);
  local_48 = *(int *)(param_1 + 0x98);
  local_44 = *(int *)(param_1 + 0x9c);
  hdc = BeginPaint(hWnd,&local_40);
  BVar1 = RectVisible(hdc,&local_40.rcPaint);
  if (BVar1 == 0) goto LAB_004395e5;
  if (DAT_006487c4 == 0) {
LAB_004395af:
    FUN_00439000(param_1,hdc,&local_50);
  }
  else {
    hdc_00 = *(HDC *)(param_1 + 0x84);
    h_00 = *(HBITMAP *)(param_1 + 0x88);
    if (hdc_00 == (HDC)0x0) {
      hdc_00 = CreateCompatibleDC(hdc);
    }
    if (h_00 == (HBITMAP)0x0) {
      h_00 = CreateCompatibleBitmap(hdc,local_48,local_44);
    }
    if ((hdc_00 == (HDC)0x0) || (h_00 == (HBITMAP)0x0)) goto LAB_004395af;
    h = SelectObject(hdc_00,h_00);
    FUN_00439000(param_1,hdc_00,&local_50);
    BitBlt(hdc,0,0,local_48,local_44,hdc_00,0,0,0xcc0020);
    h_00 = SelectObject(hdc_00,h);
  }
  if ((h_00 != (HBITMAP)0x0) && (*(int *)(param_1 + 0x88) == 0)) {
    DeleteObject(h_00);
  }
  if ((hdc_00 != (HDC)0x0) && (*(int *)(param_1 + 0x84) == 0)) {
    DeleteDC(hdc_00);
  }
LAB_004395e5:
  EndPaint(hWnd,&local_40);
  return;
}


