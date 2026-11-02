/* Module: rmme3260.dll
   Function: FUN_66244100
   Address: 66244100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66244100(int param_1,HDC param_2,void *param_3,BITMAPINFO *param_4,int *param_5,int *param_6)

{
  ushort uVar1;
  int xSrc;
  int xDest;
  int ySrc;
  int yDest;
  DWORD DVar2;
  LOGPALETTE *plpal;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  DWORD DVar5;
  DWORD h;
  BYTE *pBVar6;
  WORD WVar7;
  uint uVar8;
  uint uVar9;
  DWORD w;
  
  if (*(HPALETTE *)(param_1 + 0x60) == (HPALETTE)0x0) {
    uVar1 = (param_4->bmiHeader).biBitCount;
    if (8 < uVar1) goto LAB_662441ec;
    DVar5 = (param_4->bmiHeader).biSize;
    uVar8 = 1 << ((byte)uVar1 & 0x1f);
    WVar7 = (WORD)uVar8;
    if (WVar7 == 0) goto LAB_662441ec;
    uVar8 = uVar8 & 0xffff;
    plpal = LocalAlloc(0x40,uVar8 * 4 + 8);
    plpal->palNumEntries = WVar7;
    plpal->palVersion = 0x300;
    if (WVar7 != 0) {
      pBVar6 = (BYTE *)((int)param_4->bmiColors + ((ushort)DVar5 - 0x27));
      uVar9 = 0;
      pBVar3 = &plpal->palPalEntry[0].peGreen;
      do {
        if (uVar9 < (param_4->bmiHeader).biClrUsed) {
          ((PALETTEENTRY *)(pBVar3 + -1))->peRed = pBVar6[1];
          *pBVar3 = *pBVar6;
          pBVar3[1] = pBVar6[-1];
        }
        else {
          ((PALETTEENTRY *)(pBVar3 + -1))->peRed = '\0';
          *pBVar3 = '\0';
          pBVar3[1] = '\0';
        }
        pBVar3[2] = '\0';
        uVar9 = uVar9 + 1;
        pBVar6 = pBVar6 + 4;
        pBVar3 = pBVar3 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    pHVar4 = CreatePalette(plpal);
    *(HPALETTE *)(param_1 + 0x60) = pHVar4;
    LocalFree(plpal);
    pHVar4 = SelectPalette(param_2,*(HPALETTE *)(param_1 + 0x60),1);
    *(HPALETTE *)(param_1 + 0x5c) = pHVar4;
  }
  else {
    SelectPalette(param_2,*(HPALETTE *)(param_1 + 0x60),1);
  }
  RealizePalette(param_2);
LAB_662441ec:
  xSrc = *param_6;
  xDest = *param_5;
  DVar5 = param_6[2] - xSrc;
  w = param_5[2] - xDest;
  if (DVar5 == w) {
    ySrc = param_6[1];
    yDest = param_5[1];
    h = param_5[3] - yDest;
    if (param_6[3] - ySrc == h) {
      DVar2 = (param_4->bmiHeader).biCompression;
      if ((DVar2 != 0) && (DVar2 != 3)) {
        if (DAT_6627e54c == (code *)0x0) {
          return 0;
        }
        (*DAT_6627e54c)(*(undefined4 *)(param_1 + 0x6c),param_2,xDest,yDest,w,h,param_4,param_3,xSrc
                        ,ySrc,DVar5,param_6[3] - ySrc,0);
        return 0;
      }
      SetDIBitsToDevice(param_2,xDest,yDest,w,h,xSrc,ySrc,0,h,param_3,param_4,0);
      return 0;
    }
  }
  StretchDIBits(param_2,xDest,param_5[1],w,param_5[3] - param_5[1],xSrc,param_6[1],DVar5,
                param_6[3] - param_6[1],param_3,param_4,0,0xcc0020);
  return 0;
}


