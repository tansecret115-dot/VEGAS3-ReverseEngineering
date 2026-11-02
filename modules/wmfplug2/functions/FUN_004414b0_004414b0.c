/* Module: wmfplug2.dll
   Function: FUN_004414b0
   Address: 004414b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004414b0(LPCWSTR param_1)

{
  char cVar1;
  BYTE BVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  BYTE *pBVar7;
  char *pcVar8;
  char *pcVar9;
  BYTE *pBVar10;
  PHKEY unaff_retaddr;
  LPCWSTR pWStack_520;
  uchar *puStack_51c;
  IID IStack_518;
  CHAR aCStack_508 [255];
  undefined1 uStack_409;
  BYTE aBStack_408 [1032];
  
  if (param_1 == (LPCWSTR)0x0) {
    return -0x7fffbffd;
  }
  puStack_51c = IStack_518.Data4;
  pWStack_520 = param_1;
  puStack_51c = (uchar *)(**(code **)(*(int *)param_1 + 0x1c))();
  puVar3 = puStack_51c;
  if (-1 < (int)puStack_51c) {
    FUN_00441600((LPSTR)aBStack_408,0x400);
    FUN_0042f550(aBStack_408,0x400);
    StringFromCLSID(&IStack_518,&pWStack_520);
    if ((pWStack_520 == (LPCWSTR)0x0) || (*pWStack_520 != L'\0')) {
      WideCharToMultiByte(0,0,pWStack_520,-1,aCStack_508,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x508) {
      aCStack_508[0] = '\0';
    }
    uVar4 = 0xffffffff;
    uStack_409 = 0;
    pcVar8 = aCStack_508;
    do {
      pcVar9 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pBVar7 = aBStack_408;
    do {
      pBVar10 = pBVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pBVar10 = pBVar7 + 1;
      BVar2 = *pBVar7;
      pBVar7 = pBVar10;
    } while (BVar2 != '\0');
    pBVar7 = (BYTE *)(pcVar9 + -uVar4);
    pBVar10 = pBVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pBVar10 = *(undefined4 *)pBVar7;
      pBVar7 = pBVar7 + 4;
      pBVar10 = pBVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pBVar10 = *pBVar7;
      pBVar7 = pBVar7 + 1;
      pBVar10 = pBVar10 + 1;
    }
    CoTaskMemFree(pWStack_520);
    if (param_1 == (LPCWSTR)0x0) {
      iVar5 = RegOpenKeyExA((HKEY)0x80000001,(LPCSTR)aBStack_408,0,0x2001f,unaff_retaddr);
    }
    else {
      iVar5 = RegCreateKeyA((HKEY)0x80000001,(LPCSTR)aBStack_408,unaff_retaddr);
    }
    puVar3 = (uchar *)-0x7ffb1ff6;
    if (iVar5 == 0) {
      puVar3 = puStack_51c;
    }
  }
  return (int)puVar3;
}


