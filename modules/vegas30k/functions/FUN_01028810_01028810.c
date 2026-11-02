/* Module: vegas30k.dll
   Function: FUN_01028810
   Address: 01028810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01028810(int *param_1,int param_2)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  LPCWSTR unaff_ESI;
  uchar *puVar7;
  uchar *puVar8;
  char *pcVar9;
  uchar *unaff_retaddr;
  char *pcVar10;
  CHAR aCStack_a1c [255];
  undefined1 uStack_91d;
  uchar auStack_91c [1023];
  undefined1 uStack_51d;
  uchar auStack_51c [260];
  CHAR aCStack_418 [260];
  uchar auStack_314 [260];
  char acStack_210 [260];
  char acStack_10c [268];
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  (**(code **)(*param_1 + 0xc))();
  StringFromCLSID((IID *)&stack0xfffff5d4,(LPOLESTR *)&stack0xfffff5d0);
  iVar3 = _SfDSFilter_GetDefaultSavePath_12();
  if (iVar3 == 0) goto LAB_01028960;
  DVar4 = GetModuleFileNameA((HMODULE)0x0,aCStack_418,0x104);
  if (DVar4 == 0) {
    if (param_2 == 0) {
      if (&stack0x00000000 != (undefined1 *)0x91c) {
        pcVar10 = "C:\\Program Files\\DirectShow Presets\\";
        goto LAB_01028945;
      }
    }
    else if (&stack0x00000000 != (undefined1 *)0x91c) {
      pcVar10 = "C:\\Program Files\\DXTransform Presets\\";
LAB_01028945:
      lstrcpynA((LPSTR)auStack_91c,pcVar10,0x400);
      uStack_51d = 0;
    }
  }
  else {
    _splitpath(aCStack_418,(char *)auStack_51c,(char *)auStack_314,acStack_10c,acStack_210);
    _mbscpy(auStack_91c,auStack_51c);
    _mbscat(auStack_91c,auStack_314);
    _mbscat(auStack_91c,(uchar *)"Presets\\");
    _SfCreateDirectory_8();
  }
  _SfDSFilter_SetDefaultSavePath_8();
LAB_01028960:
  if ((unaff_ESI == (LPCWSTR)0x0) || (*unaff_ESI != L'\0')) {
    WideCharToMultiByte(0,0,unaff_ESI,-1,aCStack_a1c,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0xa1c) {
    aCStack_a1c[0] = '\0';
  }
  uVar5 = 0xffffffff;
  puVar7 = auStack_91c;
  do {
    puVar8 = puVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    puVar8 = puVar7 + 1;
    uVar1 = *puVar7;
    puVar7 = puVar8;
  } while (uVar1 != '\0');
  uVar5 = ~uVar5;
  uStack_91d = 0;
  puVar7 = puVar8 + -uVar5;
  puVar8 = unaff_retaddr;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 4;
    puVar8 = puVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = aCStack_a1c;
  do {
    pcVar9 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  do {
    puVar7 = unaff_retaddr;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar7 = unaff_retaddr + 1;
    uVar1 = *unaff_retaddr;
    unaff_retaddr = puVar7;
  } while (uVar1 != '\0');
  puVar8 = (uchar *)(pcVar9 + -uVar5);
  puVar7 = puVar7 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  return 0;
}


