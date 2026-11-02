/* Module: vidcap30.exe
   Function: FUN_0048c250
   Address: 0048c250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048c250(LPCWSTR param_1)

{
  char cVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  PHKEY unaff_retaddr;
  LPCWSTR pWStack_520;
  uchar *puStack_51c;
  IID IStack_518;
  CHAR aCStack_508 [255];
  undefined1 uStack_409;
  char acStack_408 [1032];
  
  if (param_1 == (LPCWSTR)0x0) {
    return -0x7fffbffd;
  }
  puStack_51c = IStack_518.Data4;
  pWStack_520 = param_1;
  puStack_51c = (uchar *)(**(code **)(*(int *)param_1 + 0x1c))();
  puVar2 = puStack_51c;
  if (-1 < (int)puStack_51c) {
    FUN_0048c3a0(acStack_408,0x400);
    _SfAddSlashToPathName_8(acStack_408,0x400);
    StringFromCLSID(&IStack_518,&pWStack_520);
    if ((pWStack_520 == (LPCWSTR)0x0) || (*pWStack_520 != L'\0')) {
      WideCharToMultiByte(0,0,pWStack_520,-1,aCStack_508,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x508) {
      aCStack_508[0] = '\0';
    }
    uVar3 = 0xffffffff;
    uStack_409 = 0;
    pcVar6 = aCStack_508;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = acStack_408;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    CoTaskMemFree(pWStack_520);
    if (param_1 == (LPCWSTR)0x0) {
      iVar4 = RegOpenKeyExA((HKEY)0x80000001,acStack_408,0,0x2001f,unaff_retaddr);
    }
    else {
      iVar4 = RegCreateKeyA((HKEY)0x80000001,acStack_408,unaff_retaddr);
    }
    puVar2 = (uchar *)-0x7ffb1ff6;
    if (iVar4 == 0) {
      puVar2 = puStack_51c;
    }
  }
  return (int)puVar2;
}


