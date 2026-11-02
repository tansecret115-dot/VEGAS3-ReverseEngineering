/* Module: vegas30k.dll
   Function: _SfLoadUIBitmapEx@32
   Address: 010c2fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


HBITMAP _SfLoadUIBitmapEx_32
                  (undefined4 param_1,SIZE_T param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8)

{
  HGLOBAL pvVar1;
  DWORD *pDVar2;
  HGLOBAL hMem;
  HDC hdc;
  HBITMAP pHVar3;
  uint uVar4;
  BITMAPINFOHEADER *pbmi;
  uint *puVar5;
  BITMAPINFOHEADER *pBVar6;
  
                    /* 0xc2fc0  1098  _SfLoadUIBitmapEx@32 */
  pvVar1 = (HGLOBAL)_SfLoadResourceCustom_16(param_1,param_2,2,&param_2);
  if (pvVar1 == (HGLOBAL)0x0) {
    return (HBITMAP)0x0;
  }
  pDVar2 = LockResource(pvVar1);
  if (pDVar2 == (DWORD *)0x0) {
    return (HBITMAP)0x0;
  }
  if (*pDVar2 != 0x28) {
    return (HBITMAP)0x0;
  }
  pbmi = (BITMAPINFOHEADER *)0x0;
  if (param_2 != 0) {
    hMem = GlobalAlloc(2,param_2);
    pbmi = GlobalLock(hMem);
    if (pbmi != (BITMAPINFOHEADER *)0x0) {
      pBVar6 = pbmi;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pBVar6->biSize = *pDVar2;
        pDVar2 = pDVar2 + 1;
        pBVar6 = (BITMAPINFOHEADER *)&pBVar6->biWidth;
      }
      for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)&pBVar6->biSize = (char)*pDVar2;
        pDVar2 = (DWORD *)((int)pDVar2 + 1);
        pBVar6 = (BITMAPINFOHEADER *)((int)&pBVar6->biSize + 1);
      }
    }
  }
  FreeResource(pvVar1);
  if (pbmi == (BITMAPINFOHEADER *)0x0) {
    return (HBITMAP)0x0;
  }
  puVar5 = (uint *)((int)&pbmi->biSize + pbmi->biSize);
  *puVar5 = (uint)CONCAT11((char)param_3,(char)(param_3 >> 8)) << 8 | param_3 >> 0x10 & 0xff;
  puVar5[7] = (uint)CONCAT11((char)param_4,(char)(param_4 >> 8)) << 8 | param_4 >> 0x10 & 0xff;
  puVar5[8] = (uint)CONCAT11((char)param_5,(char)(param_5 >> 8)) << 8 | param_5 >> 0x10 & 0xff;
  puVar5[0xf] = (uint)CONCAT11((char)param_6,(char)(param_6 >> 8)) << 8 | param_6 >> 0x10 & 0xff;
  puVar5[0xb] = (uint)CONCAT11((char)param_7,(char)(param_7 >> 8)) << 8 | param_7 >> 0x10 & 0xff;
  puVar5[10] = (uint)CONCAT11((char)param_8,(char)(param_8 >> 8)) << 8 | param_8 >> 0x10 & 0xff;
  hdc = GetDC((HWND)0x0);
  pHVar3 = CreateDIBitmap(hdc,pbmi,4,puVar5 + 0x10,(BITMAPINFO *)pbmi,0);
  ReleaseDC((HWND)0x0,hdc);
  pvVar1 = GlobalHandle(pbmi);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pbmi);
  GlobalFree(pvVar1);
  return pHVar3;
}


