/* Module: vegas30k.dll
   Function: FUN_010af340
   Address: 010af340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010af340(int param_1,int param_2)

{
  uint uVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  HBITMAP pHVar2;
  HDC hdc_00;
  HGDIOBJ h_01;
  int iVar3;
  HIMAGELIST himl;
  int iVar4;
  HWND hWnd;
  tagRECT local_10;
  
  if (((*(uint *)(param_1 + 4) & 0x2000) != 0) ||
     (h = *(HBITMAP *)(param_1 + 0x294), h == (HBITMAP)0x0)) {
    h = CreateBitmap(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48),
                     *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c),1,1,(void *)0x0);
  }
  hdc = DAT_01206448;
  h_00 = SelectObject(DAT_01206448,h);
  pHVar2 = CreateBitmap(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48),
                        *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c),1,1,(void *)0x0);
  hdc_00 = CreateCompatibleDC((HDC)0x0);
  h_01 = SelectObject(hdc_00,pHVar2);
  PatBlt(hdc_00,0,0,*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48),
         *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c),0xff0062);
  if (*(int *)(param_1 + 0x18c) == -1) {
    local_10.left = *(int *)(param_1 + 0x118);
    local_10.top = *(int *)(param_1 + 0x11c);
    local_10.right = *(LONG *)(param_1 + 0x120);
    local_10.bottom = *(LONG *)(param_1 + 0x124);
    OffsetRect(&local_10,-*(int *)(param_1 + 0x48),-*(int *)(param_1 + 0x4c));
    iVar4 = *(int *)(param_1 + 0x158);
    himl = *(HIMAGELIST *)(param_1 + 0xfc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18c) * 0x20;
    iVar4 = iVar3 + 0x19c + param_1;
    local_10.left = *(int *)(iVar3 + 0x19c + param_1);
    local_10.top = *(int *)(iVar4 + 4);
    local_10.right = *(LONG *)(iVar4 + 8);
    local_10.bottom = *(LONG *)(iVar4 + 0xc);
    OffsetRect(&local_10,-*(int *)(param_1 + 0x48),-*(int *)(param_1 + 0x4c));
    iVar4 = *(int *)(*(int *)(param_1 + 0x18c) * 0x20 + 0x1b0 + param_1);
    himl = *(HIMAGELIST *)(param_1 + 0xfc);
  }
  ImageList_Draw(himl,iVar4,hdc_00,local_10.left,local_10.top,0x10);
  BitBlt(hdc,0,0,*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48),
         *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c),hdc_00,0,0,0x330008);
  SelectObject(hdc_00,h_01);
  DeleteObject(pHVar2);
  DeleteDC(hdc_00);
  SelectObject(hdc,h_00);
  uVar1 = *(uint *)(param_1 + 4);
  if (((uVar1 & 0x2000) == 0) && (*(HBITMAP *)(param_1 + 0x294) != (HBITMAP)0x0)) {
    if ((param_2 == 0) || ((uVar1 & 2) == 0)) goto LAB_010af54c;
    hWnd = *(HWND *)(param_1 + 0x3c);
    pHVar2 = *(HBITMAP *)(param_1 + 0x294);
  }
  else {
    if ((uVar1 & 2) == 0) goto LAB_010af54c;
    hWnd = *(HWND *)(param_1 + 0x3c);
    pHVar2 = h;
  }
  CreateCaret(hWnd,pHVar2,0,0);
LAB_010af54c:
  pHVar2 = *(HBITMAP *)(param_1 + 0x294);
  if ((pHVar2 != (HBITMAP)0x0) && (pHVar2 != h)) {
    DeleteObject(pHVar2);
  }
  *(HBITMAP *)(param_1 + 0x294) = h;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 & 0xffffdfff;
  if ((uVar1 & 2) != 0) {
    SetCaretPos(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
  }
  return;
}


