/* Module: vegas30k.dll
   Function: DtBuildTreeFromList
   Address: 01018980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtBuildTreeFromList(struct tagDIR_TREE *,struct tSFLIST *) */

long DtBuildTreeFromList(tagDIR_TREE *param_1,tSFLIST *param_2)

{
  char cVar1;
  tagDIR_ENTRY *ptVar2;
  LPCSTR pCVar3;
  char *pcVar4;
  HANDLE hFindFile;
  undefined4 uVar5;
  int iVar6;
  tagDIR_ENTRY **unaff_EDI;
  long lVar7;
  LPCSTR local_34c;
  tagDIR_ENTRY *local_348;
  int local_344;
  undefined1 local_340 [512];
  _WIN32_FIND_DATAA local_140;
  
                    /* 0x18980  42  ?DtBuildTreeFromList@@YGJPAUtagDIR_TREE@@PAUtSFLIST@@@Z */
  lVar7 = 0;
  FUN_01016830(param_1,0);
  local_344 = 0;
  pcVar4 = (char *)0x0;
  do {
    if (param_2 == (tSFLIST *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)param_2;
    }
    if (iVar6 <= local_344) {
      return lVar7;
    }
    if (param_2 == (tSFLIST *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)param_2;
    }
    if ((local_344 < 0) || (iVar6 + -1 < local_344)) {
      local_34c = (LPCSTR)0x0;
    }
    else {
      local_34c = (LPCSTR)(*(int *)(param_2 + 4) * local_344 + *(int *)(param_2 + 8));
    }
    local_348 = (tagDIR_ENTRY *)0x0;
    pCVar3 = local_34c + 0x104;
    ptVar2 = *(tagDIR_ENTRY **)param_1;
    if (local_34c[0x104] == '\\') {
      pCVar3 = CharNextA(pCVar3);
    }
    cVar1 = *pCVar3;
    while (cVar1 != '\0') {
      pcVar4 = pCVar3;
      if (*pCVar3 == '\\') {
        pcVar4 = CharNextA(pCVar3);
      }
      cVar1 = *pcVar4;
      pCVar3 = pcVar4;
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        pCVar3 = CharNextA(pCVar3);
        cVar1 = *pCVar3;
      }
      cVar1 = *pCVar3;
      if (cVar1 == '\0') break;
      *pCVar3 = '\0';
      FUN_01018940(pcVar4);
      local_348 = DtGetLocalDirEntry(ptVar2,pcVar4);
      if ((local_348 == (tagDIR_ENTRY *)0x0) &&
         (lVar7 = DtAllocateDirectoryEntry
                            (param_1,ptVar2,(char *)0x0,pcVar4,(char *)0x0,0,0x1000000000,0,
                             (int)&local_348,unaff_EDI), lVar7 < 0)) {
        pCVar3 = local_34c + 0x104;
        uVar5 = _SfGetString2_8(DAT_0120e5c8,0x107c);
        SfPrintF(local_340,uVar5,pCVar3);
        FUN_01016830(param_1,local_340);
        break;
      }
      *pCVar3 = cVar1;
      ptVar2 = local_348;
    }
    hFindFile = FindFirstFileA(local_34c,&local_140);
    if (hFindFile == (HANDLE)0xffffffff) {
      uVar5 = _SfGetString2_8(DAT_0120e5c8,0x107e);
      SfPrintF(local_340,uVar5,local_34c);
      FUN_01016830(param_1,local_340);
      return -0x7ffb1ff9;
    }
    FindClose(hFindFile);
    local_348 = DtGetLocalDirEntry(ptVar2,pcVar4);
    if (local_348 != (tagDIR_ENTRY *)0x0) {
      uVar5 = _SfGetString2_8(DAT_0120e5c8,0x107f);
      SfPrintF(local_340,uVar5,pcVar4);
      FUN_01016830(param_1,local_340);
      return -0x7ffb1fce;
    }
    lVar7 = DtAllocateDirectoryEntry
                      (param_1,ptVar2,(char *)0x0,pcVar4,local_34c,
                       (ulonglong)local_140.nFileSizeLow << 0x20,
                       CONCAT44(local_140.dwFileAttributes,local_140.nFileSizeHigh),0,
                       (int)&local_348,unaff_EDI);
    if (lVar7 < 0) {
      uVar5 = _SfGetString2_8(DAT_0120e5c8,0x107d);
      SfPrintF(local_340,uVar5,local_34c);
      FUN_01016830(param_1,local_340);
      return lVar7;
    }
    local_344 = local_344 + 1;
  } while( true );
}


