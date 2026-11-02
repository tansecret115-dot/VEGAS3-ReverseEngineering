/* Module: pngu3266.dll
   Function: Create
   Address: 605f55e1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNColorMap::Create(int,unsigned char const *,unsigned char const
   *,unsigned char const *) */

int __thiscall
CPNColorMap::Create(CPNColorMap *this,int param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  LOGPALETTE *plpal;
  int iVar1;
  BYTE *pBVar2;
  HPALETTE pHVar3;
  uchar *puVar4;
  int iVar5;
  
                    /* 0x55e1  896  ?Create@CPNColorMap@@QAEHHPBE00@Z */
  puVar4 = param_3;
  if ((*(int *)(this + 8) == 0) &&
     (plpal = LocalAlloc(0,(param_1 & 0xffffU) * 4 + 8), plpal != (LOGPALETTE *)0x0)) {
    plpal->palVersion = 0x300;
    plpal->palNumEntries = (WORD)param_1;
    if (0 < param_1) {
      iVar1 = (int)param_2 - (int)param_3;
      pBVar2 = &plpal->palPalEntry[0].peGreen;
      iVar5 = (int)param_4 - (int)param_3;
      param_3 = (uchar *)param_1;
      do {
        ((PALETTEENTRY *)(pBVar2 + -1))->peRed = puVar4[iVar1];
        *pBVar2 = *puVar4;
        pBVar2[1] = puVar4[iVar5];
        pBVar2[2] = '\0';
        puVar4 = puVar4 + 1;
        pBVar2 = pBVar2 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != (uchar *)0x0);
    }
    pHVar3 = CreatePalette(plpal);
    *(HPALETTE *)(this + 8) = pHVar3;
    LocalFree(plpal);
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


