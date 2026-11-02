/* Module: vegas30.exe
   Function: FUN_005e4320
   Address: 005e4320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e4320(LPCWSTR param_1)

{
  char cVar1;
  uchar uVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uchar *puVar9;
  PHKEY unaff_retaddr;
  LPCWSTR pWStack_520;
  uchar *puStack_51c;
  IID IStack_518;
  CHAR aCStack_508 [255];
  undefined1 uStack_409;
  uchar auStack_408 [1032];
  
  if (param_1 == (LPCWSTR)0x0) {
    return -0x7fffbffd;
  }
  puStack_51c = IStack_518.Data4;
  pWStack_520 = param_1;
  puStack_51c = (uchar *)(**(code **)(*(int *)param_1 + 0x1c))();
  puVar3 = puStack_51c;
  if (-1 < (int)puStack_51c) {
    _mbscpy(auStack_408,"Software\\Sonic Foundry\\Vegas\\2.0\\FileTemplateData");
    _SfAddSlashToPathName_8(auStack_408,0x400);
    StringFromCLSID(&IStack_518,&pWStack_520);
    if ((pWStack_520 == (LPCWSTR)0x0) || (*pWStack_520 != L'\0')) {
      WideCharToMultiByte(0,0,pWStack_520,-1,aCStack_508,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x508) {
      aCStack_508[0] = '\0';
    }
    uVar4 = 0xffffffff;
    uStack_409 = 0;
    pcVar7 = aCStack_508;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    puVar3 = auStack_408;
    do {
      puVar9 = puVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      puVar9 = puVar3 + 1;
      uVar2 = *puVar3;
      puVar3 = puVar9;
    } while (uVar2 != '\0');
    puVar3 = (uchar *)(pcVar8 + -uVar4);
    puVar9 = puVar9 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 4;
      puVar9 = puVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    CoTaskMemFree(pWStack_520);
    if (param_1 == (LPCWSTR)0x0) {
      iVar5 = RegOpenKeyExA((HKEY)&DAT_80000001,(LPCSTR)auStack_408,0,0x2001f,unaff_retaddr);
    }
    else {
      iVar5 = RegCreateKeyA((HKEY)&DAT_80000001,(LPCSTR)auStack_408,unaff_retaddr);
    }
    puVar3 = (uchar *)-0x7ffb1ff6;
    if (iVar5 == 0) {
      puVar3 = puStack_51c;
    }
  }
  return (int)puVar3;
}


