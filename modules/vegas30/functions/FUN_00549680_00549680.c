/* Module: vegas30.exe
   Function: FUN_00549680
   Address: 00549680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00549680(int param_1,int param_2)

{
  int i;
  int iVar1;
  LPCSTR pCVar2;
  DWORD_PTR DVar3;
  HDC hdc;
  HDC hdc_00;
  int y;
  HBITMAP h;
  HGDIOBJ h_00;
  HIMAGELIST p_Var4;
  SHFILEINFOA *pSVar5;
  DWORD DVar6;
  UINT UVar7;
  UINT UVar8;
  undefined4 local_168;
  SHFILEINFOA local_160;
  
  i = *(int *)(param_2 + 0x790);
  iVar1 = FUN_005498b0(param_1,i);
  if (iVar1 == -1) {
    UVar8 = 0x4011;
    pSVar5 = &local_160;
    for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar5->hIcon = (HICON)0x0;
      pSVar5 = (SHFILEINFOA *)&pSVar5->iIcon;
    }
    pSVar5 = &local_160;
    UVar7 = 0x160;
    DVar6 = 0x80;
    local_168 = 0x80004005;
    pCVar2 = (LPCSTR)FUN_005f2d10();
    DVar3 = SHGetFileInfoA(pCVar2,DVar6,pSVar5,UVar7,UVar8);
    *(DWORD_PTR *)(param_1 + 0xc4) = DVar3;
    if (DVar3 != 0) {
      hdc = GetDC((HWND)0x0);
      if (hdc != (HDC)0x0) {
        hdc_00 = CreateCompatibleDC(hdc);
        if (hdc_00 != (HDC)0x0) {
          iVar1 = GetSystemMetrics(0x31);
          y = GetSystemMetrics(0x32);
          if (*(int *)(param_1 + 0xd0) < 0x7f) {
            h = CreateCompatibleBitmap(hdc,iVar1,y * 3);
            if (h != (HBITMAP)0x0) {
              h_00 = SelectObject(hdc_00,h);
              ImageList_Draw(*(HIMAGELIST *)(param_1 + 0xc4),i,hdc_00,0,0,0);
              ImageList_Draw(*(HIMAGELIST *)(param_1 + 0xc4),i,hdc_00,0,y,4);
              ImageList_Draw(*(HIMAGELIST *)(param_1 + 0xc4),i,hdc_00,0,y * 2,0);
              SelectObject(hdc_00,h_00);
              local_168 = 0;
              *(HBITMAP *)(param_1 + 0x2d4 + *(int *)(param_1 + 0xd0) * 4) = h;
              *(int *)(param_1 + 0xd4 + *(int *)(param_1 + 0xd0) * 4) = i;
              *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
            }
          }
          DeleteDC(hdc_00);
        }
        ReleaseDC((HWND)0x0,hdc);
      }
    }
    UVar7 = 0x4110;
    pSVar5 = &local_160;
    UVar8 = 0x160;
    DVar6 = 0x80;
    pCVar2 = (LPCSTR)FUN_005f2d10();
    DVar3 = SHGetFileInfoA(pCVar2,DVar6,pSVar5,UVar8,UVar7);
    *(DWORD_PTR *)(param_1 + 200) = DVar3;
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    p_Var4 = ImageList_Create(100,0x3c,4,1,1);
    *(HIMAGELIST *)(param_1 + 0xcc) = p_Var4;
    SendMessageA(*(HWND *)(param_1 + 0x9c),0x1003,1,*(LPARAM *)(param_1 + 0xc4));
    SendMessageA(*(HWND *)(param_1 + 0x9c),0x1003,0,*(LPARAM *)(param_1 + 0xcc));
    return local_168;
  }
  return 0;
}


