/* Module: vegas30k.dll
   Function: FUN_01028690
   Address: 01028690
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01028690(int *param_1,int param_2)

{
  char cVar1;
  LSTATUS LVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  PHKEY unaff_retaddr;
  char *pcVar8;
  LPOLESTR pOStack_51c;
  WCHAR local_510 [4];
  CHAR aCStack_508 [255];
  undefined1 uStack_409;
  CHAR aCStack_408 [1023];
  undefined1 uStack_9;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  pOStack_51c = local_510;
  (**(code **)(*param_1 + 0xc))(param_1);
  if (param_2 == 0) {
    if (&stack0x00000000 == (undefined1 *)0x408) goto LAB_0102870d;
    pcVar8 = "Software\\DirectShow\\Presets\\";
  }
  else {
    if (&stack0x00000000 == (undefined1 *)0x408) goto LAB_0102870d;
    pcVar8 = "Software\\DXTransform\\Presets\\";
  }
  lstrcpynA(aCStack_408,pcVar8,0x400);
  uStack_9 = 0;
LAB_0102870d:
  StringFromCLSID((IID *)&stack0xfffffae8,&pOStack_51c);
  if ((pOStack_51c == (LPCWSTR)0x0) || (*pOStack_51c != L'\0')) {
    WideCharToMultiByte(0,0,pOStack_51c,-1,aCStack_508,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x508) {
    aCStack_508[0] = '\0';
  }
  uVar3 = 0xffffffff;
  uStack_409 = 0;
  pcVar8 = aCStack_508;
  do {
    pcVar7 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar8 = aCStack_408;
  do {
    pcVar6 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  pcVar8 = pcVar7 + -uVar3;
  pcVar7 = pcVar6 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  CoTaskMemFree(pOStack_51c);
  pOStack_51c = (LPOLESTR)0x0;
  if (param_1 != (int *)0x0) {
    LVar2 = RegCreateKeyA((HKEY)&DAT_80000001,aCStack_408,unaff_retaddr);
    return (uint)(LVar2 != 0);
  }
  LVar2 = RegOpenKeyExA((HKEY)&DAT_80000001,aCStack_408,0,0x2001f,unaff_retaddr);
  return (uint)(LVar2 != 0);
}


