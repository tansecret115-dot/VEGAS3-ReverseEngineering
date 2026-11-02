/* Module: vfplugs.dll
   Function: FUN_004778b0
   Address: 004778b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004778b0(byte *param_1,LPSTR param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  uchar uVar3;
  byte bVar4;
  LPSTR lpString1;
  int iVar5;
  HGLOBAL pvVar6;
  uchar *_Dest;
  uint uVar7;
  uint uVar8;
  byte *_Source;
  byte *pbVar9;
  uchar *puVar10;
  SIZE_T dwBytes;
  byte **ppbVar11;
  byte **ppbVar12;
  uchar *puVar13;
  
  _Source = param_1;
  dwBytes = 1;
  bVar4 = *param_1;
  pbVar9 = param_1;
  while (bVar4 != 0) {
    iVar5 = _ismbcalnum((int)(char)*pbVar9);
    if (iVar5 == 0) {
      dwBytes = dwBytes + 4;
    }
    else {
      dwBytes = dwBytes + 1;
    }
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar4 = *pbVar1;
  }
  pvVar6 = GlobalAlloc(0x42,dwBytes);
  _Dest = GlobalLock(pvVar6);
  if (_Dest == (uchar *)0x0) {
    *param_2 = '\0';
    return;
  }
  bVar4 = *_Source;
  lpString1 = param_2;
  iVar5 = param_3;
  do {
    param_2 = lpString1;
    param_3 = iVar5;
    if (bVar4 == 0) {
      lstrcpynA(lpString1,(LPCSTR)_Dest,iVar5);
      lpString1[iVar5 + -1] = '\0';
      pvVar6 = GlobalHandle(_Dest);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(_Dest);
      GlobalFree(pvVar6);
      return;
    }
    iVar5 = _ismbcalnum((int)(char)*_Source);
    if (iVar5 == 0) {
      wsprintfA((LPSTR)&param_1,"%%%2.2X",(uint)*_Source);
      uVar7 = 0xffffffff;
      ppbVar11 = &param_1;
      do {
        ppbVar12 = ppbVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        ppbVar12 = (byte **)((int)ppbVar11 + 1);
        cVar2 = *(char *)ppbVar11;
        ppbVar11 = ppbVar12;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      iVar5 = -1;
      puVar10 = _Dest;
      do {
        puVar13 = puVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        puVar13 = puVar10 + 1;
        uVar3 = *puVar10;
        puVar10 = puVar13;
      } while (uVar3 != '\0');
      puVar10 = (uchar *)((int)ppbVar12 - uVar7);
      puVar13 = puVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)puVar13 = *(undefined4 *)puVar10;
        puVar10 = puVar10 + 4;
        puVar13 = puVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    else {
      _mbsnbcat(_Dest,_Source,1);
    }
    bVar4 = _Source[1];
    _Source = _Source + 1;
    lpString1 = param_2;
    iVar5 = param_3;
  } while( true );
}


