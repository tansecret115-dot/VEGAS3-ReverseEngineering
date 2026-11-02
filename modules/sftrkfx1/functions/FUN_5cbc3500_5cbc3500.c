/* Module: sftrkfx1.dll
   Function: FUN_5cbc3500
   Address: 5cbc3500
   Source: Ghidra pseudocode (Stage 10 batch) */


HPALETTE FUN_5cbc3500(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LOGPALETTE *plpal;
  undefined1 *puVar3;
  BYTE *pBVar4;
  HPALETTE pHVar5;
  uint uVar6;
  uint uVar7;
  
  pHVar5 = (HPALETTE)0x0;
  if ((param_1[8] == 0) && (*(ushort *)((int)param_1 + 0xe) < 9)) {
    uVar6 = 1 << ((byte)*(ushort *)((int)param_1 + 0xe) & 0x1f);
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 8);
  }
  uVar7 = uVar6 & 0xffff;
  if (uVar7 != 0) {
    pvVar2 = GlobalAlloc(0x42,uVar7 * 4 + 4);
    plpal = GlobalLock(pvVar2);
    if (plpal != (LOGPALETTE *)0x0) {
      plpal->palVersion = 0x300;
      plpal->palNumEntries = (WORD)uVar6;
      iVar1 = *param_1;
      if (uVar7 != 0) {
        pBVar4 = &plpal->palPalEntry[0].peFlags;
        puVar3 = (undefined1 *)(iVar1 + (int)param_1 + 1);
        do {
          ((PALETTEENTRY *)(pBVar4 + -3))->peRed = puVar3[1];
          (puVar3 + 4)[(int)plpal - (iVar1 + (int)param_1)] = *puVar3;
          pBVar4[-1] = puVar3[-1];
          *pBVar4 = '\x01';
          pBVar4 = pBVar4 + 4;
          uVar7 = uVar7 - 1;
          puVar3 = puVar3 + 4;
        } while (uVar7 != 0);
      }
      pHVar5 = CreatePalette(plpal);
      pvVar2 = GlobalHandle(plpal);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(plpal);
      GlobalFree(pvVar2);
    }
  }
  return pHVar5;
}


