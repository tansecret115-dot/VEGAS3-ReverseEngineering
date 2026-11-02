/* Module: vegas30k.dll
   Function: DtAddEntryToDirTree
   Address: 01018160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtAddEntryToDirTree(struct tagDIR_TREE *,struct tagDIR_ENTRY *,char *) */

long DtAddEntryToDirTree(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,char *param_3)

{
  HANDLE hFindFile;
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  tagDIR_ENTRY **unaff_EBP;
  char *pcVar5;
  DWORD DVar6;
  ulong uVar7;
  tagDIR_ENTRY **pptVar8;
  uchar *puVar9;
  tagDIR_ENTRY *local_448;
  _WIN32_FIND_DATAA local_444;
  uchar local_304 [260];
  undefined1 local_200 [512];
  
                    /* 0x18160  39  ?DtAddEntryToDirTree@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@PAD@Z
                        */
  FUN_01016830(param_1,0);
  hFindFile = FindFirstFileA(param_3,&local_444);
  if (hFindFile == (HANDLE)0xffffffff) {
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x107e);
    SfPrintF(local_200,uVar1,param_3);
    FUN_01016830(param_1,local_200);
    return -0x7ffb1ff9;
  }
  FindClose(hFindFile);
  if (local_444.cAlternateFileName[0] == '\0') {
    _mbscpy(local_304,(uchar *)local_444.cFileName);
    CharUpperA((LPSTR)local_304);
  }
  else {
    _mbscpy(local_304,(uchar *)local_444.cAlternateFileName);
  }
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    param_2 = *(tagDIR_ENTRY **)(param_2 + 0x21c);
  }
  local_448 = DtGetLocalDirEntry(param_2,(char *)local_304);
  if (local_448 != (tagDIR_ENTRY *)0x0) {
    puVar9 = local_304;
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x1074);
    iVar2 = SfMsgBox(0,4,uVar1,puVar9);
    if (iVar2 == 7) {
      return -0x7ffcffb0;
    }
    lVar3 = DtDeleteDirEntry(param_1,local_448);
    if (lVar3 < 0) {
      return lVar3;
    }
  }
  pptVar8 = &local_448;
  uVar7 = 1;
  uVar1 = 0;
  pcVar5 = param_3;
  DVar6 = local_444.dwFileAttributes;
  pcVar4 = (char *)_SfGetFileNamePtrA_4(param_3);
  lVar3 = DtAllocateDirectoryEntry
                    (param_1,param_2,(char *)0x0,pcVar4,pcVar5,
                     CONCAT44(local_444.nFileSizeLow,uVar1),CONCAT44(DVar6,local_444.nFileSizeHigh),
                     uVar7,(int)pptVar8,unaff_EBP);
  if ((-1 < lVar3) && ((local_444.dwFileAttributes & 0x10) != 0)) {
    lVar3 = FUN_01017bb0(param_1,local_448,param_3);
    if (-1 < lVar3) {
      return lVar3;
    }
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x107e);
    SfPrintF(local_200,uVar1,param_3);
    FUN_01016830(param_1,local_200);
  }
  return lVar3;
}


