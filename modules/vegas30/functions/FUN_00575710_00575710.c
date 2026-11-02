/* Module: vegas30.exe
   Function: FUN_00575710
   Address: 00575710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00575710(void)

{
  HWND hWnd;
  HIMAGELIST himl;
  HIMAGELIST himl_00;
  HGDIOBJ h;
  HDC hdc;
  HDC hdc_00;
  HDC hdc_01;
  HDC hdc_02;
  HDC hdc_03;
  HBRUSH hbr;
  HBITMAP hbmImage;
  HBITMAP hbmImage_00;
  int iVar1;
  undefined4 uVar2;
  CHAR *pCVar3;
  undefined4 uVar4;
  HANDLE pvStack_a1c;
  undefined4 local_9f8;
  int iStack_9f4;
  undefined4 local_9f0;
  int iStack_9ec;
  undefined4 local_9e8;
  HIMAGELIST local_9e4;
  undefined4 local_9e0;
  HIMAGELIST local_9dc;
  tagRECT tStack_9d8;
  undefined1 auStack_9c8 [4];
  int iStack_9c4;
  int iStack_9c0;
  CHAR aCStack_9b0 [259];
  undefined1 uStack_8ad;
  CHAR aCStack_8ac [259];
  undefined1 uStack_7a9;
  WCHAR local_7a8 [260];
  WCHAR local_5a0 [260];
  undefined1 local_398 [400];
  undefined1 local_208 [520];
  
  hWnd = DAT_00647628;
  local_9e4 = (HIMAGELIST)SendMessageA(DAT_00647628,0x431,0,0);
  local_9dc = (HIMAGELIST)SendMessageA(hWnd,0x435,0,0);
  local_9f8 = 200;
  local_9e0 = 0x104;
  local_9f0 = 0x104;
  local_9e8 = 0x104;
  if (DAT_0064b570 != (int *)0x0) {
    (**(code **)(*DAT_0064b570 + 0x18))
              (DAT_0064b570,local_398,&local_9f8,local_5a0,&local_9e0,local_7a8,&local_9f0,local_208
               ,&local_9e8,0,0);
    if (DAT_0064b570 != (int *)0x0) {
      if ((&stack0x00000000 == (undefined1 *)0x5a0) || (local_5a0[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_5a0,-1,aCStack_8ac,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x8ac) {
        aCStack_8ac[0] = '\0';
      }
      uStack_7a9 = 0;
      if ((&stack0x00000000 == (undefined1 *)0x7a8) || (local_7a8[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_7a8,-1,aCStack_9b0,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x9b0) {
        aCStack_9b0[0] = '\0';
      }
      uStack_8ad = 0;
      pvStack_a1c = (HANDLE)_SfLoadImage_24(0,aCStack_8ac,0,0,0,0x2010);
      uVar4 = 0x2010;
      pCVar3 = aCStack_9b0;
      uVar2 = 0;
      goto LAB_005758c3;
    }
  }
  pvStack_a1c = (HANDLE)_SfLoadImage_24(DAT_00647204,0x3c9,0,0,0,0x2000);
  uVar4 = 0x2000;
  pCVar3 = (CHAR *)0x3c9;
  uVar2 = DAT_00647204;
LAB_005758c3:
  h = (HGDIOBJ)_SfLoadImage_24(uVar2,pCVar3,0,0,0,uVar4);
  hdc = GetDC(hWnd);
  hdc_00 = CreateCompatibleDC(hdc);
  hdc_01 = CreateCompatibleDC(hdc);
  hdc_02 = CreateCompatibleDC(hdc);
  hdc_03 = CreateCompatibleDC(hdc);
  hbr = CreateSolidBrush(0xff00ff);
  GetObjectA(pvStack_a1c,0x18,auStack_9c8);
  SelectObject(hdc_00,pvStack_a1c);
  SelectObject(hdc_01,h);
  SetRect(&tStack_9d8,0,0,0x12,0x11);
  hbmImage = CreateCompatibleBitmap(hdc,0x12,0x11);
  SelectObject(hdc_02,hbmImage);
  FillRect(hdc_02,&tStack_9d8,hbr);
  hbmImage_00 = CreateCompatibleBitmap(hdc,0x12,0x11);
  SelectObject(hdc_03,hbmImage_00);
  FillRect(hdc_03,&tStack_9d8,hbr);
  iStack_9f4 = (0x11 - iStack_9c0) / 2;
  iStack_9ec = (0x12 - iStack_9c4) / 2;
  BitBlt(hdc_02,iStack_9ec,iStack_9f4,iStack_9c4,iStack_9c0,hdc_00,0,0,0xcc0020);
  BitBlt(hdc_03,iStack_9ec,iStack_9f4,iStack_9c4,iStack_9c0,hdc_01,0,0,0xcc0020);
  ReleaseDC(hWnd,hdc);
  DeleteDC(hdc_00);
  DeleteDC(hdc_01);
  DeleteDC(hdc_02);
  DeleteDC(hdc_03);
  himl = local_9e4;
  iVar1 = ImageList_GetImageCount(local_9e4);
  ImageList_Remove(himl,iVar1 + -1);
  himl_00 = local_9dc;
  ImageList_Remove(local_9dc,iVar1 + -1);
  ImageList_AddMasked(himl,hbmImage,0xff00ff);
  ImageList_AddMasked(himl_00,hbmImage_00,0xff00ff);
  SendMessageA(hWnd,0x430,0,(LPARAM)himl);
  SendMessageA(hWnd,0x434,0,(LPARAM)himl_00);
  FUN_0043b820();
  DeleteObject(hbr);
  DeleteObject(pvStack_a1c);
  DeleteObject(h);
  DeleteObject(hbmImage);
  DeleteObject(hbmImage_00);
  return 0;
}


