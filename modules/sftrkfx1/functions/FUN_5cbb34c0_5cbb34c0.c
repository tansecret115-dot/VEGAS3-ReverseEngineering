/* Module: sftrkfx1.dll
   Function: FUN_5cbb34c0
   Address: 5cbb34c0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND __fastcall FUN_5cbb34c0(int param_1)

{
  undefined4 *lParam;
  HWND hWnd;
  HWND hWnd_00;
  undefined1 local_20 [12];
  int local_14;
  undefined1 local_10 [16];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x14),0xfaa);
  GetWindowRect(hWnd,(LPRECT)local_20);
  ScreenToClient(*(HWND *)(param_1 + 0x14),(LPPOINT)local_20);
  ScreenToClient(*(HWND *)(param_1 + 0x14),(LPPOINT)(local_20 + 8));
  lParam = (undefined4 *)(param_1 + 0x68);
  *(int *)(param_1 + 0x78) = (local_20._8_4_ - local_20._0_4_) * 0x4000;
  *lParam = 0;
  *(int *)(param_1 + 0x6c) = param_1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x41700000;
  *(undefined4 *)(param_1 + 0x80) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x7c) = 0xc1700000;
  *(undefined4 *)(param_1 + 0x84) = 0x40800000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined4 *)(param_1 + 0x94) = 4;
  hWnd_00 = CreateWindowExA(0x204,"TrackEQ_Wnd_Class","",0x50800000,0,0,0,0,
                            *(HWND *)(param_1 + 0x14),(HMENU)0xfaa,DAT_5cc16c98,(LPVOID)0x0);
  if (hWnd_00 == (HWND)0x0) {
    return (HWND)0x0;
  }
  SetWindowPos(hWnd_00,hWnd,local_20._0_4_,local_20._4_4_,local_20._8_4_ - local_20._0_4_,
               local_14 - local_20._4_4_,0);
  DestroyWindow(hWnd);
  SendMessageA(hWnd_00,0x601,1,(LPARAM)lParam);
  SendMessageA(hWnd_00,0x604,0x5cbb3630,param_1);
  SendMessageA(hWnd_00,0x605,0,(LPARAM)local_10);
  FUN_5cbb0960((double *)(param_1 + 0x38),20.0,0,0x40d38800,*(int *)(param_1 + 0x70),
               *(int *)(param_1 + 0x78));
  *lParam = 0xa02b;
  FUN_5cbb0de0(*(int **)(param_1 + 0x2c),(int)lParam);
  return hWnd_00;
}


