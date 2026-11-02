/* Module: sfpaplug.dll
   Function: FUN_00438d20
   Address: 00438d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00438d20(int *param_1)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  LPCWSTR unaff_EBP;
  uchar *puVar8;
  uchar *puVar9;
  char *pcVar10;
  char *pcVar11;
  uchar *unaff_retaddr;
  IID IStack_a2c;
  CHAR aCStack_a1c [255];
  undefined1 uStack_91d;
  uchar auStack_91c [1023];
  undefined1 uStack_51d;
  CHAR aCStack_51c [260];
  uchar auStack_418 [260];
  uchar auStack_314 [260];
  char acStack_210 [260];
  char acStack_10c [268];
  
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  (**(code **)(*param_1 + 0x1c))();
  StringFromCLSID(&IStack_a2c,(LPOLESTR *)&stack0xfffff5cc);
  iVar3 = FUN_00438fc0((LPSTR)auStack_91c,0x400);
  if (iVar3 == 0) {
    DVar4 = GetFileAttributesA((LPCSTR)auStack_91c);
    if ((DVar4 != 0xffffffff) && ((DVar4 & 0x10) != 0)) goto LAB_00438e63;
    iVar3 = 1;
  }
  DVar4 = GetModuleFileNameA((HMODULE)0x0,aCStack_51c,0x104);
  if (DVar4 == 0) {
    if (&stack0x00000000 != (undefined1 *)0x91c) {
      lstrcpynA((LPSTR)auStack_91c,"C:\\Program Files\\Sonic Foundry\\FileIO Templates",0x400);
      uStack_51d = 0;
    }
  }
  else {
    _splitpath(aCStack_51c,(char *)auStack_418,(char *)auStack_314,acStack_10c,acStack_210);
    _mbscpy(auStack_91c,auStack_418);
    _mbscat(auStack_91c,auStack_314);
    _mbscat(auStack_91c,(uchar *)"File Templates\\");
    FUN_004142c0(auStack_91c,(LPSECURITY_ATTRIBUTES)0x0);
  }
  FUN_00438f20(auStack_91c);
LAB_00438e63:
  if ((unaff_EBP == (LPCWSTR)0x0) || (*unaff_EBP != L'\0')) {
    WideCharToMultiByte(0,0,unaff_EBP,-1,aCStack_a1c,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0xa1c) {
    aCStack_a1c[0] = '\0';
  }
  uVar5 = 0xffffffff;
  uStack_91d = 0;
  puVar8 = auStack_91c;
  do {
    puVar9 = puVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    puVar9 = puVar8 + 1;
    uVar1 = *puVar8;
    puVar8 = puVar9;
  } while (uVar1 != '\0');
  uVar5 = ~uVar5;
  puVar8 = puVar9 + -uVar5;
  puVar9 = unaff_retaddr;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 4;
    puVar9 = puVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = aCStack_a1c;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  do {
    puVar8 = unaff_retaddr;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    puVar8 = unaff_retaddr + 1;
    uVar1 = *unaff_retaddr;
    unaff_retaddr = puVar8;
  } while (uVar1 != '\0');
  puVar9 = (uchar *)(pcVar11 + -uVar5);
  puVar8 = puVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  CoTaskMemFree(unaff_EBP);
  return iVar3;
}


